/*
#############################################################################################
# RocketLeague (1.0.10897.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_functions.h
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

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventAdHocDestroyed ( )
{
	static UFunction* pFnEventAdHocDestroyed = NULL;

	if ( ! pFnEventAdHocDestroyed )
		pFnEventAdHocDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37459 ];

	UAdHocDelegates_execEventAdHocDestroyed_Parms EventAdHocDestroyed_Parms;

	this->ProcessEvent ( pFnEventAdHocDestroyed, &EventAdHocDestroyed_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventAdHocFinalized ( )
{
	static UFunction* pFnEventAdHocFinalized = NULL;

	if ( ! pFnEventAdHocFinalized )
		pFnEventAdHocFinalized = (UFunction*) UObject::GObjObjects()->Data[ 37461 ];

	UAdHocDelegates_execEventAdHocFinalized_Parms EventAdHocFinalized_Parms;

	this->ProcessEvent ( pFnEventAdHocFinalized, &EventAdHocFinalized_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventStationDisconnected ( )
{
	static UFunction* pFnEventStationDisconnected = NULL;

	if ( ! pFnEventStationDisconnected )
		pFnEventStationDisconnected = (UFunction*) UObject::GObjObjects()->Data[ 37463 ];

	UAdHocDelegates_execEventStationDisconnected_Parms EventStationDisconnected_Parms;

	this->ProcessEvent ( pFnEventStationDisconnected, &EventStationDisconnected_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventStationConnected
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventStationConnected ( )
{
	static UFunction* pFnEventStationConnected = NULL;

	if ( ! pFnEventStationConnected )
		pFnEventStationConnected = (UFunction*) UObject::GObjObjects()->Data[ 37465 ];

	UAdHocDelegates_execEventStationConnected_Parms EventStationConnected_Parms;

	this->ProcessEvent ( pFnEventStationConnected, &EventStationConnected_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventBecomeStation ( )
{
	static UFunction* pFnEventBecomeStation = NULL;

	if ( ! pFnEventBecomeStation )
		pFnEventBecomeStation = (UFunction*) UObject::GObjObjects()->Data[ 37467 ];

	UAdHocDelegates_execEventBecomeStation_Parms EventBecomeStation_Parms;

	this->ProcessEvent ( pFnEventBecomeStation, &EventBecomeStation_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventAccessPointCreated ( )
{
	static UFunction* pFnEventAccessPointCreated = NULL;

	if ( ! pFnEventAccessPointCreated )
		pFnEventAccessPointCreated = (UFunction*) UObject::GObjObjects()->Data[ 37469 ];

	UAdHocDelegates_execEventAccessPointCreated_Parms EventAccessPointCreated_Parms;

	this->ProcessEvent ( pFnEventAccessPointCreated, &EventAccessPointCreated_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
// [0x00120000] 
// Parameters infos:

void UAdHocDelegates::EventAdHocInitialized ( )
{
	static UFunction* pFnEventAdHocInitialized = NULL;

	if ( ! pFnEventAdHocInitialized )
		pFnEventAdHocInitialized = (UFunction*) UObject::GObjObjects()->Data[ 37471 ];

	UAdHocDelegates_execEventAdHocInitialized_Parms EventAdHocInitialized_Parms;

	this->ProcessEvent ( pFnEventAdHocInitialized, &EventAdHocInitialized_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventAdHocError
// [0x00120000] 
// Parameters infos:
// class UError*                  Error                          ( CPF_Parm )

void UAdHocDelegates::EventAdHocError ( class UError* Error )
{
	static UFunction* pFnEventAdHocError = NULL;

	if ( ! pFnEventAdHocError )
		pFnEventAdHocError = (UFunction*) UObject::GObjObjects()->Data[ 37473 ];

	UAdHocDelegates_execEventAdHocError_Parms EventAdHocError_Parms;
	EventAdHocError_Parms.Error = Error;

	this->ProcessEvent ( pFnEventAdHocError, &EventAdHocError_Parms, NULL );
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
// [0x00120000] 
// Parameters infos:
// TArray< struct FAdHocAccessPointInfo > Ahapis                         ( CPF_Parm | CPF_NeedCtorLink )

void UAdHocDelegates::EventAdHocOnNetworkChanged ( TArray< struct FAdHocAccessPointInfo > Ahapis )
{
	static UFunction* pFnEventAdHocOnNetworkChanged = NULL;

	if ( ! pFnEventAdHocOnNetworkChanged )
		pFnEventAdHocOnNetworkChanged = (UFunction*) UObject::GObjObjects()->Data[ 37455 ];

	UAdHocDelegates_execEventAdHocOnNetworkChanged_Parms EventAdHocOnNetworkChanged_Parms;
	memcpy ( &EventAdHocOnNetworkChanged_Parms.Ahapis, &Ahapis, 0xC );

	this->ProcessEvent ( pFnEventAdHocOnNetworkChanged, &EventAdHocOnNetworkChanged_Parms, NULL );
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UHttpRequestCurl::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 37565 ];

	UHttpRequestCurl_execProcessRequest_Parms ProcessRequest_Parms;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessRequest, &ProcessRequest_Parms, NULL );

	pFnProcessRequest->FunctionFlags |= 0x400;

	return ProcessRequest_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 HeaderValue                    ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestCurl::SetHeader ( struct FString HeaderName, struct FString HeaderValue )
{
	static UFunction* pFnSetHeader = NULL;

	if ( ! pFnSetHeader )
		pFnSetHeader = (UFunction*) UObject::GObjObjects()->Data[ 37561 ];

	UHttpRequestCurl_execSetHeader_Parms SetHeader_Parms;
	memcpy ( &SetHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &SetHeader_Parms.HeaderValue, &HeaderValue, 0xC );

	pFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHeader, &SetHeader_Parms, NULL );

	pFnSetHeader->FunctionFlags |= 0x400;

	return SetHeader_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ContentString                  ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestCurl::SetContentAsString ( struct FString ContentString )
{
	static UFunction* pFnSetContentAsString = NULL;

	if ( ! pFnSetContentAsString )
		pFnSetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 37558 ];

	UHttpRequestCurl_execSetContentAsString_Parms SetContentAsString_Parms;
	memcpy ( &SetContentAsString_Parms.ContentString, &ContentString, 0xC );

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContentAsString, &SetContentAsString_Parms, NULL );

	pFnSetContentAsString->FunctionFlags |= 0x400;

	return SetContentAsString_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        ContentPayload                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestCurl::SetContent ( TArray< unsigned char >* ContentPayload )
{
	static UFunction* pFnSetContent = NULL;

	if ( ! pFnSetContent )
		pFnSetContent = (UFunction*) UObject::GObjObjects()->Data[ 37554 ];

	UHttpRequestCurl_execSetContent_Parms SetContent_Parms;

	pFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContent, &SetContent_Parms, NULL );

	pFnSetContent->FunctionFlags |= 0x400;

	if ( ContentPayload )
		memcpy ( ContentPayload, &SetContent_Parms.ContentPayload, 0xC );

	return SetContent_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestCurl::SetURL ( struct FString URL )
{
	static UFunction* pFnSetURL = NULL;

	if ( ! pFnSetURL )
		pFnSetURL = (UFunction*) UObject::GObjObjects()->Data[ 37551 ];

	UHttpRequestCurl_execSetURL_Parms SetURL_Parms;
	memcpy ( &SetURL_Parms.URL, &URL, 0xC );

	pFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetURL, &SetURL_Parms, NULL );

	pFnSetURL->FunctionFlags |= 0x400;

	return SetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.SetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Verb                           ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestCurl::SetVerb ( struct FString Verb )
{
	static UFunction* pFnSetVerb = NULL;

	if ( ! pFnSetVerb )
		pFnSetVerb = (UFunction*) UObject::GObjObjects()->Data[ 37548 ];

	UHttpRequestCurl_execSetVerb_Parms SetVerb_Parms;
	memcpy ( &SetVerb_Parms.Verb, &Verb, 0xC );

	pFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVerb, &SetVerb_Parms, NULL );

	pFnSetVerb->FunctionFlags |= 0x400;

	return SetVerb_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestCurl::GetVerb ( )
{
	static UFunction* pFnGetVerb = NULL;

	if ( ! pFnGetVerb )
		pFnGetVerb = (UFunction*) UObject::GObjObjects()->Data[ 37546 ];

	UHttpRequestCurl_execGetVerb_Parms GetVerb_Parms;

	pFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVerb, &GetVerb_Parms, NULL );

	pFnGetVerb->FunctionFlags |= 0x400;

	return GetVerb_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpRequestCurl::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 37543 ];

	UHttpRequestCurl_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function IpDrv.HttpRequestCurl.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestCurl::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 37541 ];

	UHttpRequestCurl_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpRequestCurl::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 37539 ];

	UHttpRequestCurl_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestCurl::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 37537 ];

	UHttpRequestCurl_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestCurl::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 37534 ];

	UHttpRequestCurl_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpRequestCurl::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 37531 ];

	UHttpRequestCurl_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function IpDrv.HttpRequestCurl.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestCurl::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 37528 ];

	UHttpRequestCurl_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseCurl::GetResponseCode ( )
{
	static UFunction* pFnGetResponseCode = NULL;

	if ( ! pFnGetResponseCode )
		pFnGetResponseCode = (UFunction*) UObject::GObjObjects()->Data[ 37590 ];

	UHttpResponseCurl_execGetResponseCode_Parms GetResponseCode_Parms;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResponseCode, &GetResponseCode_Parms, NULL );

	pFnGetResponseCode->FunctionFlags |= 0x400;

	return GetResponseCode_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseCurl::GetContentAsString ( )
{
	static UFunction* pFnGetContentAsString = NULL;

	if ( ! pFnGetContentAsString )
		pFnGetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 37588 ];

	UHttpResponseCurl_execGetContentAsString_Parms GetContentAsString_Parms;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentAsString, &GetContentAsString_Parms, NULL );

	pFnGetContentAsString->FunctionFlags |= 0x400;

	return GetContentAsString_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpResponseCurl::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 37585 ];

	UHttpResponseCurl_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function IpDrv.HttpResponseCurl.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseCurl::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 37583 ];

	UHttpResponseCurl_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseCurl::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 37581 ];

	UHttpResponseCurl_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseCurl::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 37579 ];

	UHttpResponseCurl_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseCurl::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 37576 ];

	UHttpResponseCurl_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpResponseCurl::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 37573 ];

	UHttpResponseCurl_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function IpDrv.HttpResponseCurl.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseCurl::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 37570 ];

	UHttpResponseCurl_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AInternetLink::eventResolveFailed ( )
{
	static UFunction* pFnResolveFailed = NULL;

	if ( ! pFnResolveFailed )
		pFnResolveFailed = (UFunction*) UObject::GObjObjects()->Data[ 37638 ];

	AInternetLink_eventResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent ( pFnResolveFailed, &ResolveFailed_Parms, NULL );
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FIpAddr                 Addr                           ( CPF_Parm )

void AInternetLink::eventResolved ( struct FIpAddr Addr )
{
	static UFunction* pFnResolved = NULL;

	if ( ! pFnResolved )
		pFnResolved = (UFunction*) UObject::GObjObjects()->Data[ 37636 ];

	AInternetLink_eventResolved_Parms Resolved_Parms;
	memcpy ( &Resolved_Parms.Addr, &Addr, 0x14 );

	this->ProcessEvent ( pFnResolved, &Resolved_Parms, NULL );
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FIpAddr                 Arg                            ( CPF_Parm | CPF_OutParm )

void AInternetLink::GetLocalIP ( struct FIpAddr* Arg )
{
	static UFunction* pFnGetLocalIP = NULL;

	if ( ! pFnGetLocalIP )
		pFnGetLocalIP = (UFunction*) UObject::GObjObjects()->Data[ 37634 ];

	AInternetLink_execGetLocalIP_Parms GetLocalIP_Parms;

	pFnGetLocalIP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLocalIP, &GetLocalIP_Parms, NULL );

	pFnGetLocalIP->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetLocalIP_Parms.Arg, 0x14 );
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FIpAddr                 Addr                           ( CPF_Parm | CPF_OutParm )

bool AInternetLink::StringToIpAddr ( struct FString Str, struct FIpAddr* Addr )
{
	static UFunction* pFnStringToIpAddr = NULL;

	if ( ! pFnStringToIpAddr )
		pFnStringToIpAddr = (UFunction*) UObject::GObjObjects()->Data[ 37630 ];

	AInternetLink_execStringToIpAddr_Parms StringToIpAddr_Parms;
	memcpy ( &StringToIpAddr_Parms.Str, &Str, 0xC );

	pFnStringToIpAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStringToIpAddr, &StringToIpAddr_Parms, NULL );

	pFnStringToIpAddr->FunctionFlags |= 0x400;

	if ( Addr )
		memcpy ( Addr, &StringToIpAddr_Parms.Addr, 0x14 );

	return StringToIpAddr_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FIpAddr                 Arg                            ( CPF_Parm )

struct FString AInternetLink::IpAddrToString ( struct FIpAddr Arg )
{
	static UFunction* pFnIpAddrToString = NULL;

	if ( ! pFnIpAddrToString )
		pFnIpAddrToString = (UFunction*) UObject::GObjObjects()->Data[ 37627 ];

	AInternetLink_execIpAddrToString_Parms IpAddrToString_Parms;
	memcpy ( &IpAddrToString_Parms.Arg, &Arg, 0x14 );

	pFnIpAddrToString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIpAddrToString, &IpAddrToString_Parms, NULL );

	pFnIpAddrToString->FunctionFlags |= 0x400;

	return IpAddrToString_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AInternetLink::GetLastError ( )
{
	static UFunction* pFnGetLastError = NULL;

	if ( ! pFnGetLastError )
		pFnGetLastError = (UFunction*) UObject::GObjObjects()->Data[ 37625 ];

	AInternetLink_execGetLastError_Parms GetLastError_Parms;

	pFnGetLastError->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLastError, &GetLastError_Parms, NULL );

	pFnGetLastError->FunctionFlags |= 0x400;

	return GetLastError_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Domain                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AInternetLink::Resolve ( struct FString Domain )
{
	static UFunction* pFnResolve = NULL;

	if ( ! pFnResolve )
		pFnResolve = (UFunction*) UObject::GObjObjects()->Data[ 37623 ];

	AInternetLink_execResolve_Parms Resolve_Parms;
	memcpy ( &Resolve_Parms.Domain, &Domain, 0xC );

	pFnResolve->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResolve, &Resolve_Parms, NULL );

	pFnResolve->FunctionFlags |= 0x400;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 Addr                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            PortNum                        ( CPF_Parm | CPF_OutParm )
// struct FString                 LevelName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 EntryName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AInternetLink::ParseURL ( struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName )
{
	static UFunction* pFnParseURL = NULL;

	if ( ! pFnParseURL )
		pFnParseURL = (UFunction*) UObject::GObjObjects()->Data[ 37616 ];

	AInternetLink_execParseURL_Parms ParseURL_Parms;
	memcpy ( &ParseURL_Parms.URL, &URL, 0xC );

	pFnParseURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParseURL, &ParseURL_Parms, NULL );

	pFnParseURL->FunctionFlags |= 0x400;

	if ( Addr )
		memcpy ( Addr, &ParseURL_Parms.Addr, 0xC );

	if ( PortNum )
		*PortNum = ParseURL_Parms.PortNum;

	if ( LevelName )
		memcpy ( LevelName, &ParseURL_Parms.LevelName, 0xC );

	if ( EntryName )
		memcpy ( EntryName, &ParseURL_Parms.EntryName, 0xC );

	return ParseURL_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AInternetLink::IsDataPending ( )
{
	static UFunction* pFnIsDataPending = NULL;

	if ( ! pFnIsDataPending )
		pFnIsDataPending = (UFunction*) UObject::GObjObjects()->Data[ 37614 ];

	AInternetLink_execIsDataPending_Parms IsDataPending_Parms;

	pFnIsDataPending->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDataPending, &IsDataPending_Parms, NULL );

	pFnIsDataPending->FunctionFlags |= 0x400;

	return IsDataPending_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void ATcpLink::eventReceivedBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReceivedBinary = NULL;

	if ( ! pFnReceivedBinary )
		pFnReceivedBinary = (UFunction*) UObject::GObjObjects()->Data[ 41393 ];

	ATcpLink_eventReceivedBinary_Parms ReceivedBinary_Parms;
	ReceivedBinary_Parms.Count = Count;
	memcpy ( &ReceivedBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnReceivedBinary, &ReceivedBinary_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Line                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedLine ( struct FString Line )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = (UFunction*) UObject::GObjObjects()->Data[ 41391 ];

	ATcpLink_eventReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.Line, &Line, 0xC );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedText ( struct FString Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = (UFunction*) UObject::GObjObjects()->Data[ 41389 ];

	ATcpLink_eventReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventClosed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 41388 ];

	ATcpLink_eventClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventOpened ( )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 41387 ];

	ATcpLink_eventOpened_Parms Opened_Parms;

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventAccepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = (UFunction*) UObject::GObjObjects()->Data[ 41386 ];

	ATcpLink_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm | CPF_OutParm )

int ATcpLink::ReadBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReadBinary = NULL;

	if ( ! pFnReadBinary )
		pFnReadBinary = (UFunction*) UObject::GObjObjects()->Data[ 41382 ];

	ATcpLink_execReadBinary_Parms ReadBinary_Parms;
	ReadBinary_Parms.Count = Count;

	pFnReadBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBinary, &ReadBinary_Parms, NULL );

	pFnReadBinary->FunctionFlags |= 0x400;

	if ( B )
		memcpy ( B, &ReadBinary_Parms.B, 0xFF );

	return ReadBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int ATcpLink::ReadText ( struct FString* Str )
{
	static UFunction* pFnReadText = NULL;

	if ( ! pFnReadText )
		pFnReadText = (UFunction*) UObject::GObjObjects()->Data[ 41379 ];

	ATcpLink_execReadText_Parms ReadText_Parms;

	pFnReadText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadText, &ReadText_Parms, NULL );

	pFnReadText->FunctionFlags |= 0x400;

	if ( Str )
		memcpy ( Str, &ReadText_Parms.Str, 0xC );

	return ReadText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

int ATcpLink::SendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = (UFunction*) UObject::GObjObjects()->Data[ 41375 ];

	ATcpLink_execSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	pFnSendBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );

	pFnSendBinary->FunctionFlags |= 0x400;

	return SendBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int ATcpLink::SendText ( struct FString Str )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = (UFunction*) UObject::GObjObjects()->Data[ 41372 ];

	ATcpLink_execSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Str, &Str, 0xC );

	pFnSendText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );

	pFnSendText->FunctionFlags |= 0x400;

	return SendText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::IsConnected ( )
{
	static UFunction* pFnIsConnected = NULL;

	if ( ! pFnIsConnected )
		pFnIsConnected = (UFunction*) UObject::GObjObjects()->Data[ 41370 ];

	ATcpLink_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsConnected, &IsConnected_Parms, NULL );

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 41368 ];

	ATcpLink_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;

	return Close_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 Addr                           ( CPF_Parm )

bool ATcpLink::Open ( struct FIpAddr Addr )
{
	static UFunction* pFnOpen = NULL;

	if ( ! pFnOpen )
		pFnOpen = (UFunction*) UObject::GObjObjects()->Data[ 41365 ];

	ATcpLink_execOpen_Parms Open_Parms;
	memcpy ( &Open_Parms.Addr, &Addr, 0x14 );

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpen, &Open_Parms, NULL );

	pFnOpen->FunctionFlags |= 0x400;

	return Open_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Listen ( )
{
	static UFunction* pFnListen = NULL;

	if ( ! pFnListen )
		pFnListen = (UFunction*) UObject::GObjObjects()->Data[ 41363 ];

	ATcpLink_execListen_Parms Listen_Parms;

	pFnListen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnListen, &Listen_Parms, NULL );

	pFnListen->FunctionFlags |= 0x400;

	return Listen_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PortNum                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseNextAvailable              ( CPF_OptionalParm | CPF_Parm )

int ATcpLink::BindPort ( int PortNum, unsigned long bUseNextAvailable )
{
	static UFunction* pFnBindPort = NULL;

	if ( ! pFnBindPort )
		pFnBindPort = (UFunction*) UObject::GObjObjects()->Data[ 41359 ];

	ATcpLink_execBindPort_Parms BindPort_Parms;
	BindPort_Parms.PortNum = PortNum;
	BindPort_Parms.bUseNextAvailable = bUseNextAvailable;

	pFnBindPort->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPort, &BindPort_Parms, NULL );

	pFnBindPort->FunctionFlags |= 0x400;

	return BindPort_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

struct FString UMcpServiceBase::GetUserAuthURL ( struct FString McpId )
{
	static UFunction* pFnGetUserAuthURL = NULL;

	if ( ! pFnGetUserAuthURL )
		pFnGetUserAuthURL = (UFunction*) UObject::GObjObjects()->Data[ 37652 ];

	UMcpServiceBase_execGetUserAuthURL_Parms GetUserAuthURL_Parms;
	memcpy ( &GetUserAuthURL_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetUserAuthURL, &GetUserAuthURL_Parms, NULL );

	return GetUserAuthURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UMcpServiceBase::GetAppAccessURL ( )
{
	static UFunction* pFnGetAppAccessURL = NULL;

	if ( ! pFnGetAppAccessURL )
		pFnGetAppAccessURL = (UFunction*) UObject::GObjObjects()->Data[ 37648 ];

	UMcpServiceBase_execGetAppAccessURL_Parms GetAppAccessURL_Parms;

	this->ProcessEvent ( pFnGetAppAccessURL, &GetAppAccessURL_Parms, NULL );

	return GetAppAccessURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UMcpServiceBase::GetBaseURL ( )
{
	static UFunction* pFnGetBaseURL = NULL;

	if ( ! pFnGetBaseURL )
		pFnGetBaseURL = (UFunction*) UObject::GObjObjects()->Data[ 37644 ];

	UMcpServiceBase_execGetBaseURL_Parms GetBaseURL_Parms;

	this->ProcessEvent ( pFnGetBaseURL, &GetBaseURL_Parms, NULL );

	return GetBaseURL_Parms.ReturnValue;
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMcpServiceBase::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37642 ];

	UMcpServiceBase_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// class UOnlineMatchmakingStats* MMStats                        ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats ( struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats )
{
	static UFunction* pFnUploadMatchmakingStats = NULL;

	if ( ! pFnUploadMatchmakingStats )
		pFnUploadMatchmakingStats = (UFunction*) UObject::GObjObjects()->Data[ 40233 ];

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms UploadMatchmakingStats_Parms;
	memcpy ( &UploadMatchmakingStats_Parms.UniqueId, &UniqueId, 0x48 );
	UploadMatchmakingStats_Parms.MMStats = MMStats;

	pFnUploadMatchmakingStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUploadMatchmakingStats, &UploadMatchmakingStats_Parms, NULL );

	pFnUploadMatchmakingStats->FunctionFlags |= 0x400;

	return UploadMatchmakingStats_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            NumPlayers                     ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation ( int PlaylistId, int NumPlayers )
{
	static UFunction* pFnUpdatePlaylistPopulation = NULL;

	if ( ! pFnUpdatePlaylistPopulation )
		pFnUpdatePlaylistPopulation = (UFunction*) UObject::GObjObjects()->Data[ 40229 ];

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms UpdatePlaylistPopulation_Parms;
	UpdatePlaylistPopulation_Parms.PlaylistId = PlaylistId;
	UpdatePlaylistPopulation_Parms.NumPlayers = NumPlayers;

	pFnUpdatePlaylistPopulation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Parms, NULL );

	pFnUpdatePlaylistPopulation->FunctionFlags |= 0x400;

	return UpdatePlaylistPopulation_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// TArray< unsigned char >        Payload                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData ( struct FUniqueNetId UniqueId, TArray< unsigned char >* Payload )
{
	static UFunction* pFnUploadGameplayEventsData = NULL;

	if ( ! pFnUploadGameplayEventsData )
		pFnUploadGameplayEventsData = (UFunction*) UObject::GObjObjects()->Data[ 40224 ];

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms UploadGameplayEventsData_Parms;
	memcpy ( &UploadGameplayEventsData_Parms.UniqueId, &UniqueId, 0x48 );

	pFnUploadGameplayEventsData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUploadGameplayEventsData, &UploadGameplayEventsData_Parms, NULL );

	pFnUploadGameplayEventsData->FunctionFlags |= 0x400;

	if ( Payload )
		memcpy ( Payload, &UploadGameplayEventsData_Parms.Payload, 0xC );

	return UploadGameplayEventsData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// struct FString                 PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadPlayerData ( struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnUploadPlayerData = NULL;

	if ( ! pFnUploadPlayerData )
		pFnUploadPlayerData = (UFunction*) UObject::GObjObjects()->Data[ 40218 ];

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms UploadPlayerData_Parms;
	memcpy ( &UploadPlayerData_Parms.UniqueId, &UniqueId, 0x48 );
	memcpy ( &UploadPlayerData_Parms.PlayerNick, &PlayerNick, 0xC );
	UploadPlayerData_Parms.ProfileSettings = ProfileSettings;
	UploadPlayerData_Parms.PlayerStorage = PlayerStorage;

	pFnUploadPlayerData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUploadPlayerData, &UploadPlayerData_Parms, NULL );

	pFnUploadPlayerData->FunctionFlags |= 0x400;

	return UploadPlayerData_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

struct FString UOnlineNewsInterfaceMcp::GetNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnGetNews = NULL;

	if ( ! pFnGetNews )
		pFnGetNews = (UFunction*) UObject::GObjObjects()->Data[ 40940 ];

	UOnlineNewsInterfaceMcp_execGetNews_Parms GetNews_Parms;
	GetNews_Parms.LocalUserNum = LocalUserNum;
	GetNews_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnGetNews, &GetNews_Parms, NULL );

	return GetNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadGameNewsDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate )
{
	static UFunction* pFnClearReadNewsCompletedDelegate = NULL;

	if ( ! pFnClearReadNewsCompletedDelegate )
		pFnClearReadNewsCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40937 ];

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms ClearReadNewsCompletedDelegate_Parms;
	memcpy ( &ClearReadNewsCompletedDelegate_Parms.ReadGameNewsDelegate, &ReadGameNewsDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadNewsDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate )
{
	static UFunction* pFnAddReadNewsCompletedDelegate = NULL;

	if ( ! pFnAddReadNewsCompletedDelegate )
		pFnAddReadNewsCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40935 ];

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms AddReadNewsCompletedDelegate_Parms;
	memcpy ( &AddReadNewsCompletedDelegate_Parms.ReadNewsDelegate, &ReadNewsDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType )
{
	static UFunction* pFnOnReadNewsCompleted = NULL;

	if ( ! pFnOnReadNewsCompleted )
		pFnOnReadNewsCompleted = (UFunction*) UObject::GObjObjects()->Data[ 40919 ];

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms OnReadNewsCompleted_Parms;
	OnReadNewsCompleted_Parms.bWasSuccessful = bWasSuccessful;
	OnReadNewsCompleted_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnOnReadNewsCompleted, &OnReadNewsCompleted_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

bool UOnlineNewsInterfaceMcp::ReadNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnReadNews = NULL;

	if ( ! pFnReadNews )
		pFnReadNews = (UFunction*) UObject::GObjObjects()->Data[ 40929 ];

	UOnlineNewsInterfaceMcp_execReadNews_Parms ReadNews_Parms;
	ReadNews_Parms.LocalUserNum = LocalUserNum;
	ReadNews_Parms.NewsType = NewsType;

	pFnReadNews->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadNews, &ReadNews_Parms, NULL );

	pFnReadNews->FunctionFlags |= 0x400;

	return ReadNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UOnlineTitleFileDownloadBase::GetUrlForFile ( struct FString Filename )
{
	static UFunction* pFnGetUrlForFile = NULL;

	if ( ! pFnGetUrlForFile )
		pFnGetUrlForFile = (UFunction*) UObject::GObjObjects()->Data[ 37869 ];

	UOnlineTitleFileDownloadBase_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy ( &GetUrlForFile_Parms.Filename, &Filename, 0xC );

	pFnGetUrlForFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUrlForFile, &GetUrlForFile_Parms, NULL );

	pFnGetUrlForFile->FunctionFlags |= 0x400;

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RequestTitleFileListDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::ClearRequestTitleFileListCompleteDelegate ( struct FScriptDelegate RequestTitleFileListDelegate )
{
	static UFunction* pFnClearRequestTitleFileListCompleteDelegate = NULL;

	if ( ! pFnClearRequestTitleFileListCompleteDelegate )
		pFnClearRequestTitleFileListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37866 ];

	UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Parms ClearRequestTitleFileListCompleteDelegate_Parms;
	memcpy ( &ClearRequestTitleFileListCompleteDelegate_Parms.RequestTitleFileListDelegate, &RequestTitleFileListDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRequestTitleFileListCompleteDelegate, &ClearRequestTitleFileListCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RequestTitleFileListDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::AddRequestTitleFileListCompleteDelegate ( struct FScriptDelegate RequestTitleFileListDelegate )
{
	static UFunction* pFnAddRequestTitleFileListCompleteDelegate = NULL;

	if ( ! pFnAddRequestTitleFileListCompleteDelegate )
		pFnAddRequestTitleFileListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37864 ];

	UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Parms AddRequestTitleFileListCompleteDelegate_Parms;
	memcpy ( &AddRequestTitleFileListCompleteDelegate_Parms.RequestTitleFileListDelegate, &RequestTitleFileListDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRequestTitleFileListCompleteDelegate, &AddRequestTitleFileListCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FString >       ResultStr                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::OnRequestTitleFileListComplete ( unsigned long bWasSuccessful, TArray< struct FString > ResultStr )
{
	static UFunction* pFnOnRequestTitleFileListComplete = NULL;

	if ( ! pFnOnRequestTitleFileListComplete )
		pFnOnRequestTitleFileListComplete = (UFunction*) UObject::GObjObjects()->Data[ 37819 ];

	UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Parms OnRequestTitleFileListComplete_Parms;
	OnRequestTitleFileListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnRequestTitleFileListComplete_Parms.ResultStr, &ResultStr, 0xC );

	this->ProcessEvent ( pFnOnRequestTitleFileListComplete, &OnRequestTitleFileListComplete_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadBase::RequestTitleFileList ( )
{
	static UFunction* pFnRequestTitleFileList = NULL;

	if ( ! pFnRequestTitleFileList )
		pFnRequestTitleFileList = (UFunction*) UObject::GObjObjects()->Data[ 37859 ];

	UOnlineTitleFileDownloadBase_execRequestTitleFileList_Parms RequestTitleFileList_Parms;

	this->ProcessEvent ( pFnRequestTitleFileList, &RequestTitleFileList_Parms, NULL );

	return RequestTitleFileList_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadBase::ClearDownloadedFile ( struct FString Filename )
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if ( ! pFnClearDownloadedFile )
		pFnClearDownloadedFile = (UFunction*) UObject::GObjObjects()->Data[ 37856 ];

	UOnlineTitleFileDownloadBase_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy ( &ClearDownloadedFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL );

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadBase::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = (UFunction*) UObject::GObjObjects()->Data[ 37854 ];

	UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadBase::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 37851 ];

	UOnlineTitleFileDownloadBase_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadBase::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 37846 ];

	UOnlineTitleFileDownloadBase_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37843 ];

	UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37841 ];

	UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  FileType                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineTitleFileDownloadBase::ReadTitleFile ( struct FString FileToRead, unsigned char FileType )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 37837 ];

	UOnlineTitleFileDownloadBase_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );
	ReadTitleFile_Parms.FileType = FileType;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadBase::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37816 ];

	UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile ( struct FString Filename )
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if ( ! pFnClearDownloadedFile )
		pFnClearDownloadedFile = (UFunction*) UObject::GObjObjects()->Data[ 41186 ];

	UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy ( &ClearDownloadedFile_Parms.Filename, &Filename, 0xC );

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL );

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = (UFunction*) UObject::GObjObjects()->Data[ 41184 ];

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 41180 ];

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 41175 ];

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  FileType                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineTitleFileDownloadMcp::ReadTitleFile ( struct FString FileToRead, unsigned char FileType )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 41171 ];

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );
	ReadTitleFile_Parms.FileType = FileType;

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UOnlineTitleFileDownloadWeb::GetUrlForFile ( struct FString Filename )
{
	static UFunction* pFnGetUrlForFile = NULL;

	if ( ! pFnGetUrlForFile )
		pFnGetUrlForFile = (UFunction*) UObject::GObjObjects()->Data[ 37930 ];

	UOnlineTitleFileDownloadWeb_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy ( &GetUrlForFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetUrlForFile, &GetUrlForFile_Parms, NULL );

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UOnlineTitleFileDownloadWeb::OnFileListReceived ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnFileListReceived = NULL;

	if ( ! pFnOnFileListReceived )
		pFnOnFileListReceived = (UFunction*) UObject::GObjObjects()->Data[ 37921 ];

	UOnlineTitleFileDownloadWeb_execOnFileListReceived_Parms OnFileListReceived_Parms;
	OnFileListReceived_Parms.Request = Request;
	OnFileListReceived_Parms.Response = Response;
	OnFileListReceived_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent ( pFnOnFileListReceived, &OnFileListReceived_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadWeb::RequestTitleFileList ( )
{
	static UFunction* pFnRequestTitleFileList = NULL;

	if ( ! pFnRequestTitleFileList )
		pFnRequestTitleFileList = (UFunction*) UObject::GObjObjects()->Data[ 37916 ];

	UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Parms RequestTitleFileList_Parms;

	this->ProcessEvent ( pFnRequestTitleFileList, &RequestTitleFileList_Parms, NULL );

	return RequestTitleFileList_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFile ( struct FString Filename )
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if ( ! pFnClearDownloadedFile )
		pFnClearDownloadedFile = (UFunction*) UObject::GObjObjects()->Data[ 37913 ];

	UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy ( &ClearDownloadedFile_Parms.Filename, &Filename, 0xC );

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL );

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadWeb::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = (UFunction*) UObject::GObjObjects()->Data[ 37911 ];

	UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadWeb::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 37907 ];

	UOnlineTitleFileDownloadWeb_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadWeb::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 37902 ];

	UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FString                 FileRead                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadWeb::TriggerDelegates ( unsigned long bSuccess, struct FString FileRead )
{
	static UFunction* pFnTriggerDelegates = NULL;

	if ( ! pFnTriggerDelegates )
		pFnTriggerDelegates = (UFunction*) UObject::GObjObjects()->Data[ 37888 ];

	UOnlineTitleFileDownloadWeb_execTriggerDelegates_Parms TriggerDelegates_Parms;
	TriggerDelegates_Parms.bSuccess = bSuccess;
	memcpy ( &TriggerDelegates_Parms.FileRead, &FileRead, 0xC );

	pFnTriggerDelegates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerDelegates, &TriggerDelegates_Parms, NULL );

	pFnTriggerDelegates->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UOnlineTitleFileDownloadWeb::OnFileDownloadComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnFileDownloadComplete = NULL;

	if ( ! pFnOnFileDownloadComplete )
		pFnOnFileDownloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 37889 ];

	UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Parms OnFileDownloadComplete_Parms;
	OnFileDownloadComplete_Parms.Request = Request;
	OnFileDownloadComplete_Parms.Response = Response;
	OnFileDownloadComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent ( pFnOnFileDownloadComplete, &OnFileDownloadComplete_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  FileType                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineTitleFileDownloadWeb::ReadTitleFile ( struct FString FileToRead, unsigned char FileType )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 37881 ];

	UOnlineTitleFileDownloadWeb_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );
	ReadTitleFile_Parms.FileType = FileType;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FileCompressionType            ( CPF_Parm )
// TArray< unsigned char >        CompressedFileContents         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        UncompressedFileContents       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadWeb::UncompressTitleFileContents ( unsigned char FileCompressionType, TArray< unsigned char >* CompressedFileContents, TArray< unsigned char >* UncompressedFileContents )
{
	static UFunction* pFnUncompressTitleFileContents = NULL;

	if ( ! pFnUncompressTitleFileContents )
		pFnUncompressTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 37874 ];

	UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Parms UncompressTitleFileContents_Parms;
	UncompressTitleFileContents_Parms.FileCompressionType = FileCompressionType;

	pFnUncompressTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUncompressTitleFileContents, &UncompressTitleFileContents_Parms, NULL );

	pFnUncompressTitleFileContents->FunctionFlags |= 0x400;

	if ( CompressedFileContents )
		memcpy ( CompressedFileContents, &UncompressTitleFileContents_Parms.CompressedFileContents, 0xC );

	if ( UncompressedFileContents )
		memcpy ( UncompressedFileContents, &UncompressTitleFileContents_Parms.UncompressedFileContents, 0xC );

	return UncompressTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UTitleFileDownloadCache::DeleteTitleFile ( struct FString Filename )
{
	static UFunction* pFnDeleteTitleFile = NULL;

	if ( ! pFnDeleteTitleFile )
		pFnDeleteTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 41457 ];

	UTitleFileDownloadCache_execDeleteTitleFile_Parms DeleteTitleFile_Parms;
	memcpy ( &DeleteTitleFile_Parms.Filename, &Filename, 0xC );

	pFnDeleteTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteTitleFile, &DeleteTitleFile_Parms, NULL );

	pFnDeleteTitleFile->FunctionFlags |= 0x400;

	return DeleteTitleFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxAgeSeconds                  ( CPF_Parm )

bool UTitleFileDownloadCache::DeleteTitleFiles ( float MaxAgeSeconds )
{
	static UFunction* pFnDeleteTitleFiles = NULL;

	if ( ! pFnDeleteTitleFiles )
		pFnDeleteTitleFiles = (UFunction*) UObject::GObjObjects()->Data[ 41454 ];

	UTitleFileDownloadCache_execDeleteTitleFiles_Parms DeleteTitleFiles_Parms;
	DeleteTitleFiles_Parms.MaxAgeSeconds = MaxAgeSeconds;

	pFnDeleteTitleFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteTitleFiles, &DeleteTitleFiles_Parms, NULL );

	pFnDeleteTitleFiles->FunctionFlags |= 0x400;

	return DeleteTitleFiles_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UTitleFileDownloadCache::ClearCachedFile ( struct FString Filename )
{
	static UFunction* pFnClearCachedFile = NULL;

	if ( ! pFnClearCachedFile )
		pFnClearCachedFile = (UFunction*) UObject::GObjObjects()->Data[ 41451 ];

	UTitleFileDownloadCache_execClearCachedFile_Parms ClearCachedFile_Parms;
	memcpy ( &ClearCachedFile_Parms.Filename, &Filename, 0xC );

	pFnClearCachedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCachedFile, &ClearCachedFile_Parms, NULL );

	pFnClearCachedFile->FunctionFlags |= 0x400;

	return ClearCachedFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UTitleFileDownloadCache::ClearCachedFiles ( )
{
	static UFunction* pFnClearCachedFiles = NULL;

	if ( ! pFnClearCachedFiles )
		pFnClearCachedFiles = (UFunction*) UObject::GObjObjects()->Data[ 41449 ];

	UTitleFileDownloadCache_execClearCachedFiles_Parms ClearCachedFiles_Parms;

	pFnClearCachedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCachedFiles, &ClearCachedFiles_Parms, NULL );

	pFnClearCachedFiles->FunctionFlags |= 0x400;

	return ClearCachedFiles_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTitleFileDownloadCache::GetTitleFileLogicalName ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileLogicalName = NULL;

	if ( ! pFnGetTitleFileLogicalName )
		pFnGetTitleFileLogicalName = (UFunction*) UObject::GObjObjects()->Data[ 41446 ];

	UTitleFileDownloadCache_execGetTitleFileLogicalName_Parms GetTitleFileLogicalName_Parms;
	memcpy ( &GetTitleFileLogicalName_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileLogicalName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileLogicalName, &GetTitleFileLogicalName_Parms, NULL );

	pFnGetTitleFileLogicalName->FunctionFlags |= 0x400;

	return GetTitleFileLogicalName_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UTitleFileDownloadCache::GetTitleFileHash ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileHash = NULL;

	if ( ! pFnGetTitleFileHash )
		pFnGetTitleFileHash = (UFunction*) UObject::GObjObjects()->Data[ 41443 ];

	UTitleFileDownloadCache_execGetTitleFileHash_Parms GetTitleFileHash_Parms;
	memcpy ( &GetTitleFileHash_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileHash->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileHash, &GetTitleFileHash_Parms, NULL );

	pFnGetTitleFileHash->FunctionFlags |= 0x400;

	return GetTitleFileHash_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UTitleFileDownloadCache::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 41440 ];

	UTitleFileDownloadCache_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	pFnGetTitleFileState->FunctionFlags |= 0x400;

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UTitleFileDownloadCache::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 41435 ];

	UTitleFileDownloadCache_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SaveCompleteDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::ClearSaveTitleFileCompleteDelegate ( struct FScriptDelegate SaveCompleteDelegate )
{
	static UFunction* pFnClearSaveTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearSaveTitleFileCompleteDelegate )
		pFnClearSaveTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41432 ];

	UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Parms ClearSaveTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearSaveTitleFileCompleteDelegate_Parms.SaveCompleteDelegate, &SaveCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearSaveTitleFileCompleteDelegate, &ClearSaveTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SaveCompleteDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::AddSaveTitleFileCompleteDelegate ( struct FScriptDelegate SaveCompleteDelegate )
{
	static UFunction* pFnAddSaveTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddSaveTitleFileCompleteDelegate )
		pFnAddSaveTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41430 ];

	UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Parms AddSaveTitleFileCompleteDelegate_Parms;
	memcpy ( &AddSaveTitleFileCompleteDelegate_Parms.SaveCompleteDelegate, &SaveCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddSaveTitleFileCompleteDelegate, &AddSaveTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::OnSaveTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnSaveTitleFileComplete = NULL;

	if ( ! pFnOnSaveTitleFileComplete )
		pFnOnSaveTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 41405 ];

	UTitleFileDownloadCache_execOnSaveTitleFileComplete_Parms OnSaveTitleFileComplete_Parms;
	OnSaveTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnSaveTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnSaveTitleFileComplete, &OnSaveTitleFileComplete_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 LogicalName                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_NeedCtorLink )

bool UTitleFileDownloadCache::SaveTitleFile ( struct FString Filename, struct FString LogicalName, TArray< unsigned char > FileContents )
{
	static UFunction* pFnSaveTitleFile = NULL;

	if ( ! pFnSaveTitleFile )
		pFnSaveTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 41422 ];

	UTitleFileDownloadCache_execSaveTitleFile_Parms SaveTitleFile_Parms;
	memcpy ( &SaveTitleFile_Parms.Filename, &Filename, 0xC );
	memcpy ( &SaveTitleFile_Parms.LogicalName, &LogicalName, 0xC );
	memcpy ( &SaveTitleFile_Parms.FileContents, &FileContents, 0xC );

	pFnSaveTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveTitleFile, &SaveTitleFile_Parms, NULL );

	pFnSaveTitleFile->FunctionFlags |= 0x400;

	return SaveTitleFile_Parms.ReturnValue;
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoadCompleteDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::ClearLoadTitleFileCompleteDelegate ( struct FScriptDelegate LoadCompleteDelegate )
{
	static UFunction* pFnClearLoadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearLoadTitleFileCompleteDelegate )
		pFnClearLoadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41419 ];

	UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Parms ClearLoadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearLoadTitleFileCompleteDelegate_Parms.LoadCompleteDelegate, &LoadCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLoadTitleFileCompleteDelegate, &ClearLoadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoadCompleteDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::AddLoadTitleFileCompleteDelegate ( struct FScriptDelegate LoadCompleteDelegate )
{
	static UFunction* pFnAddLoadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddLoadTitleFileCompleteDelegate )
		pFnAddLoadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41417 ];

	UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Parms AddLoadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddLoadTitleFileCompleteDelegate_Parms.LoadCompleteDelegate, &LoadCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLoadTitleFileCompleteDelegate, &AddLoadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UTitleFileDownloadCache::OnLoadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnLoadTitleFileComplete = NULL;

	if ( ! pFnOnLoadTitleFileComplete )
		pFnOnLoadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 41402 ];

	UTitleFileDownloadCache_execOnLoadTitleFileComplete_Parms OnLoadTitleFileComplete_Parms;
	OnLoadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnLoadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnLoadTitleFileComplete, &OnLoadTitleFileComplete_Parms, NULL );
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UTitleFileDownloadCache::LoadTitleFile ( struct FString Filename )
{
	static UFunction* pFnLoadTitleFile = NULL;

	if ( ! pFnLoadTitleFile )
		pFnLoadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 41412 ];

	UTitleFileDownloadCache_execLoadTitleFile_Parms LoadTitleFile_Parms;
	memcpy ( &LoadTitleFile_Parms.Filename, &Filename, 0xC );

	pFnLoadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadTitleFile, &LoadTitleFile_Parms, NULL );

	pFnLoadTitleFile->FunctionFlags |= 0x400;

	return LoadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageBase::CacheMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnCacheMessageContents = NULL;

	if ( ! pFnCacheMessageContents )
		pFnCacheMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38757 ];

	UMcpMessageBase_execCacheMessageContents_Parms CacheMessageContents_Parms;
	memcpy ( &CacheMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnCacheMessageContents, &CacheMessageContents_Parms, NULL );

	if ( MessageContents )
		memcpy ( MessageContents, &CacheMessageContents_Parms.MessageContents, 0xC );

	return CacheMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] 
// Parameters infos:
// struct FMcpMessage             Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::CacheMessage ( struct FMcpMessage Message )
{
	static UFunction* pFnCacheMessage = NULL;

	if ( ! pFnCacheMessage )
		pFnCacheMessage = (UFunction*) UObject::GObjObjects()->Data[ 38755 ];

	UMcpMessageBase_execCacheMessage_Parms CacheMessage_Parms;
	memcpy ( &CacheMessage_Parms.Message, &Message, 0x4C );

	this->ProcessEvent ( pFnCacheMessage, &CacheMessage_Parms, NULL );
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageBase::GetMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnGetMessageContents = NULL;

	if ( ! pFnGetMessageContents )
		pFnGetMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38750 ];

	UMcpMessageBase_execGetMessageContents_Parms GetMessageContents_Parms;
	memcpy ( &GetMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnGetMessageContents, &GetMessageContents_Parms, NULL );

	if ( MessageContents )
		memcpy ( MessageContents, &GetMessageContents_Parms.MessageContents, 0xC );

	return GetMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::OnQueryMessageContentsComplete ( struct FString MessageId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryMessageContentsComplete = NULL;

	if ( ! pFnOnQueryMessageContentsComplete )
		pFnOnQueryMessageContentsComplete = (UFunction*) UObject::GObjObjects()->Data[ 38746 ];

	UMcpMessageBase_execOnQueryMessageContentsComplete_Parms OnQueryMessageContentsComplete_Parms;
	memcpy ( &OnQueryMessageContentsComplete_Parms.MessageId, &MessageId, 0xC );
	OnQueryMessageContentsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryMessageContentsComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryMessageContentsComplete, &OnQueryMessageContentsComplete_Parms, NULL );
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::QueryMessageContents ( struct FString MessageId )
{
	static UFunction* pFnQueryMessageContents = NULL;

	if ( ! pFnQueryMessageContents )
		pFnQueryMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38744 ];

	UMcpMessageBase_execQueryMessageContents_Parms QueryMessageContents_Parms;
	memcpy ( &QueryMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnQueryMessageContents, &QueryMessageContents_Parms, NULL );
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] 
// Parameters infos:
// struct FString                 ToUniqueUserId                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpMessageList         MessageList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpMessageBase::GetMessageList ( struct FString ToUniqueUserId, struct FMcpMessageList* MessageList )
{
	static UFunction* pFnGetMessageList = NULL;

	if ( ! pFnGetMessageList )
		pFnGetMessageList = (UFunction*) UObject::GObjObjects()->Data[ 38741 ];

	UMcpMessageBase_execGetMessageList_Parms GetMessageList_Parms;
	memcpy ( &GetMessageList_Parms.ToUniqueUserId, &ToUniqueUserId, 0xC );

	this->ProcessEvent ( pFnGetMessageList, &GetMessageList_Parms, NULL );

	if ( MessageList )
		memcpy ( MessageList, &GetMessageList_Parms.MessageList, 0x18 );
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::OnQueryMessagesComplete ( struct FString UserId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryMessagesComplete = NULL;

	if ( ! pFnOnQueryMessagesComplete )
		pFnOnQueryMessagesComplete = (UFunction*) UObject::GObjObjects()->Data[ 38737 ];

	UMcpMessageBase_execOnQueryMessagesComplete_Parms OnQueryMessagesComplete_Parms;
	memcpy ( &OnQueryMessagesComplete_Parms.UserId, &UserId, 0xC );
	OnQueryMessagesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryMessagesComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryMessagesComplete, &OnQueryMessagesComplete_Parms, NULL );
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] 
// Parameters infos:
// struct FString                 ToUniqueUserId                 ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::QueryMessages ( struct FString ToUniqueUserId )
{
	static UFunction* pFnQueryMessages = NULL;

	if ( ! pFnQueryMessages )
		pFnQueryMessages = (UFunction*) UObject::GObjObjects()->Data[ 38735 ];

	UMcpMessageBase_execQueryMessages_Parms QueryMessages_Parms;
	memcpy ( &QueryMessages_Parms.ToUniqueUserId, &ToUniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryMessages, &QueryMessages_Parms, NULL );
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::OnDeleteMessageComplete ( struct FString MessageId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteMessageComplete = NULL;

	if ( ! pFnOnDeleteMessageComplete )
		pFnOnDeleteMessageComplete = (UFunction*) UObject::GObjObjects()->Data[ 38731 ];

	UMcpMessageBase_execOnDeleteMessageComplete_Parms OnDeleteMessageComplete_Parms;
	memcpy ( &OnDeleteMessageComplete_Parms.MessageId, &MessageId, 0xC );
	OnDeleteMessageComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteMessageComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteMessageComplete, &OnDeleteMessageComplete_Parms, NULL );
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::DeleteMessage ( struct FString MessageId )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 38729 ];

	UMcpMessageBase_execDeleteMessage_Parms DeleteMessage_Parms;
	memcpy ( &DeleteMessage_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120000] 
// Parameters infos:
// struct FMcpMessage             Message                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageBase::OnCreateMessageComplete ( struct FMcpMessage Message, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnCreateMessageComplete = NULL;

	if ( ! pFnOnCreateMessageComplete )
		pFnOnCreateMessageComplete = (UFunction*) UObject::GObjObjects()->Data[ 38725 ];

	UMcpMessageBase_execOnCreateMessageComplete_Parms OnCreateMessageComplete_Parms;
	memcpy ( &OnCreateMessageComplete_Parms.Message, &Message, 0x4C );
	OnCreateMessageComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateMessageComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateMessageComplete, &OnCreateMessageComplete_Parms, NULL );
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] 
// Parameters infos:
// struct FString                 FromUniqueUserId               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FromFriendlyName               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MessageType                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PushMessage                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ValidUntil                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       ToUniqueUserIds                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpMessageBase::CreateMessage ( struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray< struct FString >* ToUniqueUserIds, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnCreateMessage = NULL;

	if ( ! pFnCreateMessage )
		pFnCreateMessage = (UFunction*) UObject::GObjObjects()->Data[ 38715 ];

	UMcpMessageBase_execCreateMessage_Parms CreateMessage_Parms;
	memcpy ( &CreateMessage_Parms.FromUniqueUserId, &FromUniqueUserId, 0xC );
	memcpy ( &CreateMessage_Parms.FromFriendlyName, &FromFriendlyName, 0xC );
	memcpy ( &CreateMessage_Parms.MessageType, &MessageType, 0xC );
	memcpy ( &CreateMessage_Parms.PushMessage, &PushMessage, 0xC );
	memcpy ( &CreateMessage_Parms.ValidUntil, &ValidUntil, 0xC );

	this->ProcessEvent ( pFnCreateMessage, &CreateMessage_Parms, NULL );

	if ( ToUniqueUserIds )
		memcpy ( ToUniqueUserIds, &CreateMessage_Parms.ToUniqueUserIds, 0xC );

	if ( MessageContents )
		memcpy ( MessageContents, &CreateMessage_Parms.MessageContents, 0xC );
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpMessageBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpMessageBase* UMcpMessageBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 38711 ];

	UMcpMessageBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageManager::CacheMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnCacheMessageContents = NULL;

	if ( ! pFnCacheMessageContents )
		pFnCacheMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38900 ];

	UMcpMessageManager_execCacheMessageContents_Parms CacheMessageContents_Parms;
	memcpy ( &CacheMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnCacheMessageContents, &CacheMessageContents_Parms, NULL );

	if ( MessageContents )
		memcpy ( MessageContents, &CacheMessageContents_Parms.MessageContents, 0xC );

	return CacheMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpMessage             Message                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageManager::GetMessageById ( struct FString MessageId, struct FMcpMessage* Message )
{
	static UFunction* pFnGetMessageById = NULL;

	if ( ! pFnGetMessageById )
		pFnGetMessageById = (UFunction*) UObject::GObjObjects()->Data[ 38893 ];

	UMcpMessageManager_execGetMessageById_Parms GetMessageById_Parms;
	memcpy ( &GetMessageById_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnGetMessageById, &GetMessageById_Parms, NULL );

	if ( Message )
		memcpy ( Message, &GetMessageById_Parms.Message, 0x4C );

	return GetMessageById_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] 
// Parameters infos:
// struct FMcpMessage             Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageManager::CacheMessage ( struct FMcpMessage Message )
{
	static UFunction* pFnCacheMessage = NULL;

	if ( ! pFnCacheMessage )
		pFnCacheMessage = (UFunction*) UObject::GObjObjects()->Data[ 38886 ];

	UMcpMessageManager_execCacheMessage_Parms CacheMessage_Parms;
	memcpy ( &CacheMessage_Parms.Message, &Message, 0x4C );

	this->ProcessEvent ( pFnCacheMessage, &CacheMessage_Parms, NULL );
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageManager::GetMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnGetMessageContents = NULL;

	if ( ! pFnGetMessageContents )
		pFnGetMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38879 ];

	UMcpMessageManager_execGetMessageContents_Parms GetMessageContents_Parms;
	memcpy ( &GetMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnGetMessageContents, &GetMessageContents_Parms, NULL );

	if ( MessageContents )
		memcpy ( MessageContents, &GetMessageContents_Parms.MessageContents, 0xC );

	return GetMessageContents_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpMessageManager::OnQueryMessageContentsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryMessageContentsRequestComplete = NULL;

	if ( ! pFnOnQueryMessageContentsRequestComplete )
		pFnOnQueryMessageContentsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38870 ];

	UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Parms OnQueryMessageContentsRequestComplete_Parms;
	OnQueryMessageContentsRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnQueryMessageContentsRequestComplete_Parms.HttpResponse = HttpResponse;
	OnQueryMessageContentsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryMessageContentsRequestComplete, &OnQueryMessageContentsRequestComplete_Parms, NULL );
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageManager::QueryMessageContents ( struct FString MessageId )
{
	static UFunction* pFnQueryMessageContents = NULL;

	if ( ! pFnQueryMessageContents )
		pFnQueryMessageContents = (UFunction*) UObject::GObjObjects()->Data[ 38866 ];

	UMcpMessageManager_execQueryMessageContents_Parms QueryMessageContents_Parms;
	memcpy ( &QueryMessageContents_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnQueryMessageContents, &QueryMessageContents_Parms, NULL );
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] 
// Parameters infos:
// struct FString                 ToUniqueUserId                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpMessageList         MessageList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpMessageManager::GetMessageList ( struct FString ToUniqueUserId, struct FMcpMessageList* MessageList )
{
	static UFunction* pFnGetMessageList = NULL;

	if ( ! pFnGetMessageList )
		pFnGetMessageList = (UFunction*) UObject::GObjObjects()->Data[ 38862 ];

	UMcpMessageManager_execGetMessageList_Parms GetMessageList_Parms;
	memcpy ( &GetMessageList_Parms.ToUniqueUserId, &ToUniqueUserId, 0xC );

	this->ProcessEvent ( pFnGetMessageList, &GetMessageList_Parms, NULL );

	if ( MessageList )
		memcpy ( MessageList, &GetMessageList_Parms.MessageList, 0x18 );
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpMessageManager::OnQueryMessagesRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryMessagesRequestComplete = NULL;

	if ( ! pFnOnQueryMessagesRequestComplete )
		pFnOnQueryMessagesRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38851 ];

	UMcpMessageManager_execOnQueryMessagesRequestComplete_Parms OnQueryMessagesRequestComplete_Parms;
	OnQueryMessagesRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnQueryMessagesRequestComplete_Parms.HttpResponse = HttpResponse;
	OnQueryMessagesRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryMessagesRequestComplete, &OnQueryMessagesRequestComplete_Parms, NULL );
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] 
// Parameters infos:
// struct FString                 ToUniqueUserId                 ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageManager::QueryMessages ( struct FString ToUniqueUserId )
{
	static UFunction* pFnQueryMessages = NULL;

	if ( ! pFnQueryMessages )
		pFnQueryMessages = (UFunction*) UObject::GObjObjects()->Data[ 38847 ];

	UMcpMessageManager_execQueryMessages_Parms QueryMessages_Parms;
	memcpy ( &QueryMessages_Parms.ToUniqueUserId, &ToUniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryMessages, &QueryMessages_Parms, NULL );
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpMessageManager::OnDeleteMessageRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteMessageRequestComplete = NULL;

	if ( ! pFnOnDeleteMessageRequestComplete )
		pFnOnDeleteMessageRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38840 ];

	UMcpMessageManager_execOnDeleteMessageRequestComplete_Parms OnDeleteMessageRequestComplete_Parms;
	OnDeleteMessageRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnDeleteMessageRequestComplete_Parms.HttpResponse = HttpResponse;
	OnDeleteMessageRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteMessageRequestComplete, &OnDeleteMessageRequestComplete_Parms, NULL );
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpMessageManager::DeleteMessage ( struct FString MessageId )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 38836 ];

	UMcpMessageManager_execDeleteMessage_Parms DeleteMessage_Parms;
	memcpy ( &DeleteMessage_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820002] 
// Parameters infos:
// class UHttpRequestInterface*   CreateMessageRequest           ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpMessageManager::OnCreateMessageRequestComplete ( class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateMessageRequestComplete = NULL;

	if ( ! pFnOnCreateMessageRequestComplete )
		pFnOnCreateMessageRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38829 ];

	UMcpMessageManager_execOnCreateMessageRequestComplete_Parms OnCreateMessageRequestComplete_Parms;
	OnCreateMessageRequestComplete_Parms.CreateMessageRequest = CreateMessageRequest;
	OnCreateMessageRequestComplete_Parms.HttpResponse = HttpResponse;
	OnCreateMessageRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateMessageRequestComplete, &OnCreateMessageRequestComplete_Parms, NULL );
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] 
// Parameters infos:
// struct FString                 FromUniqueUserId               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FromFriendlyName               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MessageType                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PushMessage                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ValidUntil                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       ToUniqueUserIds                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        MessageContents                ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpMessageManager::CreateMessage ( struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray< struct FString >* ToUniqueUserIds, TArray< unsigned char >* MessageContents )
{
	static UFunction* pFnCreateMessage = NULL;

	if ( ! pFnCreateMessage )
		pFnCreateMessage = (UFunction*) UObject::GObjObjects()->Data[ 38814 ];

	UMcpMessageManager_execCreateMessage_Parms CreateMessage_Parms;
	memcpy ( &CreateMessage_Parms.FromUniqueUserId, &FromUniqueUserId, 0xC );
	memcpy ( &CreateMessage_Parms.FromFriendlyName, &FromFriendlyName, 0xC );
	memcpy ( &CreateMessage_Parms.MessageType, &MessageType, 0xC );
	memcpy ( &CreateMessage_Parms.PushMessage, &PushMessage, 0xC );
	memcpy ( &CreateMessage_Parms.ValidUntil, &ValidUntil, 0xC );

	this->ProcessEvent ( pFnCreateMessage, &CreateMessage_Parms, NULL );

	if ( ToUniqueUserIds )
		memcpy ( ToUniqueUserIds, &CreateMessage_Parms.ToUniqueUserIds, 0xC );

	if ( MessageContents )
		memcpy ( MessageContents, &CreateMessage_Parms.MessageContents, 0xC );
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        UncompressedMessageContents    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpMessageManager::eventFinishedAsyncUncompression ( unsigned long bWasSuccessful, struct FString MessageId, TArray< unsigned char >* UncompressedMessageContents )
{
	static UFunction* pFnFinishedAsyncUncompression = NULL;

	if ( ! pFnFinishedAsyncUncompression )
		pFnFinishedAsyncUncompression = (UFunction*) UObject::GObjObjects()->Data[ 38809 ];

	UMcpMessageManager_eventFinishedAsyncUncompression_Parms FinishedAsyncUncompression_Parms;
	FinishedAsyncUncompression_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &FinishedAsyncUncompression_Parms.MessageId, &MessageId, 0xC );

	this->ProcessEvent ( pFnFinishedAsyncUncompression, &FinishedAsyncUncompression_Parms, NULL );

	if ( UncompressedMessageContents )
		memcpy ( UncompressedMessageContents, &FinishedAsyncUncompression_Parms.UncompressedMessageContents, 0xC );
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MessageId                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  MessageCompressionType         ( CPF_Parm )
// TArray< unsigned char >        MessageContent                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageManager::StartAsyncUncompression ( struct FString MessageId, unsigned char MessageCompressionType, TArray< unsigned char >* MessageContent )
{
	static UFunction* pFnStartAsyncUncompression = NULL;

	if ( ! pFnStartAsyncUncompression )
		pFnStartAsyncUncompression = (UFunction*) UObject::GObjObjects()->Data[ 38803 ];

	UMcpMessageManager_execStartAsyncUncompression_Parms StartAsyncUncompression_Parms;
	memcpy ( &StartAsyncUncompression_Parms.MessageId, &MessageId, 0xC );
	StartAsyncUncompression_Parms.MessageCompressionType = MessageCompressionType;

	pFnStartAsyncUncompression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartAsyncUncompression, &StartAsyncUncompression_Parms, NULL );

	pFnStartAsyncUncompression->FunctionFlags |= 0x400;

	if ( MessageContent )
		memcpy ( MessageContent, &StartAsyncUncompression_Parms.MessageContent, 0xC );

	return StartAsyncUncompression_Parms.ReturnValue;
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  MessageCompressionType         ( CPF_Parm )
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// TArray< unsigned char >        MessageContent                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpMessageManager::StartAsyncCompression ( unsigned char MessageCompressionType, class UHttpRequestInterface* Request, TArray< unsigned char >* MessageContent )
{
	static UFunction* pFnStartAsyncCompression = NULL;

	if ( ! pFnStartAsyncCompression )
		pFnStartAsyncCompression = (UFunction*) UObject::GObjObjects()->Data[ 38797 ];

	UMcpMessageManager_execStartAsyncCompression_Parms StartAsyncCompression_Parms;
	StartAsyncCompression_Parms.MessageCompressionType = MessageCompressionType;
	StartAsyncCompression_Parms.Request = Request;

	pFnStartAsyncCompression->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartAsyncCompression, &StartAsyncCompression_Parms, NULL );

	pFnStartAsyncCompression->FunctionFlags |= 0x400;

	if ( MessageContent )
		memcpy ( MessageContent, &StartAsyncCompression_Parms.MessageContent, 0xC );

	return StartAsyncCompression_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020002] 
// Parameters infos:

void UMcpUserCloudFileDownload::ClearAllDelegates ( )
{
	static UFunction* pFnClearAllDelegates = NULL;

	if ( ! pFnClearAllDelegates )
		pFnClearAllDelegates = (UFunction*) UObject::GObjObjects()->Data[ 39135 ];

	UMcpUserCloudFileDownload_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent ( pFnClearAllDelegates, &ClearAllDelegates_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearDeleteUserFileCompleteDelegate )
		pFnClearDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39132 ];

	UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate )
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddDeleteUserFileCompleteDelegate )
		pFnAddDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39130 ];

	UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;
	memcpy ( &AddDeleteUserFileCompleteDelegate_Parms.DeleteUserFileCompleteDelegate, &DeleteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::CallDeleteUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnCallDeleteUserFileCompleteDelegates = NULL;

	if ( ! pFnCallDeleteUserFileCompleteDelegates )
		pFnCallDeleteUserFileCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 39112 ];

	UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Parms CallDeleteUserFileCompleteDelegates_Parms;
	CallDeleteUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &CallDeleteUserFileCompleteDelegates_Parms.UserId, &UserId, 0xC );
	memcpy ( &CallDeleteUserFileCompleteDelegates_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnCallDeleteUserFileCompleteDelegates, &CallDeleteUserFileCompleteDelegates_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnDeleteUserFileComplete = NULL;

	if ( ! pFnOnDeleteUserFileComplete )
		pFnOnDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 38958 ];

	UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;
	OnDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnDeleteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserCloudFileDownload::OnHTTPRequestDeleteUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnHTTPRequestDeleteUserFileComplete = NULL;

	if ( ! pFnOnHTTPRequestDeleteUserFileComplete )
		pFnOnHTTPRequestDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 39113 ];

	UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Parms OnHTTPRequestDeleteUserFileComplete_Parms;
	OnHTTPRequestDeleteUserFileComplete_Parms.Request = Request;
	OnHTTPRequestDeleteUserFileComplete_Parms.Response = Response;
	OnHTTPRequestDeleteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnHTTPRequestDeleteUserFileComplete, &OnHTTPRequestDeleteUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldCloudDelete             ( CPF_Parm )
// unsigned long                  bShouldLocallyDelete           ( CPF_Parm )

bool UMcpUserCloudFileDownload::DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete )
{
	static UFunction* pFnDeleteUserFile = NULL;

	if ( ! pFnDeleteUserFile )
		pFnDeleteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 39102 ];

	UMcpUserCloudFileDownload_execDeleteUserFile_Parms DeleteUserFile_Parms;
	memcpy ( &DeleteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &DeleteUserFile_Parms.Filename, &Filename, 0xC );
	DeleteUserFile_Parms.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Parms.bShouldLocallyDelete = bShouldLocallyDelete;

	this->ProcessEvent ( pFnDeleteUserFile, &DeleteUserFile_Parms, NULL );

	return DeleteUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteUserFileCompleteDelegate )
		pFnClearWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39099 ];

	UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;
	memcpy ( &ClearWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate )
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteUserFileCompleteDelegate )
		pFnAddWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39097 ];

	UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;
	memcpy ( &AddWriteUserFileCompleteDelegate_Parms.WriteUserFileCompleteDelegate, &WriteUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::CallWriteUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnCallWriteUserFileCompleteDelegates = NULL;

	if ( ! pFnCallWriteUserFileCompleteDelegates )
		pFnCallWriteUserFileCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 39076 ];

	UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Parms CallWriteUserFileCompleteDelegates_Parms;
	CallWriteUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &CallWriteUserFileCompleteDelegates_Parms.UserId, &UserId, 0xC );
	memcpy ( &CallWriteUserFileCompleteDelegates_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnCallWriteUserFileCompleteDelegates, &CallWriteUserFileCompleteDelegates_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnWriteUserFileComplete = NULL;

	if ( ! pFnOnWriteUserFileComplete )
		pFnOnWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 38955 ];

	UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;
	OnWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnWriteUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnWriteUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserCloudFileDownload::OnHTTPRequestWriteUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnHTTPRequestWriteUserFileComplete = NULL;

	if ( ! pFnOnHTTPRequestWriteUserFileComplete )
		pFnOnHTTPRequestWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 39080 ];

	UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Parms OnHTTPRequestWriteUserFileComplete_Parms;
	OnHTTPRequestWriteUserFileComplete_Parms.Request = Request;
	OnHTTPRequestWriteUserFileComplete_Parms.Response = Response;
	OnHTTPRequestWriteUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnHTTPRequestWriteUserFileComplete, &OnHTTPRequestWriteUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// int                            UserIdx                        ( CPF_Parm | CPF_OutParm )
// int                            FileIdx                        ( CPF_Parm | CPF_OutParm )

void UMcpUserCloudFileDownload::GetUserFileIndexForRequest ( class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx )
{
	static UFunction* pFnGetUserFileIndexForRequest = NULL;

	if ( ! pFnGetUserFileIndexForRequest )
		pFnGetUserFileIndexForRequest = (UFunction*) UObject::GObjObjects()->Data[ 39052 ];

	UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Parms GetUserFileIndexForRequest_Parms;
	GetUserFileIndexForRequest_Parms.Request = Request;

	this->ProcessEvent ( pFnGetUserFileIndexForRequest, &GetUserFileIndexForRequest_Parms, NULL );

	if ( UserIdx )
		*UserIdx = GetUserFileIndexForRequest_Parms.UserIdx;

	if ( FileIdx )
		*FileIdx = GetUserFileIndexForRequest_Parms.FileIdx;
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserCloudFileDownload::WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnWriteUserFile = NULL;

	if ( ! pFnWriteUserFile )
		pFnWriteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 39066 ];

	UMcpUserCloudFileDownload_execWriteUserFile_Parms WriteUserFile_Parms;
	memcpy ( &WriteUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &WriteUserFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnWriteUserFile, &WriteUserFile_Parms, NULL );

	if ( FileContents )
		memcpy ( FileContents, &WriteUserFile_Parms.FileContents, 0xC );

	return WriteUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = NULL;

	if ( ! pFnClearReadUserFileCompleteDelegate )
		pFnClearReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39063 ];

	UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;
	memcpy ( &ClearReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate )
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = NULL;

	if ( ! pFnAddReadUserFileCompleteDelegate )
		pFnAddReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39061 ];

	UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;
	memcpy ( &AddReadUserFileCompleteDelegate_Parms.ReadUserFileCompleteDelegate, &ReadUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::CallReadUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnCallReadUserFileCompleteDelegates = NULL;

	if ( ! pFnCallReadUserFileCompleteDelegates )
		pFnCallReadUserFileCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 39040 ];

	UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Parms CallReadUserFileCompleteDelegates_Parms;
	CallReadUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &CallReadUserFileCompleteDelegates_Parms.UserId, &UserId, 0xC );
	memcpy ( &CallReadUserFileCompleteDelegates_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnCallReadUserFileCompleteDelegates, &CallReadUserFileCompleteDelegates_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename )
{
	static UFunction* pFnOnReadUserFileComplete = NULL;

	if ( ! pFnOnReadUserFileComplete )
		pFnOnReadUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 38952 ];

	UMcpUserCloudFileDownload_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;
	OnReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadUserFileComplete_Parms.UserId, &UserId, 0xC );
	memcpy ( &OnReadUserFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserCloudFileDownload::OnHTTPRequestReadUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnHTTPRequestReadUserFileComplete = NULL;

	if ( ! pFnOnHTTPRequestReadUserFileComplete )
		pFnOnHTTPRequestReadUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 39041 ];

	UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Parms OnHTTPRequestReadUserFileComplete_Parms;
	OnHTTPRequestReadUserFileComplete_Parms.Request = Request;
	OnHTTPRequestReadUserFileComplete_Parms.Response = Response;
	OnHTTPRequestReadUserFileComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnHTTPRequestReadUserFileComplete, &OnHTTPRequestReadUserFileComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UMcpUserCloudFileDownload::ReadUserFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnReadUserFile = NULL;

	if ( ! pFnReadUserFile )
		pFnReadUserFile = (UFunction*) UObject::GObjObjects()->Data[ 39032 ];

	UMcpUserCloudFileDownload_execReadUserFile_Parms ReadUserFile_Parms;
	memcpy ( &ReadUserFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ReadUserFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnReadUserFile, &ReadUserFile_Parms, NULL );

	return ReadUserFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420002] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FEmsFile >      UserFiles                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles )
{
	static UFunction* pFnGetUserFileList = NULL;

	if ( ! pFnGetUserFileList )
		pFnGetUserFileList = (UFunction*) UObject::GObjObjects()->Data[ 39026 ];

	UMcpUserCloudFileDownload_execGetUserFileList_Parms GetUserFileList_Parms;
	memcpy ( &GetUserFileList_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnGetUserFileList, &GetUserFileList_Parms, NULL );

	if ( UserFiles )
		memcpy ( UserFiles, &GetUserFileList_Parms.UserFiles, 0xC );
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnClearEnumerateUserFileCompleteDelegate )
		pFnClearEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39023 ];

	UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &ClearEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate )
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnAddEnumerateUserFileCompleteDelegate )
		pFnAddEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39021 ];

	UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;
	memcpy ( &AddEnumerateUserFileCompleteDelegate_Parms.EnumerateUserFileCompleteDelegate, &EnumerateUserFileCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::CallEnumerateUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId )
{
	static UFunction* pFnCallEnumerateUserFileCompleteDelegates = NULL;

	if ( ! pFnCallEnumerateUserFileCompleteDelegates )
		pFnCallEnumerateUserFileCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 39004 ];

	UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Parms CallEnumerateUserFileCompleteDelegates_Parms;
	CallEnumerateUserFileCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &CallEnumerateUserFileCompleteDelegates_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnCallEnumerateUserFileCompleteDelegates, &CallEnumerateUserFileCompleteDelegates_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId )
{
	static UFunction* pFnOnEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnEnumerateUserFilesComplete )
		pFnOnEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 38949 ];

	UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;
	OnEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnEnumerateUserFilesComplete_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserCloudFileDownload::OnHTTPRequestEnumerateUserFilesComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnHTTPRequestEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnHTTPRequestEnumerateUserFilesComplete )
		pFnOnHTTPRequestEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 39005 ];

	UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Parms OnHTTPRequestEnumerateUserFilesComplete_Parms;
	OnHTTPRequestEnumerateUserFilesComplete_Parms.Request = Request;
	OnHTTPRequestEnumerateUserFilesComplete_Parms.Response = Response;
	OnHTTPRequestEnumerateUserFilesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnHTTPRequestEnumerateUserFilesComplete, &OnHTTPRequestEnumerateUserFilesComplete_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020002] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserCloudFileDownload::EnumerateUserFiles ( struct FString UserId )
{
	static UFunction* pFnEnumerateUserFiles = NULL;

	if ( ! pFnEnumerateUserFiles )
		pFnEnumerateUserFiles = (UFunction*) UObject::GObjObjects()->Data[ 38999 ];

	UMcpUserCloudFileDownload_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;
	memcpy ( &EnumerateUserFiles_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, NULL );
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UMcpUserCloudFileDownload::ClearFile ( struct FString UserId, struct FString Filename )
{
	static UFunction* pFnClearFile = NULL;

	if ( ! pFnClearFile )
		pFnClearFile = (UFunction*) UObject::GObjObjects()->Data[ 38992 ];

	UMcpUserCloudFileDownload_execClearFile_Parms ClearFile_Parms;
	memcpy ( &ClearFile_Parms.UserId, &UserId, 0xC );
	memcpy ( &ClearFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnClearFile, &ClearFile_Parms, NULL );

	return ClearFile_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )

bool UMcpUserCloudFileDownload::ClearFiles ( struct FString UserId )
{
	static UFunction* pFnClearFiles = NULL;

	if ( ! pFnClearFiles )
		pFnClearFiles = (UFunction*) UObject::GObjObjects()->Data[ 38986 ];

	UMcpUserCloudFileDownload_execClearFiles_Parms ClearFiles_Parms;
	memcpy ( &ClearFiles_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnClearFiles, &ClearFiles_Parms, NULL );

	return ClearFiles_Parms.ReturnValue;
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserCloudFileDownload::GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetFileContents = NULL;

	if ( ! pFnGetFileContents )
		pFnGetFileContents = (UFunction*) UObject::GObjObjects()->Data[ 38977 ];

	UMcpUserCloudFileDownload_execGetFileContents_Parms GetFileContents_Parms;
	memcpy ( &GetFileContents_Parms.UserId, &UserId, 0xC );
	memcpy ( &GetFileContents_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetFileContents, &GetFileContents_Parms, NULL );

	if ( FileContents )
		memcpy ( FileContents, &GetFileContents_Parms.FileContents, 0xC );

	return GetFileContents_Parms.ReturnValue;
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeacon::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 39796 ];

	UMeshBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UMeshBeaconClient::SendHostNewGameSessionResponse ( unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnSendHostNewGameSessionResponse = NULL;

	if ( ! pFnSendHostNewGameSessionResponse )
		pFnSendHostNewGameSessionResponse = (UFunction*) UObject::GObjObjects()->Data[ 39856 ];

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms SendHostNewGameSessionResponse_Parms;
	SendHostNewGameSessionResponse_Parms.bSuccess = bSuccess;
	memcpy ( &SendHostNewGameSessionResponse_Parms.SessionName, &SessionName, 0x8 );
	SendHostNewGameSessionResponse_Parms.SearchClass = SearchClass;

	pFnSendHostNewGameSessionResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Parms, NULL );

	pFnSendHostNewGameSessionResponse->FunctionFlags |= 0x400;

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, 0x50 );

	return SendHostNewGameSessionResponse_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconClient::OnCreateNewSessionRequestReceived ( struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players )
{
	static UFunction* pFnOnCreateNewSessionRequestReceived = NULL;

	if ( ! pFnOnCreateNewSessionRequestReceived )
		pFnOnCreateNewSessionRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 39798 ];

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms OnCreateNewSessionRequestReceived_Parms;
	memcpy ( &OnCreateNewSessionRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnCreateNewSessionRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Parms, NULL );

	if ( Players )
		memcpy ( Players, &OnCreateNewSessionRequestReceived_Parms.Players, 0xC );
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 39800 ];

	UMeshBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] 
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnReceivedBandwidthTestResults ( unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnReceivedBandwidthTestResults = NULL;

	if ( ! pFnOnReceivedBandwidthTestResults )
		pFnOnReceivedBandwidthTestResults = (UFunction*) UObject::GObjObjects()->Data[ 39802 ];

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms OnReceivedBandwidthTestResults_Parms;
	OnReceivedBandwidthTestResults_Parms.TestType = TestType;
	OnReceivedBandwidthTestResults_Parms.TestResult = TestResult;

	this->ProcessEvent ( pFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnReceivedBandwidthTestResults_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] 
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconClient::OnReceivedBandwidthTestRequest ( unsigned char TestType )
{
	static UFunction* pFnOnReceivedBandwidthTestRequest = NULL;

	if ( ! pFnOnReceivedBandwidthTestRequest )
		pFnOnReceivedBandwidthTestRequest = (UFunction*) UObject::GObjObjects()->Data[ 39804 ];

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms OnReceivedBandwidthTestRequest_Parms;
	OnReceivedBandwidthTestRequest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionResult               ( CPF_Parm )

void UMeshBeaconClient::OnConnectionRequestResult ( unsigned char ConnectionResult )
{
	static UFunction* pFnOnConnectionRequestResult = NULL;

	if ( ! pFnOnConnectionRequestResult )
		pFnOnConnectionRequestResult = (UFunction*) UObject::GObjObjects()->Data[ 39806 ];

	UMeshBeaconClient_execOnConnectionRequestResult_Parms OnConnectionRequestResult_Parms;
	OnConnectionRequestResult_Parms.ConnectionResult = ConnectionResult;

	this->ProcessEvent ( pFnOnConnectionRequestResult, &OnConnectionRequestResult_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconClient::BeginBandwidthTest ( unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnBeginBandwidthTest = NULL;

	if ( ! pFnBeginBandwidthTest )
		pFnBeginBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39840 ];

	UMeshBeaconClient_execBeginBandwidthTest_Parms BeginBandwidthTest_Parms;
	BeginBandwidthTest_Parms.TestType = TestType;
	BeginBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnBeginBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBeginBandwidthTest, &BeginBandwidthTest_Parms, NULL );

	pFnBeginBandwidthTest->FunctionFlags |= 0x400;

	return BeginBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRegisterSecureAddress         ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FClientConnectionRequest ClientRequest                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconClient::RequestConnection ( unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest )
{
	static UFunction* pFnRequestConnection = NULL;

	if ( ! pFnRequestConnection )
		pFnRequestConnection = (UFunction*) UObject::GObjObjects()->Data[ 39835 ];

	UMeshBeaconClient_execRequestConnection_Parms RequestConnection_Parms;
	RequestConnection_Parms.bRegisterSecureAddress = bRegisterSecureAddress;

	pFnRequestConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestConnection, &RequestConnection_Parms, NULL );

	pFnRequestConnection->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestConnection_Parms.DesiredHost, 0x8 );

	if ( ClientRequest )
		memcpy ( ClientRequest, &RequestConnection_Parms.ClientRequest, 0x64 );

	return RequestConnection_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconClient::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 39834 ];

	UMeshBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] 
// Parameters infos:
// unsigned long                  bSucceeded                     ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult ( unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnReceivedClientCreateNewSessionResult = NULL;

	if ( ! pFnOnReceivedClientCreateNewSessionResult )
		pFnOnReceivedClientCreateNewSessionResult = (UFunction*) UObject::GObjObjects()->Data[ 39887 ];

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms OnReceivedClientCreateNewSessionResult_Parms;
	OnReceivedClientCreateNewSessionResult_Parms.bSucceeded = bSucceeded;
	memcpy ( &OnReceivedClientCreateNewSessionResult_Parms.SessionName, &SessionName, 0x8 );
	OnReceivedClientCreateNewSessionResult_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::RequestClientCreateNewSession ( struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players )
{
	static UFunction* pFnRequestClientCreateNewSession = NULL;

	if ( ! pFnRequestClientCreateNewSession )
		pFnRequestClientCreateNewSession = (UFunction*) UObject::GObjObjects()->Data[ 39937 ];

	UMeshBeaconHost_execRequestClientCreateNewSession_Parms RequestClientCreateNewSession_Parms;
	memcpy ( &RequestClientCreateNewSession_Parms.PlayerNetId, &PlayerNetId, 0x48 );
	memcpy ( &RequestClientCreateNewSession_Parms.SessionName, &SessionName, 0x8 );
	RequestClientCreateNewSession_Parms.SearchClass = SearchClass;

	pFnRequestClientCreateNewSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Parms, NULL );

	pFnRequestClientCreateNewSession->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &RequestClientCreateNewSession_Parms.Players, 0xC );

	return RequestClientCreateNewSession_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = (UFunction*) UObject::GObjObjects()->Data[ 39933 ];

	UMeshBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );

	pFnTellClientsToTravel->FunctionFlags |= 0x400;

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] 
// Parameters infos:

void UMeshBeaconHost::OnAllPendingPlayersConnected ( )
{
	static UFunction* pFnOnAllPendingPlayersConnected = NULL;

	if ( ! pFnOnAllPendingPlayersConnected )
		pFnOnAllPendingPlayersConnected = (UFunction*) UObject::GObjObjects()->Data[ 39889 ];

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms OnAllPendingPlayersConnected_Parms;

	this->ProcessEvent ( pFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::AllPlayersConnected ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnAllPlayersConnected = NULL;

	if ( ! pFnAllPlayersConnected )
		pFnAllPlayersConnected = (UFunction*) UObject::GObjObjects()->Data[ 39929 ];

	UMeshBeaconHost_execAllPlayersConnected_Parms AllPlayersConnected_Parms;

	pFnAllPlayersConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllPlayersConnected, &AllPlayersConnected_Parms, NULL );

	pFnAllPlayersConnected->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &AllPlayersConnected_Parms.Players, 0xC );

	return AllPlayersConnected_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )

int UMeshBeaconHost::GetConnectionIndexForPlayer ( struct FUniqueNetId PlayerNetId )
{
	static UFunction* pFnGetConnectionIndexForPlayer = NULL;

	if ( ! pFnGetConnectionIndexForPlayer )
		pFnGetConnectionIndexForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 39926 ];

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms GetConnectionIndexForPlayer_Parms;
	memcpy ( &GetConnectionIndexForPlayer_Parms.PlayerNetId, &PlayerNetId, 0x48 );

	pFnGetConnectionIndexForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Parms, NULL );

	pFnGetConnectionIndexForPlayer->FunctionFlags |= 0x400;

	return GetConnectionIndexForPlayer_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] 
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::SetPendingPlayerConnections ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnSetPendingPlayerConnections = NULL;

	if ( ! pFnSetPendingPlayerConnections )
		pFnSetPendingPlayerConnections = (UFunction*) UObject::GObjObjects()->Data[ 39923 ];

	UMeshBeaconHost_execSetPendingPlayerConnections_Parms SetPendingPlayerConnections_Parms;

	this->ProcessEvent ( pFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Parms, NULL );

	if ( Players )
		memcpy ( Players, &SetPendingPlayerConnections_Parms.Players, 0xC );
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnFinishedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnFinishedBandwidthTest = NULL;

	if ( ! pFnOnFinishedBandwidthTest )
		pFnOnFinishedBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39891 ];

	UMeshBeaconHost_execOnFinishedBandwidthTest_Parms OnFinishedBandwidthTest_Parms;
	memcpy ( &OnFinishedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x48 );
	OnFinishedBandwidthTest_Parms.TestType = TestType;
	OnFinishedBandwidthTest_Parms.TestResult = TestResult;

	this->ProcessEvent ( pFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnFinishedBandwidthTest_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconHost::OnStartedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType )
{
	static UFunction* pFnOnStartedBandwidthTest = NULL;

	if ( ! pFnOnStartedBandwidthTest )
		pFnOnStartedBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39893 ];

	UMeshBeaconHost_execOnStartedBandwidthTest_Parms OnStartedBandwidthTest_Parms;
	memcpy ( &OnStartedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x48 );
	OnStartedBandwidthTest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] 
// Parameters infos:
// struct FClientMeshBeaconConnection NewClientConnection            ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::OnReceivedClientConnectionRequest ( struct FClientMeshBeaconConnection* NewClientConnection )
{
	static UFunction* pFnOnReceivedClientConnectionRequest = NULL;

	if ( ! pFnOnReceivedClientConnectionRequest )
		pFnOnReceivedClientConnectionRequest = (UFunction*) UObject::GObjObjects()->Data[ 39895 ];

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms OnReceivedClientConnectionRequest_Parms;

	this->ProcessEvent ( pFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Parms, NULL );

	if ( NewClientConnection )
		memcpy ( NewClientConnection, &OnReceivedClientConnectionRequest_Parms.NewClientConnection, 0x98 );
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UMeshBeaconHost::AllowBandwidthTesting ( unsigned long bEnabled )
{
	static UFunction* pFnAllowBandwidthTesting = NULL;

	if ( ! pFnAllowBandwidthTesting )
		pFnAllowBandwidthTesting = (UFunction*) UObject::GObjObjects()->Data[ 39914 ];

	UMeshBeaconHost_execAllowBandwidthTesting_Parms AllowBandwidthTesting_Parms;
	AllowBandwidthTesting_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnAllowBandwidthTesting, &AllowBandwidthTesting_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelPendingBandwidthTests ( )
{
	static UFunction* pFnCancelPendingBandwidthTests = NULL;

	if ( ! pFnCancelPendingBandwidthTests )
		pFnCancelPendingBandwidthTests = (UFunction*) UObject::GObjObjects()->Data[ 39913 ];

	UMeshBeaconHost_execCancelPendingBandwidthTests_Parms CancelPendingBandwidthTests_Parms;

	pFnCancelPendingBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Parms, NULL );

	pFnCancelPendingBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasPendingBandwidthTest ( )
{
	static UFunction* pFnHasPendingBandwidthTest = NULL;

	if ( ! pFnHasPendingBandwidthTest )
		pFnHasPendingBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39911 ];

	UMeshBeaconHost_execHasPendingBandwidthTest_Parms HasPendingBandwidthTest_Parms;

	pFnHasPendingBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Parms, NULL );

	pFnHasPendingBandwidthTest->FunctionFlags |= 0x400;

	return HasPendingBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelInProgressBandwidthTests ( )
{
	static UFunction* pFnCancelInProgressBandwidthTests = NULL;

	if ( ! pFnCancelInProgressBandwidthTests )
		pFnCancelInProgressBandwidthTests = (UFunction*) UObject::GObjObjects()->Data[ 39910 ];

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms CancelInProgressBandwidthTests_Parms;

	pFnCancelInProgressBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Parms, NULL );

	pFnCancelInProgressBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasInProgressBandwidthTest ( )
{
	static UFunction* pFnHasInProgressBandwidthTest = NULL;

	if ( ! pFnHasInProgressBandwidthTest )
		pFnHasInProgressBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39908 ];

	UMeshBeaconHost_execHasInProgressBandwidthTest_Parms HasInProgressBandwidthTest_Parms;

	pFnHasInProgressBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Parms, NULL );

	pFnHasInProgressBandwidthTest->FunctionFlags |= 0x400;

	return HasInProgressBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconHost::RequestClientBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnRequestClientBandwidthTest = NULL;

	if ( ! pFnRequestClientBandwidthTest )
		pFnRequestClientBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 39903 ];

	UMeshBeaconHost_execRequestClientBandwidthTest_Parms RequestClientBandwidthTest_Parms;
	memcpy ( &RequestClientBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x48 );
	RequestClientBandwidthTest_Parms.TestType = TestType;
	RequestClientBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnRequestClientBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Parms, NULL );

	pFnRequestClientBandwidthTest->FunctionFlags |= 0x400;

	return RequestClientBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 39902 ];

	UMeshBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InOwningPlayerId               ( CPF_Parm )

bool UMeshBeaconHost::InitHostBeacon ( struct FUniqueNetId InOwningPlayerId )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = (UFunction*) UObject::GObjObjects()->Data[ 39899 ];

	UMeshBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy ( &InitHostBeacon_Parms.InOwningPlayerId, &InOwningPlayerId, 0x48 );

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  OutRegisteredPlayers           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* OutRegisteredPlayers )
{
	static UFunction* pFnGetRegisteredPlayers = NULL;

	if ( ! pFnGetRegisteredPlayers )
		pFnGetRegisteredPlayers = (UFunction*) UObject::GObjObjects()->Data[ 41160 ];

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms GetRegisteredPlayers_Parms;
	memcpy ( &GetRegisteredPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetRegisteredPlayers, &GetRegisteredPlayers_Parms, NULL );

	if ( OutRegisteredPlayers )
		memcpy ( OutRegisteredPlayers, &GetRegisteredPlayers_Parms.OutRegisteredPlayers, 0xC );
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::IsPlayerInSession ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsPlayerInSession = NULL;

	if ( ! pFnIsPlayerInSession )
		pFnIsPlayerInSession = (UFunction*) UObject::GObjObjects()->Data[ 41156 ];

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms IsPlayerInSession_Parms;
	memcpy ( &IsPlayerInSession_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &IsPlayerInSession_Parms.PlayerID, &PlayerID, 0x48 );

	pFnIsPlayerInSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlayerInSession, &IsPlayerInSession_Parms, NULL );

	pFnIsPlayerInSession->FunctionFlags |= 0x400;

	return IsPlayerInSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 41153 ];

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 Country                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::OnPlayerCountryRetrieved ( struct FUniqueNetId PlayerID, struct FString Country )
{
	static UFunction* pFnOnPlayerCountryRetrieved = NULL;

	if ( ! pFnOnPlayerCountryRetrieved )
		pFnOnPlayerCountryRetrieved = (UFunction*) UObject::GObjObjects()->Data[ 41136 ];

	UOnlineSubsystemCommonImpl_execOnPlayerCountryRetrieved_Parms OnPlayerCountryRetrieved_Parms;
	memcpy ( &OnPlayerCountryRetrieved_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &OnPlayerCountryRetrieved_Parms.Country, &Country, 0xC );

	this->ProcessEvent ( pFnOnPlayerCountryRetrieved, &OnPlayerCountryRetrieved_Parms, NULL );
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
// [0x00120000] 
// Parameters infos:
// struct FWordFilterResult       Result                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::OnSanitizeStringComplete ( struct FWordFilterResult Result )
{
	static UFunction* pFnOnSanitizeStringComplete = NULL;

	if ( ! pFnOnSanitizeStringComplete )
		pFnOnSanitizeStringComplete = (UFunction*) UObject::GObjObjects()->Data[ 41138 ];

	UOnlineSubsystemCommonImpl_execOnSanitizeStringComplete_Parms OnSanitizeStringComplete_Parms;
	memcpy ( &OnSanitizeStringComplete_Parms.Result, &Result, 0x28 );

	this->ProcessEvent ( pFnOnSanitizeStringComplete, &OnSanitizeStringComplete_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
// [0x00020000] 
// Parameters infos:
// class UAsyncTask*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

class UAsyncTask* UOnlineAuthInterfaceImpl::RequestAccountAuthorization ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback )
{
	static UFunction* pFnRequestAccountAuthorization = NULL;

	if ( ! pFnRequestAccountAuthorization )
		pFnRequestAccountAuthorization = (UFunction*) UObject::GObjObjects()->Data[ 40181 ];

	UOnlineAuthInterfaceImpl_execRequestAccountAuthorization_Parms RequestAccountAuthorization_Parms;
	memcpy ( &RequestAccountAuthorization_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &RequestAccountAuthorization_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnRequestAccountAuthorization, &RequestAccountAuthorization_Parms, NULL );

	return RequestAccountAuthorization_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
// [0x00120000] 
// Parameters infos:
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::OnAccountAuthorization ( struct FString Token )
{
	static UFunction* pFnOnAccountAuthorization = NULL;

	if ( ! pFnOnAccountAuthorization )
		pFnOnAccountAuthorization = (UFunction*) UObject::GObjObjects()->Data[ 40182 ];

	UOnlineAuthInterfaceImpl_execOnAccountAuthorization_Parms OnAccountAuthorization_Parms;
	memcpy ( &OnAccountAuthorization_Parms.Token, &Token, 0xC );

	this->ProcessEvent ( pFnOnAccountAuthorization, &OnAccountAuthorization_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
// [0x00020000] 
// Parameters infos:
// unsigned long                  bLoggedIn                      ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnLoginChanged ( unsigned long bLoggedIn )
{
	static UFunction* pFnOnLoginChanged = NULL;

	if ( ! pFnOnLoginChanged )
		pFnOnLoginChanged = (UFunction*) UObject::GObjObjects()->Data[ 40178 ];

	UOnlineAuthInterfaceImpl_execOnLoginChanged_Parms OnLoginChanged_Parms;
	OnLoginChanged_Parms.bLoggedIn = bLoggedIn;

	this->ProcessEvent ( pFnOnLoginChanged, &OnLoginChanged_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineAuthInterfaceImpl::RequestMtxCode ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback )
{
	static UFunction* pFnRequestMtxCode = NULL;

	if ( ! pFnRequestMtxCode )
		pFnRequestMtxCode = (UFunction*) UObject::GObjObjects()->Data[ 40180 ];

	UOnlineAuthInterfaceImpl_execRequestMtxCode_Parms RequestMtxCode_Parms;
	memcpy ( &RequestMtxCode_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &RequestMtxCode_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnRequestMtxCode, &RequestMtxCode_Parms, NULL );

	return RequestMtxCode_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineAuthInterfaceImpl::RequestAuthTicket ( struct FUniqueNetId PlayerID, struct FScriptDelegate Callback )
{
	static UFunction* pFnRequestAuthTicket = NULL;

	if ( ! pFnRequestAuthTicket )
		pFnRequestAuthTicket = (UFunction*) UObject::GObjObjects()->Data[ 40187 ];

	UOnlineAuthInterfaceImpl_execRequestAuthTicket_Parms RequestAuthTicket_Parms;
	memcpy ( &RequestAuthTicket_Parms.PlayerID, &PlayerID, 0x48 );
	memcpy ( &RequestAuthTicket_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnRequestAuthTicket, &RequestAuthTicket_Parms, NULL );

	return RequestAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceImpl::RequiresAuthTicket ( )
{
	static UFunction* pFnRequiresAuthTicket = NULL;

	if ( ! pFnRequiresAuthTicket )
		pFnRequiresAuthTicket = (UFunction*) UObject::GObjObjects()->Data[ 40192 ];

	UOnlineAuthInterfaceImpl_execRequiresAuthTicket_Parms RequiresAuthTicket_Parms;

	this->ProcessEvent ( pFnRequiresAuthTicket, &RequiresAuthTicket_Parms, NULL );

	return RequiresAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FString                 Code                           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::OnReceivedAuthCode ( unsigned long bSuccess, struct FString Code )
{
	static UFunction* pFnOnReceivedAuthCode = NULL;

	if ( ! pFnOnReceivedAuthCode )
		pFnOnReceivedAuthCode = (UFunction*) UObject::GObjObjects()->Data[ 40191 ];

	UOnlineAuthInterfaceImpl_execOnReceivedAuthCode_Parms OnReceivedAuthCode_Parms;
	OnReceivedAuthCode_Parms.bSuccess = bSuccess;
	memcpy ( &OnReceivedAuthCode_Parms.Code, &Code, 0xC );

	this->ProcessEvent ( pFnOnReceivedAuthCode, &OnReceivedAuthCode_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 OutServerIP                    ( CPF_Parm | CPF_OutParm )
// int                            OutServerPort                  ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort )
{
	static UFunction* pFnGetServerAddr = NULL;

	if ( ! pFnGetServerAddr )
		pFnGetServerAddr = (UFunction*) UObject::GObjObjects()->Data[ 40174 ];

	UOnlineAuthInterfaceImpl_execGetServerAddr_Parms GetServerAddr_Parms;

	this->ProcessEvent ( pFnGetServerAddr, &GetServerAddr_Parms, NULL );

	if ( OutServerIP )
		memcpy ( OutServerIP, &GetServerAddr_Parms.OutServerIP, 0x14 );

	if ( OutServerPort )
		*OutServerPort = GetServerAddr_Parms.OutServerPort;

	return GetServerAddr_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            OutServerUID                   ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::GetServerUniqueId ( struct FUniqueNetId* OutServerUID )
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if ( ! pFnGetServerUniqueId )
		pFnGetServerUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 40171 ];

	UOnlineAuthInterfaceImpl_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	this->ProcessEvent ( pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL );

	if ( OutServerUID )
		memcpy ( OutServerUID, &GetServerUniqueId_Parms.OutServerUID, 0x48 );

	return GetServerUniqueId_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FLocalAuthSession       OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::FindLocalServerAuthSession ( class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo )
{
	static UFunction* pFnFindLocalServerAuthSession = NULL;

	if ( ! pFnFindLocalServerAuthSession )
		pFnFindLocalServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40167 ];

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms FindLocalServerAuthSession_Parms;
	FindLocalServerAuthSession_Parms.ClientConnection = ClientConnection;

	pFnFindLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Parms, NULL );

	pFnFindLocalServerAuthSession->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &FindLocalServerAuthSession_Parms.OutSessionInfo, 0x64 );

	return FindLocalServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ServerConnection               ( CPF_Parm )
// struct FAuthSession            OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::FindServerAuthSession ( class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo )
{
	static UFunction* pFnFindServerAuthSession = NULL;

	if ( ! pFnFindServerAuthSession )
		pFnFindServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40163 ];

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms FindServerAuthSession_Parms;
	FindServerAuthSession_Parms.ServerConnection = ServerConnection;

	pFnFindServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindServerAuthSession, &FindServerAuthSession_Parms, NULL );

	pFnFindServerAuthSession->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &FindServerAuthSession_Parms.OutSessionInfo, 0x68 );

	return FindServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ServerConnection               ( CPF_Parm )
// struct FLocalAuthSession       OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::FindLocalClientAuthSession ( class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo )
{
	static UFunction* pFnFindLocalClientAuthSession = NULL;

	if ( ! pFnFindLocalClientAuthSession )
		pFnFindLocalClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40159 ];

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms FindLocalClientAuthSession_Parms;
	FindLocalClientAuthSession_Parms.ServerConnection = ServerConnection;

	pFnFindLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Parms, NULL );

	pFnFindLocalClientAuthSession->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &FindLocalClientAuthSession_Parms.OutSessionInfo, 0x64 );

	return FindLocalClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FAuthSession            OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::FindClientAuthSession ( class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo )
{
	static UFunction* pFnFindClientAuthSession = NULL;

	if ( ! pFnFindClientAuthSession )
		pFnFindClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40155 ];

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms FindClientAuthSession_Parms;
	FindClientAuthSession_Parms.ClientConnection = ClientConnection;

	pFnFindClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindClientAuthSession, &FindClientAuthSession_Parms, NULL );

	pFnFindClientAuthSession->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &FindClientAuthSession_Parms.OutSessionInfo, 0x68 );

	return FindClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420404] ( FUNC_Native )
// Parameters infos:
// struct FLocalAuthSession       OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

void UOnlineAuthInterfaceImpl::AllLocalServerAuthSessions ( struct FLocalAuthSession* OutSessionInfo )
{
	static UFunction* pFnAllLocalServerAuthSessions = NULL;

	if ( ! pFnAllLocalServerAuthSessions )
		pFnAllLocalServerAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40153 ];

	UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Parms AllLocalServerAuthSessions_Parms;

	pFnAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllLocalServerAuthSessions, &AllLocalServerAuthSessions_Parms, NULL );

	pFnAllLocalServerAuthSessions->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &AllLocalServerAuthSessions_Parms.OutSessionInfo, 0x64 );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420404] ( FUNC_Native )
// Parameters infos:
// struct FAuthSession            OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

void UOnlineAuthInterfaceImpl::AllServerAuthSessions ( struct FAuthSession* OutSessionInfo )
{
	static UFunction* pFnAllServerAuthSessions = NULL;

	if ( ! pFnAllServerAuthSessions )
		pFnAllServerAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40151 ];

	UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Parms AllServerAuthSessions_Parms;

	pFnAllServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllServerAuthSessions, &AllServerAuthSessions_Parms, NULL );

	pFnAllServerAuthSessions->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &AllServerAuthSessions_Parms.OutSessionInfo, 0x68 );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420404] ( FUNC_Native )
// Parameters infos:
// struct FLocalAuthSession       OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

void UOnlineAuthInterfaceImpl::AllLocalClientAuthSessions ( struct FLocalAuthSession* OutSessionInfo )
{
	static UFunction* pFnAllLocalClientAuthSessions = NULL;

	if ( ! pFnAllLocalClientAuthSessions )
		pFnAllLocalClientAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40149 ];

	UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Parms AllLocalClientAuthSessions_Parms;

	pFnAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllLocalClientAuthSessions, &AllLocalClientAuthSessions_Parms, NULL );

	pFnAllLocalClientAuthSessions->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &AllLocalClientAuthSessions_Parms.OutSessionInfo, 0x64 );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420404] ( FUNC_Native )
// Parameters infos:
// struct FAuthSession            OutSessionInfo                 ( CPF_Parm | CPF_OutParm )

void UOnlineAuthInterfaceImpl::AllClientAuthSessions ( struct FAuthSession* OutSessionInfo )
{
	static UFunction* pFnAllClientAuthSessions = NULL;

	if ( ! pFnAllClientAuthSessions )
		pFnAllClientAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40147 ];

	UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Parms AllClientAuthSessions_Parms;

	pFnAllClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllClientAuthSessions, &AllClientAuthSessions_Parms, NULL );

	pFnAllClientAuthSessions->FunctionFlags |= 0x400;

	if ( OutSessionInfo )
		memcpy ( OutSessionInfo, &AllClientAuthSessions_Parms.OutSessionInfo, 0x68 );
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceImpl::EndAllRemoteServerAuthSessions ( )
{
	static UFunction* pFnEndAllRemoteServerAuthSessions = NULL;

	if ( ! pFnEndAllRemoteServerAuthSessions )
		pFnEndAllRemoteServerAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40146 ];

	UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Parms EndAllRemoteServerAuthSessions_Parms;

	pFnEndAllRemoteServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndAllRemoteServerAuthSessions, &EndAllRemoteServerAuthSessions_Parms, NULL );

	pFnEndAllRemoteServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceImpl::EndAllLocalServerAuthSessions ( )
{
	static UFunction* pFnEndAllLocalServerAuthSessions = NULL;

	if ( ! pFnEndAllLocalServerAuthSessions )
		pFnEndAllLocalServerAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40145 ];

	UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Parms EndAllLocalServerAuthSessions_Parms;

	pFnEndAllLocalServerAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndAllLocalServerAuthSessions, &EndAllLocalServerAuthSessions_Parms, NULL );

	pFnEndAllLocalServerAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )

void UOnlineAuthInterfaceImpl::EndRemoteServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP )
{
	static UFunction* pFnEndRemoteServerAuthSession = NULL;

	if ( ! pFnEndRemoteServerAuthSession )
		pFnEndRemoteServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40142 ];

	UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Parms EndRemoteServerAuthSession_Parms;
	memcpy ( &EndRemoteServerAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &EndRemoteServerAuthSession_Parms.ServerIP, &ServerIP, 0x14 );

	pFnEndRemoteServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndRemoteServerAuthSession, &EndRemoteServerAuthSession_Parms, NULL );

	pFnEndRemoteServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )

void UOnlineAuthInterfaceImpl::EndLocalServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP )
{
	static UFunction* pFnEndLocalServerAuthSession = NULL;

	if ( ! pFnEndLocalServerAuthSession )
		pFnEndLocalServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40139 ];

	UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Parms EndLocalServerAuthSession_Parms;
	memcpy ( &EndLocalServerAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &EndLocalServerAuthSession_Parms.ClientIP, &ClientIP, 0x14 );

	pFnEndLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndLocalServerAuthSession, &EndLocalServerAuthSession_Parms, NULL );

	pFnEndLocalServerAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID )
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if ( ! pFnVerifyServerAuthSession )
		pFnVerifyServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40134 ];

	UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;
	memcpy ( &VerifyServerAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &VerifyServerAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	VerifyServerAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent ( pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL );

	return VerifyServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if ( ! pFnCreateServerAuthSession )
		pFnCreateServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40128 ];

	UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;
	memcpy ( &CreateServerAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &CreateServerAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	CreateServerAuthSession_Parms.ClientPort = ClientPort;

	this->ProcessEvent ( pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL );

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateServerAuthSession_Parms.OutAuthTicketUID;

	return CreateServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceImpl::EndAllRemoteClientAuthSessions ( )
{
	static UFunction* pFnEndAllRemoteClientAuthSessions = NULL;

	if ( ! pFnEndAllRemoteClientAuthSessions )
		pFnEndAllRemoteClientAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40127 ];

	UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Parms EndAllRemoteClientAuthSessions_Parms;

	pFnEndAllRemoteClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndAllRemoteClientAuthSessions, &EndAllRemoteClientAuthSessions_Parms, NULL );

	pFnEndAllRemoteClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceImpl::EndAllLocalClientAuthSessions ( )
{
	static UFunction* pFnEndAllLocalClientAuthSessions = NULL;

	if ( ! pFnEndAllLocalClientAuthSessions )
		pFnEndAllLocalClientAuthSessions = (UFunction*) UObject::GObjObjects()->Data[ 40126 ];

	UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Parms EndAllLocalClientAuthSessions_Parms;

	pFnEndAllLocalClientAuthSessions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndAllLocalClientAuthSessions, &EndAllLocalClientAuthSessions_Parms, NULL );

	pFnEndAllLocalClientAuthSessions->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )

void UOnlineAuthInterfaceImpl::EndRemoteClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP )
{
	static UFunction* pFnEndRemoteClientAuthSession = NULL;

	if ( ! pFnEndRemoteClientAuthSession )
		pFnEndRemoteClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40123 ];

	UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Parms EndRemoteClientAuthSession_Parms;
	memcpy ( &EndRemoteClientAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &EndRemoteClientAuthSession_Parms.ClientIP, &ClientIP, 0x14 );

	pFnEndRemoteClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndRemoteClientAuthSession, &EndRemoteClientAuthSession_Parms, NULL );

	pFnEndRemoteClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )

void UOnlineAuthInterfaceImpl::EndLocalClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort )
{
	static UFunction* pFnEndLocalClientAuthSession = NULL;

	if ( ! pFnEndLocalClientAuthSession )
		pFnEndLocalClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40119 ];

	UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Parms EndLocalClientAuthSession_Parms;
	memcpy ( &EndLocalClientAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &EndLocalClientAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	EndLocalClientAuthSession_Parms.ServerPort = ServerPort;

	pFnEndLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndLocalClientAuthSession, &EndLocalClientAuthSession_Parms, NULL );

	pFnEndLocalClientAuthSession->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID )
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if ( ! pFnVerifyClientAuthSession )
		pFnVerifyClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40113 ];

	UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;
	memcpy ( &VerifyClientAuthSession_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &VerifyClientAuthSession_Parms.ClientIP, &ClientIP, 0x14 );
	VerifyClientAuthSession_Parms.ClientPort = ClientPort;
	VerifyClientAuthSession_Parms.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent ( pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL );

	return VerifyClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )
// int                            OutAuthTicketUID               ( CPF_Parm | CPF_OutParm )

bool UOnlineAuthInterfaceImpl::CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID )
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if ( ! pFnCreateClientAuthSession )
		pFnCreateClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 40106 ];

	UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;
	memcpy ( &CreateClientAuthSession_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &CreateClientAuthSession_Parms.ServerIP, &ServerIP, 0x14 );
	CreateClientAuthSession_Parms.ServerPort = ServerPort;
	CreateClientAuthSession_Parms.bSecure = bSecure;

	this->ProcessEvent ( pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL );

	if ( OutAuthTicketUID )
		*OutAuthTicketUID = CreateClientAuthSession_Parms.OutAuthTicketUID;

	return CreateClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceImpl::SendServerAuthRetryRequest ( )
{
	static UFunction* pFnSendServerAuthRetryRequest = NULL;

	if ( ! pFnSendServerAuthRetryRequest )
		pFnSendServerAuthRetryRequest = (UFunction*) UObject::GObjObjects()->Data[ 40104 ];

	UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Parms SendServerAuthRetryRequest_Parms;

	pFnSendServerAuthRetryRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthRetryRequest, &SendServerAuthRetryRequest_Parms, NULL );

	pFnSendServerAuthRetryRequest->FunctionFlags |= 0x400;

	return SendServerAuthRetryRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendClientAuthEndSessionRequest ( class UPlayer* ClientConnection )
{
	static UFunction* pFnSendClientAuthEndSessionRequest = NULL;

	if ( ! pFnSendClientAuthEndSessionRequest )
		pFnSendClientAuthEndSessionRequest = (UFunction*) UObject::GObjObjects()->Data[ 40101 ];

	UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Parms SendClientAuthEndSessionRequest_Parms;
	SendClientAuthEndSessionRequest_Parms.ClientConnection = ClientConnection;

	pFnSendClientAuthEndSessionRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthEndSessionRequest, &SendClientAuthEndSessionRequest_Parms, NULL );

	pFnSendClientAuthEndSessionRequest->FunctionFlags |= 0x400;

	return SendClientAuthEndSessionRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendServerAuthResponse ( class UPlayer* ClientConnection, int AuthTicketUID )
{
	static UFunction* pFnSendServerAuthResponse = NULL;

	if ( ! pFnSendServerAuthResponse )
		pFnSendServerAuthResponse = (UFunction*) UObject::GObjObjects()->Data[ 40097 ];

	UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Parms SendServerAuthResponse_Parms;
	SendServerAuthResponse_Parms.ClientConnection = ClientConnection;
	SendServerAuthResponse_Parms.AuthTicketUID = AuthTicketUID;

	pFnSendServerAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthResponse, &SendServerAuthResponse_Parms, NULL );

	pFnSendServerAuthResponse->FunctionFlags |= 0x400;

	return SendServerAuthResponse_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AuthTicketUID                  ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendClientAuthResponse ( int AuthTicketUID )
{
	static UFunction* pFnSendClientAuthResponse = NULL;

	if ( ! pFnSendClientAuthResponse )
		pFnSendClientAuthResponse = (UFunction*) UObject::GObjObjects()->Data[ 40094 ];

	UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Parms SendClientAuthResponse_Parms;
	SendClientAuthResponse_Parms.AuthTicketUID = AuthTicketUID;

	pFnSendClientAuthResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthResponse, &SendClientAuthResponse_Parms, NULL );

	pFnSendClientAuthResponse->FunctionFlags |= 0x400;

	return SendClientAuthResponse_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendServerAuthRequest ( struct FUniqueNetId ServerUID )
{
	static UFunction* pFnSendServerAuthRequest = NULL;

	if ( ! pFnSendServerAuthRequest )
		pFnSendServerAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 40091 ];

	UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;
	memcpy ( &SendServerAuthRequest_Parms.ServerUID, &ServerUID, 0x48 );

	this->ProcessEvent ( pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, NULL );

	return SendServerAuthRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID )
{
	static UFunction* pFnSendClientAuthRequest = NULL;

	if ( ! pFnSendClientAuthRequest )
		pFnSendClientAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 40087 ];

	UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;
	SendClientAuthRequest_Parms.ClientConnection = ClientConnection;
	memcpy ( &SendClientAuthRequest_Parms.ClientUID, &ClientUID, 0x48 );

	this->ProcessEvent ( pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, NULL );

	return SendClientAuthRequest_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate ( struct FScriptDelegate ServerConnectionCloseDelegate )
{
	static UFunction* pFnClearServerConnectionCloseDelegate = NULL;

	if ( ! pFnClearServerConnectionCloseDelegate )
		pFnClearServerConnectionCloseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40084 ];

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms ClearServerConnectionCloseDelegate_Parms;
	memcpy ( &ClearServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, &ServerConnectionCloseDelegate, 0x10 );

	this->ProcessEvent ( pFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate ( struct FScriptDelegate ServerConnectionCloseDelegate )
{
	static UFunction* pFnAddServerConnectionCloseDelegate = NULL;

	if ( ! pFnAddServerConnectionCloseDelegate )
		pFnAddServerConnectionCloseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40082 ];

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms AddServerConnectionCloseDelegate_Parms;
	memcpy ( &AddServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, &ServerConnectionCloseDelegate, 0x10 );

	this->ProcessEvent ( pFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] 
// Parameters infos:
// class UPlayer*                 ServerConnection               ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnServerConnectionClose ( class UPlayer* ServerConnection )
{
	static UFunction* pFnOnServerConnectionClose = NULL;

	if ( ! pFnOnServerConnectionClose )
		pFnOnServerConnectionClose = (UFunction*) UObject::GObjObjects()->Data[ 39980 ];

	UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Parms OnServerConnectionClose_Parms;
	OnServerConnectionClose_Parms.ServerConnection = ServerConnection;

	this->ProcessEvent ( pFnOnServerConnectionClose, &OnServerConnectionClose_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate ( struct FScriptDelegate ClientConnectionCloseDelegate )
{
	static UFunction* pFnClearClientConnectionCloseDelegate = NULL;

	if ( ! pFnClearClientConnectionCloseDelegate )
		pFnClearClientConnectionCloseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40078 ];

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms ClearClientConnectionCloseDelegate_Parms;
	memcpy ( &ClearClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, &ClientConnectionCloseDelegate, 0x10 );

	this->ProcessEvent ( pFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate ( struct FScriptDelegate ClientConnectionCloseDelegate )
{
	static UFunction* pFnAddClientConnectionCloseDelegate = NULL;

	if ( ! pFnAddClientConnectionCloseDelegate )
		pFnAddClientConnectionCloseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40076 ];

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms AddClientConnectionCloseDelegate_Parms;
	memcpy ( &AddClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, &ClientConnectionCloseDelegate, 0x10 );

	this->ProcessEvent ( pFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] 
// Parameters infos:
// class UPlayer*                 ClientConnection               ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnClientConnectionClose ( class UPlayer* ClientConnection )
{
	static UFunction* pFnOnClientConnectionClose = NULL;

	if ( ! pFnOnClientConnectionClose )
		pFnOnClientConnectionClose = (UFunction*) UObject::GObjObjects()->Data[ 39977 ];

	UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Parms OnClientConnectionClose_Parms;
	OnClientConnectionClose_Parms.ClientConnection = ClientConnection;

	this->ProcessEvent ( pFnOnClientConnectionClose, &OnClientConnectionClose_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerAuthRetryRequestDelegate ( struct FScriptDelegate ServerAuthRetryRequestDelegate )
{
	static UFunction* pFnClearServerAuthRetryRequestDelegate = NULL;

	if ( ! pFnClearServerAuthRetryRequestDelegate )
		pFnClearServerAuthRetryRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40072 ];

	UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Parms ClearServerAuthRetryRequestDelegate_Parms;
	memcpy ( &ClearServerAuthRetryRequestDelegate_Parms.ServerAuthRetryRequestDelegate, &ServerAuthRetryRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnClearServerAuthRetryRequestDelegate, &ClearServerAuthRetryRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthRetryRequestDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerAuthRetryRequestDelegate ( struct FScriptDelegate ServerAuthRetryRequestDelegate )
{
	static UFunction* pFnAddServerAuthRetryRequestDelegate = NULL;

	if ( ! pFnAddServerAuthRetryRequestDelegate )
		pFnAddServerAuthRetryRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40070 ];

	UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Parms AddServerAuthRetryRequestDelegate_Parms;
	memcpy ( &AddServerAuthRetryRequestDelegate_Parms.ServerAuthRetryRequestDelegate, &ServerAuthRetryRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnAddServerAuthRetryRequestDelegate, &AddServerAuthRetryRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] 
// Parameters infos:
// class UPlayer*                 ClientConnection               ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnServerAuthRetryRequest ( class UPlayer* ClientConnection )
{
	static UFunction* pFnOnServerAuthRetryRequest = NULL;

	if ( ! pFnOnServerAuthRetryRequest )
		pFnOnServerAuthRetryRequest = (UFunction*) UObject::GObjObjects()->Data[ 39974 ];

	UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Parms OnServerAuthRetryRequest_Parms;
	OnServerAuthRetryRequest_Parms.ClientConnection = ClientConnection;

	this->ProcessEvent ( pFnOnServerAuthRetryRequest, &OnServerAuthRetryRequest_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientAuthEndSessionRequestDelegate ( struct FScriptDelegate ClientAuthEndSessionRequestDelegate )
{
	static UFunction* pFnClearClientAuthEndSessionRequestDelegate = NULL;

	if ( ! pFnClearClientAuthEndSessionRequestDelegate )
		pFnClearClientAuthEndSessionRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40066 ];

	UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Parms ClearClientAuthEndSessionRequestDelegate_Parms;
	memcpy ( &ClearClientAuthEndSessionRequestDelegate_Parms.ClientAuthEndSessionRequestDelegate, &ClientAuthEndSessionRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnClearClientAuthEndSessionRequestDelegate, &ClearClientAuthEndSessionRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthEndSessionRequestDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientAuthEndSessionRequestDelegate ( struct FScriptDelegate ClientAuthEndSessionRequestDelegate )
{
	static UFunction* pFnAddClientAuthEndSessionRequestDelegate = NULL;

	if ( ! pFnAddClientAuthEndSessionRequestDelegate )
		pFnAddClientAuthEndSessionRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40064 ];

	UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Parms AddClientAuthEndSessionRequestDelegate_Parms;
	memcpy ( &AddClientAuthEndSessionRequestDelegate_Parms.ClientAuthEndSessionRequestDelegate, &ClientAuthEndSessionRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnAddClientAuthEndSessionRequestDelegate, &AddClientAuthEndSessionRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] 
// Parameters infos:
// class UPlayer*                 ServerConnection               ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnClientAuthEndSessionRequest ( class UPlayer* ServerConnection )
{
	static UFunction* pFnOnClientAuthEndSessionRequest = NULL;

	if ( ! pFnOnClientAuthEndSessionRequest )
		pFnOnClientAuthEndSessionRequest = (UFunction*) UObject::GObjObjects()->Data[ 39971 ];

	UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Parms OnClientAuthEndSessionRequest_Parms;
	OnClientAuthEndSessionRequest_Parms.ServerConnection = ServerConnection;

	this->ProcessEvent ( pFnOnClientAuthEndSessionRequest, &OnClientAuthEndSessionRequest_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerAuthCompleteDelegate ( struct FScriptDelegate ServerAuthCompleteDelegate )
{
	static UFunction* pFnClearServerAuthCompleteDelegate = NULL;

	if ( ! pFnClearServerAuthCompleteDelegate )
		pFnClearServerAuthCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40060 ];

	UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Parms ClearServerAuthCompleteDelegate_Parms;
	memcpy ( &ClearServerAuthCompleteDelegate_Parms.ServerAuthCompleteDelegate, &ServerAuthCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearServerAuthCompleteDelegate, &ClearServerAuthCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerAuthCompleteDelegate ( struct FScriptDelegate ServerAuthCompleteDelegate )
{
	static UFunction* pFnAddServerAuthCompleteDelegate = NULL;

	if ( ! pFnAddServerAuthCompleteDelegate )
		pFnAddServerAuthCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40058 ];

	UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Parms AddServerAuthCompleteDelegate_Parms;
	memcpy ( &AddServerAuthCompleteDelegate_Parms.ServerAuthCompleteDelegate, &ServerAuthCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddServerAuthCompleteDelegate, &AddServerAuthCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// class UPlayer*                 ServerConnection               ( CPF_Parm )
// struct FString                 ExtraInfo                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::OnServerAuthComplete ( unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, struct FString ExtraInfo )
{
	static UFunction* pFnOnServerAuthComplete = NULL;

	if ( ! pFnOnServerAuthComplete )
		pFnOnServerAuthComplete = (UFunction*) UObject::GObjObjects()->Data[ 39968 ];

	UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Parms OnServerAuthComplete_Parms;
	OnServerAuthComplete_Parms.bSuccess = bSuccess;
	memcpy ( &OnServerAuthComplete_Parms.ServerUID, &ServerUID, 0x48 );
	OnServerAuthComplete_Parms.ServerConnection = ServerConnection;
	memcpy ( &OnServerAuthComplete_Parms.ExtraInfo, &ExtraInfo, 0xC );

	this->ProcessEvent ( pFnOnServerAuthComplete, &OnServerAuthComplete_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientAuthCompleteDelegate ( struct FScriptDelegate ClientAuthCompleteDelegate )
{
	static UFunction* pFnClearClientAuthCompleteDelegate = NULL;

	if ( ! pFnClearClientAuthCompleteDelegate )
		pFnClearClientAuthCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40051 ];

	UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Parms ClearClientAuthCompleteDelegate_Parms;
	memcpy ( &ClearClientAuthCompleteDelegate_Parms.ClientAuthCompleteDelegate, &ClientAuthCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearClientAuthCompleteDelegate, &ClearClientAuthCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthCompleteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientAuthCompleteDelegate ( struct FScriptDelegate ClientAuthCompleteDelegate )
{
	static UFunction* pFnAddClientAuthCompleteDelegate = NULL;

	if ( ! pFnAddClientAuthCompleteDelegate )
		pFnAddClientAuthCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40049 ];

	UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Parms AddClientAuthCompleteDelegate_Parms;
	memcpy ( &AddClientAuthCompleteDelegate_Parms.ClientAuthCompleteDelegate, &ClientAuthCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddClientAuthCompleteDelegate, &AddClientAuthCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FString                 ExtraInfo                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::OnClientAuthComplete ( unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, struct FString ExtraInfo )
{
	static UFunction* pFnOnClientAuthComplete = NULL;

	if ( ! pFnOnClientAuthComplete )
		pFnOnClientAuthComplete = (UFunction*) UObject::GObjObjects()->Data[ 39965 ];

	UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Parms OnClientAuthComplete_Parms;
	OnClientAuthComplete_Parms.bSuccess = bSuccess;
	memcpy ( &OnClientAuthComplete_Parms.ClientUID, &ClientUID, 0x48 );
	OnClientAuthComplete_Parms.ClientConnection = ClientConnection;
	memcpy ( &OnClientAuthComplete_Parms.ExtraInfo, &ExtraInfo, 0xC );

	this->ProcessEvent ( pFnOnClientAuthComplete, &OnClientAuthComplete_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthResponseDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerAuthResponseDelegate ( struct FScriptDelegate ServerAuthResponseDelegate )
{
	static UFunction* pFnClearServerAuthResponseDelegate = NULL;

	if ( ! pFnClearServerAuthResponseDelegate )
		pFnClearServerAuthResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40042 ];

	UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Parms ClearServerAuthResponseDelegate_Parms;
	memcpy ( &ClearServerAuthResponseDelegate_Parms.ServerAuthResponseDelegate, &ServerAuthResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnClearServerAuthResponseDelegate, &ClearServerAuthResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthResponseDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerAuthResponseDelegate ( struct FScriptDelegate ServerAuthResponseDelegate )
{
	static UFunction* pFnAddServerAuthResponseDelegate = NULL;

	if ( ! pFnAddServerAuthResponseDelegate )
		pFnAddServerAuthResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40040 ];

	UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Parms AddServerAuthResponseDelegate_Parms;
	memcpy ( &AddServerAuthResponseDelegate_Parms.ServerAuthResponseDelegate, &ServerAuthResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnAddServerAuthResponseDelegate, &AddServerAuthResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnServerAuthResponse ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID )
{
	static UFunction* pFnOnServerAuthResponse = NULL;

	if ( ! pFnOnServerAuthResponse )
		pFnOnServerAuthResponse = (UFunction*) UObject::GObjObjects()->Data[ 39962 ];

	UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Parms OnServerAuthResponse_Parms;
	memcpy ( &OnServerAuthResponse_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &OnServerAuthResponse_Parms.ServerIP, &ServerIP, 0x14 );
	OnServerAuthResponse_Parms.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent ( pFnOnServerAuthResponse, &OnServerAuthResponse_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthResponseDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientAuthResponseDelegate ( struct FScriptDelegate ClientAuthResponseDelegate )
{
	static UFunction* pFnClearClientAuthResponseDelegate = NULL;

	if ( ! pFnClearClientAuthResponseDelegate )
		pFnClearClientAuthResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40034 ];

	UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Parms ClearClientAuthResponseDelegate_Parms;
	memcpy ( &ClearClientAuthResponseDelegate_Parms.ClientAuthResponseDelegate, &ClientAuthResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnClearClientAuthResponseDelegate, &ClearClientAuthResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthResponseDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientAuthResponseDelegate ( struct FScriptDelegate ClientAuthResponseDelegate )
{
	static UFunction* pFnAddClientAuthResponseDelegate = NULL;

	if ( ! pFnAddClientAuthResponseDelegate )
		pFnAddClientAuthResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40032 ];

	UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Parms AddClientAuthResponseDelegate_Parms;
	memcpy ( &AddClientAuthResponseDelegate_Parms.ClientAuthResponseDelegate, &ClientAuthResponseDelegate, 0x10 );

	this->ProcessEvent ( pFnAddClientAuthResponseDelegate, &AddClientAuthResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            AuthTicketUID                  ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnClientAuthResponse ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int AuthTicketUID )
{
	static UFunction* pFnOnClientAuthResponse = NULL;

	if ( ! pFnOnClientAuthResponse )
		pFnOnClientAuthResponse = (UFunction*) UObject::GObjObjects()->Data[ 39959 ];

	UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Parms OnClientAuthResponse_Parms;
	memcpy ( &OnClientAuthResponse_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &OnClientAuthResponse_Parms.ClientIP, &ClientIP, 0x14 );
	OnClientAuthResponse_Parms.AuthTicketUID = AuthTicketUID;

	this->ProcessEvent ( pFnOnClientAuthResponse, &OnClientAuthResponse_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthRequestDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerAuthRequestDelegate ( struct FScriptDelegate ServerAuthRequestDelegate )
{
	static UFunction* pFnClearServerAuthRequestDelegate = NULL;

	if ( ! pFnClearServerAuthRequestDelegate )
		pFnClearServerAuthRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40026 ];

	UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Parms ClearServerAuthRequestDelegate_Parms;
	memcpy ( &ClearServerAuthRequestDelegate_Parms.ServerAuthRequestDelegate, &ServerAuthRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnClearServerAuthRequestDelegate, &ClearServerAuthRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ServerAuthRequestDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerAuthRequestDelegate ( struct FScriptDelegate ServerAuthRequestDelegate )
{
	static UFunction* pFnAddServerAuthRequestDelegate = NULL;

	if ( ! pFnAddServerAuthRequestDelegate )
		pFnAddServerAuthRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40024 ];

	UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Parms AddServerAuthRequestDelegate_Parms;
	memcpy ( &AddServerAuthRequestDelegate_Parms.ServerAuthRequestDelegate, &ServerAuthRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnAddServerAuthRequestDelegate, &AddServerAuthRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] 
// Parameters infos:
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// struct FUniqueNetId            ClientUID                      ( CPF_Parm )
// struct FIpAddr                 ClientIP                       ( CPF_Parm )
// int                            ClientPort                     ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnServerAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort )
{
	static UFunction* pFnOnServerAuthRequest = NULL;

	if ( ! pFnOnServerAuthRequest )
		pFnOnServerAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 39956 ];

	UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Parms OnServerAuthRequest_Parms;
	OnServerAuthRequest_Parms.ClientConnection = ClientConnection;
	memcpy ( &OnServerAuthRequest_Parms.ClientUID, &ClientUID, 0x48 );
	memcpy ( &OnServerAuthRequest_Parms.ClientIP, &ClientIP, 0x14 );
	OnServerAuthRequest_Parms.ClientPort = ClientPort;

	this->ProcessEvent ( pFnOnServerAuthRequest, &OnServerAuthRequest_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthRequestDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientAuthRequestDelegate ( struct FScriptDelegate ClientAuthRequestDelegate )
{
	static UFunction* pFnClearClientAuthRequestDelegate = NULL;

	if ( ! pFnClearClientAuthRequestDelegate )
		pFnClearClientAuthRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40017 ];

	UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Parms ClearClientAuthRequestDelegate_Parms;
	memcpy ( &ClearClientAuthRequestDelegate_Parms.ClientAuthRequestDelegate, &ClientAuthRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnClearClientAuthRequestDelegate, &ClearClientAuthRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAuthRequestDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientAuthRequestDelegate ( struct FScriptDelegate ClientAuthRequestDelegate )
{
	static UFunction* pFnAddClientAuthRequestDelegate = NULL;

	if ( ! pFnAddClientAuthRequestDelegate )
		pFnAddClientAuthRequestDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40015 ];

	UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Parms AddClientAuthRequestDelegate_Parms;
	memcpy ( &AddClientAuthRequestDelegate_Parms.ClientAuthRequestDelegate, &ClientAuthRequestDelegate, 0x10 );

	this->ProcessEvent ( pFnAddClientAuthRequestDelegate, &AddClientAuthRequestDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ServerUID                      ( CPF_Parm )
// struct FIpAddr                 ServerIP                       ( CPF_Parm )
// int                            ServerPort                     ( CPF_Parm )
// unsigned long                  bSecure                        ( CPF_Parm )

void UOnlineAuthInterfaceImpl::OnClientAuthRequest ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure )
{
	static UFunction* pFnOnClientAuthRequest = NULL;

	if ( ! pFnOnClientAuthRequest )
		pFnOnClientAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 39953 ];

	UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Parms OnClientAuthRequest_Parms;
	memcpy ( &OnClientAuthRequest_Parms.ServerUID, &ServerUID, 0x48 );
	memcpy ( &OnClientAuthRequest_Parms.ServerIP, &ServerIP, 0x14 );
	OnClientAuthRequest_Parms.ServerPort = ServerPort;
	OnClientAuthRequest_Parms.bSecure = bSecure;

	this->ProcessEvent ( pFnOnClientAuthRequest, &OnClientAuthRequest_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AuthReadyDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate ( struct FScriptDelegate AuthReadyDelegate )
{
	static UFunction* pFnClearAuthReadyDelegate = NULL;

	if ( ! pFnClearAuthReadyDelegate )
		pFnClearAuthReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40008 ];

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms ClearAuthReadyDelegate_Parms;
	memcpy ( &ClearAuthReadyDelegate_Parms.AuthReadyDelegate, &AuthReadyDelegate, 0x10 );

	this->ProcessEvent ( pFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AuthReadyDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate ( struct FScriptDelegate AuthReadyDelegate )
{
	static UFunction* pFnAddAuthReadyDelegate = NULL;

	if ( ! pFnAddAuthReadyDelegate )
		pFnAddAuthReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40006 ];

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms AddAuthReadyDelegate_Parms;
	memcpy ( &AddAuthReadyDelegate_Parms.AuthReadyDelegate, &AuthReadyDelegate, 0x10 );

	this->ProcessEvent ( pFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] 
// Parameters infos:

void UOnlineAuthInterfaceImpl::OnAuthReady ( )
{
	static UFunction* pFnOnAuthReady = NULL;

	if ( ! pFnOnAuthReady )
		pFnOnAuthReady = (UFunction*) UObject::GObjObjects()->Data[ 39950 ];

	UOnlineAuthInterfaceImpl_execOnAuthReady_Parms OnAuthReady_Parms;

	this->ProcessEvent ( pFnOnAuthReady, &OnAuthReady_Parms, NULL );
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceImpl::IsReady ( )
{
	static UFunction* pFnIsReady = NULL;

	if ( ! pFnIsReady )
		pFnIsReady = (UFunction*) UObject::GObjObjects()->Data[ 40003 ];

	UOnlineAuthInterfaceImpl_execIsReady_Parms IsReady_Parms;

	this->ProcessEvent ( pFnIsReady, &IsReady_Parms, NULL );

	return IsReady_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GamePlayersChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGamePlayersChangedDelegate ( struct FScriptDelegate GamePlayersChangedDelegate )
{
	static UFunction* pFnClearGamePlayersChangedDelegate = NULL;

	if ( ! pFnClearGamePlayersChangedDelegate )
		pFnClearGamePlayersChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40534 ];

	UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Parms ClearGamePlayersChangedDelegate_Parms;
	memcpy ( &ClearGamePlayersChangedDelegate_Parms.GamePlayersChangedDelegate, &GamePlayersChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGamePlayersChangedDelegate, &ClearGamePlayersChangedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         GamePlayersChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGamePlayersChangedDelegate ( struct FScriptDelegate GamePlayersChangedDelegate )
{
	static UFunction* pFnAddGamePlayersChangedDelegate = NULL;

	if ( ! pFnAddGamePlayersChangedDelegate )
		pFnAddGamePlayersChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40532 ];

	UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Parms AddGamePlayersChangedDelegate_Parms;
	memcpy ( &AddGamePlayersChangedDelegate_Parms.GamePlayersChangedDelegate, &GamePlayersChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGamePlayersChangedDelegate, &AddGamePlayersChangedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::OnGamePlayersChanged ( struct FName SessionName, TArray< struct FUniqueNetId > Players )
{
	static UFunction* pFnOnGamePlayersChanged = NULL;

	if ( ! pFnOnGamePlayersChanged )
		pFnOnGamePlayersChanged = (UFunction*) UObject::GObjObjects()->Data[ 40274 ];

	UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Parms OnGamePlayersChanged_Parms;
	memcpy ( &OnGamePlayersChanged_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnGamePlayersChanged_Parms.Players, &Players, 0xC );

	this->ProcessEvent ( pFnOnGamePlayersChanged, &OnGamePlayersChanged_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            JoinablePlayerID               ( CPF_Parm )
// struct FString                 ServerAddress                  ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  Visibility                     ( CPF_Parm )

void UOnlineGameInterfaceImpl::SetFriendJoinLocation ( struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, unsigned char Visibility )
{
	static UFunction* pFnSetFriendJoinLocation = NULL;

	if ( ! pFnSetFriendJoinLocation )
		pFnSetFriendJoinLocation = (UFunction*) UObject::GObjObjects()->Data[ 40525 ];

	UOnlineGameInterfaceImpl_execSetFriendJoinLocation_Parms SetFriendJoinLocation_Parms;
	memcpy ( &SetFriendJoinLocation_Parms.JoinablePlayerID, &JoinablePlayerID, 0x48 );
	memcpy ( &SetFriendJoinLocation_Parms.ServerAddress, &ServerAddress, 0xC );
	SetFriendJoinLocation_Parms.Visibility = Visibility;

	this->ProcessEvent ( pFnSetFriendJoinLocation, &SetFriendJoinLocation_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         OldDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearReportMatchmakingInfoDelegate ( struct FScriptDelegate OldDelegate )
{
	static UFunction* pFnClearReportMatchmakingInfoDelegate = NULL;

	if ( ! pFnClearReportMatchmakingInfoDelegate )
		pFnClearReportMatchmakingInfoDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40523 ];

	UOnlineGameInterfaceImpl_execClearReportMatchmakingInfoDelegate_Parms ClearReportMatchmakingInfoDelegate_Parms;
	memcpy ( &ClearReportMatchmakingInfoDelegate_Parms.OldDelegate, &OldDelegate, 0x10 );

	this->ProcessEvent ( pFnClearReportMatchmakingInfoDelegate, &ClearReportMatchmakingInfoDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         NewDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddReportMatchmakingInfoDelegate ( struct FScriptDelegate NewDelegate )
{
	static UFunction* pFnAddReportMatchmakingInfoDelegate = NULL;

	if ( ! pFnAddReportMatchmakingInfoDelegate )
		pFnAddReportMatchmakingInfoDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40521 ];

	UOnlineGameInterfaceImpl_execAddReportMatchmakingInfoDelegate_Parms AddReportMatchmakingInfoDelegate_Parms;
	memcpy ( &AddReportMatchmakingInfoDelegate_Parms.NewDelegate, &NewDelegate, 0x10 );

	this->ProcessEvent ( pFnAddReportMatchmakingInfoDelegate, &AddReportMatchmakingInfoDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
// [0x00120000] 
// Parameters infos:
// struct FString                 NewInfo                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::EventReportMatchmakingInfo ( struct FString NewInfo )
{
	static UFunction* pFnEventReportMatchmakingInfo = NULL;

	if ( ! pFnEventReportMatchmakingInfo )
		pFnEventReportMatchmakingInfo = (UFunction*) UObject::GObjObjects()->Data[ 40276 ];

	UOnlineGameInterfaceImpl_execEventReportMatchmakingInfo_Parms EventReportMatchmakingInfo_Parms;
	memcpy ( &EventReportMatchmakingInfo_Parms.NewInfo, &NewInfo, 0xC );

	this->ProcessEvent ( pFnEventReportMatchmakingInfo, &EventReportMatchmakingInfo_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate )
{
	static UFunction* pFnClearQosStatusChangedDelegate = NULL;

	if ( ! pFnClearQosStatusChangedDelegate )
		pFnClearQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40518 ];

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms ClearQosStatusChangedDelegate_Parms;
	memcpy ( &ClearQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate )
{
	static UFunction* pFnAddQosStatusChangedDelegate = NULL;

	if ( ! pFnAddQosStatusChangedDelegate )
		pFnAddQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40516 ];

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms AddQosStatusChangedDelegate_Parms;
	memcpy ( &AddQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
// Parameters infos:
// int                            NumComplete                    ( CPF_Parm )
// int                            NumTotal                       ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnQosStatusChanged ( int NumComplete, int NumTotal )
{
	static UFunction* pFnOnQosStatusChanged = NULL;

	if ( ! pFnOnQosStatusChanged )
		pFnOnQosStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 40278 ];

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms OnQosStatusChanged_Parms;
	OnQosStatusChanged_Parms.NumComplete = NumComplete;
	OnQosStatusChanged_Parms.NumTotal = NumTotal;

	this->ProcessEvent ( pFnOnQosStatusChanged, &OnQosStatusChanged_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->Data[ 40509 ];

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->Data[ 40505 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->Data[ 40501 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 40497 ];

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinMigratedOnlineGameCompleteDelegate )
		pFnClearJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40494 ];

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms ClearJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinMigratedOnlineGameCompleteDelegate )
		pFnAddJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40492 ];

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms AddJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinMigratedOnlineGameComplete = NULL;

	if ( ! pFnOnJoinMigratedOnlineGameComplete )
		pFnOnJoinMigratedOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40254 ];

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms OnJoinMigratedOnlineGameComplete_Parms;
	memcpy ( &OnJoinMigratedOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinMigratedOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinMigratedOnlineGame = NULL;

	if ( ! pFnJoinMigratedOnlineGame )
		pFnJoinMigratedOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40485 ];

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinMigratedOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinMigratedOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearMigrateOnlineGameCompleteDelegate )
		pFnClearMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40483 ];

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms ClearMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddMigrateOnlineGameCompleteDelegate )
		pFnAddMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40481 ];

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms AddMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnMigrateOnlineGameComplete = NULL;

	if ( ! pFnOnMigrateOnlineGameComplete )
		pFnOnMigrateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40251 ];

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms OnMigrateOnlineGameComplete_Parms;
	memcpy ( &OnMigrateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnMigrateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName )
{
	static UFunction* pFnMigrateOnlineGame = NULL;

	if ( ! pFnMigrateOnlineGame )
		pFnMigrateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40475 ];

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &MigrateOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, NULL );

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate )
{
	static UFunction* pFnClearRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnClearRecalculateSkillRatingCompleteDelegate )
		pFnClearRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40473 ];

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms ClearRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &ClearRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingGameCompleteDelegate, &RecalculateSkillRatingGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingCompleteDelegate )
{
	static UFunction* pFnAddRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnAddRecalculateSkillRatingCompleteDelegate )
		pFnAddRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40471 ];

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms AddRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &AddRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingCompleteDelegate, &RecalculateSkillRatingCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRecalculateSkillRatingComplete = NULL;

	if ( ! pFnOnRecalculateSkillRatingComplete )
		pFnOnRecalculateSkillRatingComplete = (UFunction*) UObject::GObjObjects()->Data[ 40257 ];

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms OnRecalculateSkillRatingComplete_Parms;
	memcpy ( &OnRecalculateSkillRatingComplete_Parms.SessionName, &SessionName, 0x8 );
	OnRecalculateSkillRatingComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->Data[ 40464 ];

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0xC );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 40460 ];

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40456 ];

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40453 ];

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FString                 ErrorString                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceImpl::OnGameInviteAccepted ( struct FString ErrorString, struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 40272 ];

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
	memcpy ( &OnGameInviteAccepted_Parms.ErrorString, &ErrorString, 0xC );

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineGameInterfaceImpl::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 40447 ];

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40445 ];

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40443 ];

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = (UFunction*) UObject::GObjObjects()->Data[ 40284 ];

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->Data[ 40438 ];

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40435 ];

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40433 ];

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40263 ];

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40428 ];

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40425 ];

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40423 ];

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40260 ];

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40418 ];

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40416 ];

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40414 ];

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 40288 ];

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnUnregisterPlayers = NULL;

	if ( ! pFnUnregisterPlayers )
		pFnUnregisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 40406 ];

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy ( &UnregisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayers, &UnregisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &UnregisterPlayers_Parms.Players, 0xC );

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceImpl::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40402 ];

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40400 ];

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40398 ];

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 40290 ];

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x48 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRegisterPlayers = NULL;

	if ( ! pFnRegisterPlayers )
		pFnRegisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 40390 ];

	UOnlineGameInterfaceImpl_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy ( &RegisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterPlayers, &RegisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RegisterPlayers_Parms.Players, 0xC );

	return RegisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40385 ];

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x48 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 40381 ];

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40378 ];

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40376 ];

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40248 ];

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40369 ];

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 40366 ];

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40363 ];

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40361 ];

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 40269 ];

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 40358 ];

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40355 ];

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40353 ];

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 40349 ];

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40346 ];

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40344 ];

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40245 ];

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40339 ];

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40336 ];

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40334 ];

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40242 ];

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceImpl::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40327 ];

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40324 ];

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40322 ];

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40239 ];

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceImpl::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 40315 ];

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 40313 ];

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 40310 ];

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 40266 ];

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearHostStartPlayTogetherDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearHostStartPlayTogetherDelegate = NULL;

	if ( ! pFnClearHostStartPlayTogetherDelegate )
		pFnClearHostStartPlayTogetherDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40911 ];

	UOnlineLobbyInterfaceImpl_execClearHostStartPlayTogetherDelegate_Parms ClearHostStartPlayTogetherDelegate_Parms;
	memcpy ( &ClearHostStartPlayTogetherDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnClearHostStartPlayTogetherDelegate, &ClearHostStartPlayTogetherDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddHostStartPlayTogetherDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddHostStartPlayTogetherDelegate = NULL;

	if ( ! pFnAddHostStartPlayTogetherDelegate )
		pFnAddHostStartPlayTogetherDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40909 ];

	UOnlineLobbyInterfaceImpl_execAddHostStartPlayTogetherDelegate_Parms AddHostStartPlayTogetherDelegate_Parms;
	memcpy ( &AddHostStartPlayTogetherDelegate_Parms.InDelegate, &InDelegate, 0x10 );

	this->ProcessEvent ( pFnAddHostStartPlayTogetherDelegate, &AddHostStartPlayTogetherDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::OnHostStartPlayTogether ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnHostStartPlayTogether = NULL;

	if ( ! pFnOnHostStartPlayTogether )
		pFnOnHostStartPlayTogether = (UFunction*) UObject::GObjObjects()->Data[ 40628 ];

	UOnlineLobbyInterfaceImpl_execOnHostStartPlayTogether_Parms OnHostStartPlayTogether_Parms;
	OnHostStartPlayTogether_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnHostStartPlayTogether, &OnHostStartPlayTogether_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyErrorDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyErrorDelegate ( struct FScriptDelegate LobbyErrorDelegate )
{
	static UFunction* pFnClearLobbyErrorDelegate = NULL;

	if ( ! pFnClearLobbyErrorDelegate )
		pFnClearLobbyErrorDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40905 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyErrorDelegate_Parms ClearLobbyErrorDelegate_Parms;
	memcpy ( &ClearLobbyErrorDelegate_Parms.LobbyErrorDelegate, &LobbyErrorDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyErrorDelegate, &ClearLobbyErrorDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyErrorDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyErrorDelegate ( struct FScriptDelegate LobbyErrorDelegate )
{
	static UFunction* pFnAddLobbyErrorDelegate = NULL;

	if ( ! pFnAddLobbyErrorDelegate )
		pFnAddLobbyErrorDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40903 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyErrorDelegate_Parms AddLobbyErrorDelegate_Parms;
	memcpy ( &AddLobbyErrorDelegate_Parms.LobbyErrorDelegate, &LobbyErrorDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyErrorDelegate, &AddLobbyErrorDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
// [0x00120000] 
// Parameters infos:
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbyError ( struct FString Error )
{
	static UFunction* pFnOnLobbyError = NULL;

	if ( ! pFnOnLobbyError )
		pFnOnLobbyError = (UFunction*) UObject::GObjObjects()->Data[ 40619 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyError_Parms OnLobbyError_Parms;
	memcpy ( &OnLobbyError_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnLobbyError, &OnLobbyError_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FLobbyMember >  Members                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceImpl::eventGetLobbyMembers ( struct FUniqueLobbyId* LobbyId, TArray< struct FLobbyMember >* Members )
{
	static UFunction* pFnGetLobbyMembers = NULL;

	if ( ! pFnGetLobbyMembers )
		pFnGetLobbyMembers = (UFunction*) UObject::GObjObjects()->Data[ 40896 ];

	UOnlineLobbyInterfaceImpl_eventGetLobbyMembers_Parms GetLobbyMembers_Parms;

	this->ProcessEvent ( pFnGetLobbyMembers, &GetLobbyMembers_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyMembers_Parms.LobbyId, 0xC );

	if ( Members )
		memcpy ( Members, &GetLobbyMembers_Parms.Members, 0xC );

	return GetLobbyMembers_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySessionCreatedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCretedeDelegate ( struct FScriptDelegate LobbySessionCreatedDelegate )
{
	static UFunction* pFnClearLobbySessionCretedeDelegate = NULL;

	if ( ! pFnClearLobbySessionCretedeDelegate )
		pFnClearLobbySessionCretedeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40893 ];

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCretedeDelegate_Parms ClearLobbySessionCretedeDelegate_Parms;
	memcpy ( &ClearLobbySessionCretedeDelegate_Parms.LobbySessionCreatedDelegate, &LobbySessionCreatedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbySessionCretedeDelegate, &ClearLobbySessionCretedeDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySessionCreatedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbySessionCreatedDelegate ( struct FScriptDelegate LobbySessionCreatedDelegate )
{
	static UFunction* pFnClearLobbySessionCreatedDelegate = NULL;

	if ( ! pFnClearLobbySessionCreatedDelegate )
		pFnClearLobbySessionCreatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40891 ];

	UOnlineLobbyInterfaceImpl_execClearLobbySessionCreatedDelegate_Parms ClearLobbySessionCreatedDelegate_Parms;
	memcpy ( &ClearLobbySessionCreatedDelegate_Parms.LobbySessionCreatedDelegate, &LobbySessionCreatedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbySessionCreatedDelegate, &ClearLobbySessionCreatedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySessionCreatedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbySessionCreatedDelegate ( struct FScriptDelegate LobbySessionCreatedDelegate )
{
	static UFunction* pFnAddLobbySessionCreatedDelegate = NULL;

	if ( ! pFnAddLobbySessionCreatedDelegate )
		pFnAddLobbySessionCreatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40889 ];

	UOnlineLobbyInterfaceImpl_execAddLobbySessionCreatedDelegate_Parms AddLobbySessionCreatedDelegate_Parms;
	memcpy ( &AddLobbySessionCreatedDelegate_Parms.LobbySessionCreatedDelegate, &LobbySessionCreatedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbySessionCreatedDelegate, &AddLobbySessionCreatedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySessionCreatedDelegates ( )
{
	static UFunction* pFnTriggerLobbySessionCreatedDelegates = NULL;

	if ( ! pFnTriggerLobbySessionCreatedDelegates )
		pFnTriggerLobbySessionCreatedDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40885 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySessionCreatedDelegates_Parms TriggerLobbySessionCreatedDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbySessionCreatedDelegates, &TriggerLobbySessionCreatedDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
// [0x00120000] 
// Parameters infos:

void UOnlineLobbyInterfaceImpl::OnLobbySessionCreated ( )
{
	static UFunction* pFnOnLobbySessionCreated = NULL;

	if ( ! pFnOnLobbySessionCreated )
		pFnOnLobbySessionCreated = (UFunction*) UObject::GObjObjects()->Data[ 40625 ];

	UOnlineLobbyInterfaceImpl_execOnLobbySessionCreated_Parms OnLobbySessionCreated_Parms;

	this->ProcessEvent ( pFnOnLobbySessionCreated, &OnLobbySessionCreated_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

int UOnlineLobbyInterfaceImpl::eventGetLobbyIndex ( struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnGetLobbyIndex = NULL;

	if ( ! pFnGetLobbyIndex )
		pFnGetLobbyIndex = (UFunction*) UObject::GObjObjects()->Data[ 40882 ];

	UOnlineLobbyInterfaceImpl_eventGetLobbyIndex_Parms GetLobbyIndex_Parms;

	this->ProcessEvent ( pFnGetLobbyIndex, &GetLobbyIndex_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyIndex_Parms.LobbyId, 0xC );

	return GetLobbyIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
// [0x00420000] 
// Parameters infos:
// struct FUniqueNetId            PartyMember                    ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::RemoveLocalPlayerFromSession ( struct FUniqueNetId* PartyMember )
{
	static UFunction* pFnRemoveLocalPlayerFromSession = NULL;

	if ( ! pFnRemoveLocalPlayerFromSession )
		pFnRemoveLocalPlayerFromSession = (UFunction*) UObject::GObjObjects()->Data[ 40880 ];

	UOnlineLobbyInterfaceImpl_execRemoveLocalPlayerFromSession_Parms RemoveLocalPlayerFromSession_Parms;

	this->ProcessEvent ( pFnRemoveLocalPlayerFromSession, &RemoveLocalPlayerFromSession_Parms, NULL );

	if ( PartyMember )
		memcpy ( PartyMember, &RemoveLocalPlayerFromSession_Parms.PartyMember, 0x48 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
// [0x00420000] 
// Parameters infos:
// struct FUniqueNetId            NewPartyMember                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::AddLocalPartyMemberToSession ( struct FUniqueNetId* NewPartyMember )
{
	static UFunction* pFnAddLocalPartyMemberToSession = NULL;

	if ( ! pFnAddLocalPartyMemberToSession )
		pFnAddLocalPartyMemberToSession = (UFunction*) UObject::GObjObjects()->Data[ 40878 ];

	UOnlineLobbyInterfaceImpl_execAddLocalPartyMemberToSession_Parms AddLocalPartyMemberToSession_Parms;

	this->ProcessEvent ( pFnAddLocalPartyMemberToSession, &AddLocalPartyMemberToSession_Parms, NULL );

	if ( NewPartyMember )
		memcpy ( NewPartyMember, &AddLocalPartyMemberToSession_Parms.NewPartyMember, 0x48 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Reason                         ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::KickPlayer ( unsigned char Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnKickPlayer = NULL;

	if ( ! pFnKickPlayer )
		pFnKickPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40873 ];

	UOnlineLobbyInterfaceImpl_execKickPlayer_Parms KickPlayer_Parms;
	KickPlayer_Parms.Reason = Reason;

	this->ProcessEvent ( pFnKickPlayer, &KickPlayer_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &KickPlayer_Parms.LobbyId, 0xC );

	if ( PlayerID )
		memcpy ( PlayerID, &KickPlayer_Parms.PlayerID, 0x48 );

	return KickPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.PlayTogether_Invite
// [0x00420000] 
// Parameters infos:
// struct FString                 InviteMessage                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::PlayTogether_Invite ( struct FString InviteMessage, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnPlayTogether_Invite = NULL;

	if ( ! pFnPlayTogether_Invite )
		pFnPlayTogether_Invite = (UFunction*) UObject::GObjObjects()->Data[ 40870 ];

	UOnlineLobbyInterfaceImpl_execPlayTogether_Invite_Parms PlayTogether_Invite_Parms;
	memcpy ( &PlayTogether_Invite_Parms.InviteMessage, &InviteMessage, 0xC );

	this->ProcessEvent ( pFnPlayTogether_Invite, &PlayTogether_Invite_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &PlayTogether_Invite_Parms.LobbyId, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Const | CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::ShowInviteUI ( unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 40866 ];

	UOnlineLobbyInterfaceImpl_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &ShowInviteUI_Parms.LobbyId, 0xC );

	return ShowInviteUI_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// unsigned char                  Reason                         ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyDestroyedDelegates ( int LobbyIndex, unsigned char Reason )
{
	static UFunction* pFnTriggerLobbyDestroyedDelegates = NULL;

	if ( ! pFnTriggerLobbyDestroyedDelegates )
		pFnTriggerLobbyDestroyedDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40860 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyDestroyedDelegates_Parms TriggerLobbyDestroyedDelegates_Parms;
	TriggerLobbyDestroyedDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyDestroyedDelegates_Parms.Reason = Reason;

	this->ProcessEvent ( pFnTriggerLobbyDestroyedDelegates, &TriggerLobbyDestroyedDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyDestroyedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyDestroyedDelegate ( struct FScriptDelegate LobbyDestroyedDelegate )
{
	static UFunction* pFnClearLobbyDestroyedDelegate = NULL;

	if ( ! pFnClearLobbyDestroyedDelegate )
		pFnClearLobbyDestroyedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40857 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyDestroyedDelegate_Parms ClearLobbyDestroyedDelegate_Parms;
	memcpy ( &ClearLobbyDestroyedDelegate_Parms.LobbyDestroyedDelegate, &LobbyDestroyedDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyDestroyedDelegate, &ClearLobbyDestroyedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyDestroyedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyDestroyedDelegate ( struct FScriptDelegate LobbyDestroyedDelegate )
{
	static UFunction* pFnAddLobbyDestroyedDelegate = NULL;

	if ( ! pFnAddLobbyDestroyedDelegate )
		pFnAddLobbyDestroyedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40855 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyDestroyedDelegate_Parms AddLobbyDestroyedDelegate_Parms;
	memcpy ( &AddLobbyDestroyedDelegate_Parms.LobbyDestroyedDelegate, &LobbyDestroyedDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyDestroyedDelegate, &AddLobbyDestroyedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
// [0x00520000] 
// Parameters infos:
// unsigned char                  Reason                         ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::OnLobbyDestroyed ( unsigned char Reason, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnOnLobbyDestroyed = NULL;

	if ( ! pFnOnLobbyDestroyed )
		pFnOnLobbyDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 40622 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyDestroyed_Parms OnLobbyDestroyed_Parms;
	OnLobbyDestroyed_Parms.Reason = Reason;

	this->ProcessEvent ( pFnOnLobbyDestroyed, &OnLobbyDestroyed_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &OnLobbyDestroyed_Parms.LobbyId, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyInviteDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate )
{
	static UFunction* pFnClearLobbyInviteDelegate = NULL;

	if ( ! pFnClearLobbyInviteDelegate )
		pFnClearLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40850 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyInviteDelegate_Parms ClearLobbyInviteDelegate_Parms;
	memcpy ( &ClearLobbyInviteDelegate_Parms.LobbyInviteDelegate, &LobbyInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyInviteDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyInviteDelegate ( struct FScriptDelegate LobbyInviteDelegate )
{
	static UFunction* pFnAddLobbyInviteDelegate = NULL;

	if ( ! pFnAddLobbyInviteDelegate )
		pFnAddLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40848 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyInviteDelegate_Parms AddLobbyInviteDelegate_Parms;
	memcpy ( &AddLobbyInviteDelegate_Parms.LobbyInviteDelegate, &LobbyInviteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
// [0x00520000] 
// Parameters infos:
// unsigned long                  bAccepted                      ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            FriendId                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::OnLobbyInvite ( unsigned long bAccepted, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId )
{
	static UFunction* pFnOnLobbyInvite = NULL;

	if ( ! pFnOnLobbyInvite )
		pFnOnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 40616 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyInvite_Parms OnLobbyInvite_Parms;
	OnLobbyInvite_Parms.bAccepted = bAccepted;

	this->ProcessEvent ( pFnOnLobbyInvite, &OnLobbyInvite_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &OnLobbyInvite_Parms.LobbyId, 0xC );

	if ( FriendId )
		memcpy ( FriendId, &OnLobbyInvite_Parms.FriendId, 0x48 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::InviteToLobby ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnInviteToLobby = NULL;

	if ( ! pFnInviteToLobby )
		pFnInviteToLobby = (UFunction*) UObject::GObjObjects()->Data[ 40841 ];

	UOnlineLobbyInterfaceImpl_execInviteToLobby_Parms InviteToLobby_Parms;

	this->ProcessEvent ( pFnInviteToLobby, &InviteToLobby_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &InviteToLobby_Parms.LobbyId, 0xC );

	if ( PlayerID )
		memcpy ( PlayerID, &InviteToLobby_Parms.PlayerID, 0x48 );

	return InviteToLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            NewOwner                       ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SetLobbyOwner ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner )
{
	static UFunction* pFnSetLobbyOwner = NULL;

	if ( ! pFnSetLobbyOwner )
		pFnSetLobbyOwner = (UFunction*) UObject::GObjObjects()->Data[ 40837 ];

	UOnlineLobbyInterfaceImpl_execSetLobbyOwner_Parms SetLobbyOwner_Parms;

	this->ProcessEvent ( pFnSetLobbyOwner, &SetLobbyOwner_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyOwner_Parms.LobbyId, 0xC );

	if ( NewOwner )
		memcpy ( NewOwner, &SetLobbyOwner_Parms.NewOwner, 0x48 );

	return SetLobbyOwner_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bLocked                        ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SetLobbyLock ( unsigned long bLocked, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbyLock = NULL;

	if ( ! pFnSetLobbyLock )
		pFnSetLobbyLock = (UFunction*) UObject::GObjObjects()->Data[ 40833 ];

	UOnlineLobbyInterfaceImpl_execSetLobbyLock_Parms SetLobbyLock_Parms;
	SetLobbyLock_Parms.bLocked = bLocked;

	this->ProcessEvent ( pFnSetLobbyLock, &SetLobbyLock_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyLock_Parms.LobbyId, 0xC );

	return SetLobbyLock_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            ServerUID                      ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SetLobbyServer ( struct FString ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID )
{
	static UFunction* pFnSetLobbyServer = NULL;

	if ( ! pFnSetLobbyServer )
		pFnSetLobbyServer = (UFunction*) UObject::GObjObjects()->Data[ 40828 ];

	UOnlineLobbyInterfaceImpl_execSetLobbyServer_Parms SetLobbyServer_Parms;
	memcpy ( &SetLobbyServer_Parms.ServerIP, &ServerIP, 0xC );

	this->ProcessEvent ( pFnSetLobbyServer, &SetLobbyServer_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyServer_Parms.LobbyId, 0xC );

	if ( ServerUID )
		memcpy ( ServerUID, &SetLobbyServer_Parms.ServerUID, 0x48 );

	return SetLobbyServer_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::RemoveLobbySetting ( struct FString Key, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnRemoveLobbySetting = NULL;

	if ( ! pFnRemoveLobbySetting )
		pFnRemoveLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 40824 ];

	UOnlineLobbyInterfaceImpl_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;
	memcpy ( &RemoveLobbySetting_Parms.Key, &Key, 0xC );

	this->ProcessEvent ( pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &RemoveLobbySetting_Parms.LobbyId, 0xC );

	return RemoveLobbySetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SetLobbySetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbySetting = NULL;

	if ( ! pFnSetLobbySetting )
		pFnSetLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 40819 ];

	UOnlineLobbyInterfaceImpl_execSetLobbySetting_Parms SetLobbySetting_Parms;
	memcpy ( &SetLobbySetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbySetting_Parms.Value, &Value, 0xC );

	this->ProcessEvent ( pFnSetLobbySetting, &SetLobbySetting_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbySetting_Parms.LobbyId, 0xC );

	return SetLobbySetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FUniqueNetId            AdminId                        ( CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::GetLobbyAdmin ( struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId )
{
	static UFunction* pFnGetLobbyAdmin = NULL;

	if ( ! pFnGetLobbyAdmin )
		pFnGetLobbyAdmin = (UFunction*) UObject::GObjObjects()->Data[ 40815 ];

	UOnlineLobbyInterfaceImpl_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;

	this->ProcessEvent ( pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &GetLobbyAdmin_Parms.LobbyId, 0xC );

	if ( AdminId )
		memcpy ( AdminId, &GetLobbyAdmin_Parms.AdminId, 0x48 );

	return GetLobbyAdmin_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyJoinGameDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate )
{
	static UFunction* pFnClearLobbyJoinGameDelegate = NULL;

	if ( ! pFnClearLobbyJoinGameDelegate )
		pFnClearLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40812 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyJoinGameDelegate_Parms ClearLobbyJoinGameDelegate_Parms;
	memcpy ( &ClearLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, &LobbyJoinGameDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyJoinGameDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyJoinGameDelegate ( struct FScriptDelegate LobbyJoinGameDelegate )
{
	static UFunction* pFnAddLobbyJoinGameDelegate = NULL;

	if ( ! pFnAddLobbyJoinGameDelegate )
		pFnAddLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40810 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyJoinGameDelegate_Parms AddLobbyJoinGameDelegate_Parms;
	memcpy ( &AddLobbyJoinGameDelegate_Parms.LobbyJoinGameDelegate, &LobbyJoinGameDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            ServerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyJoinGameDelegates ( int LobbyIndex, struct FString ServerIP, struct FUniqueNetId* ServerID )
{
	static UFunction* pFnTriggerLobbyJoinGameDelegates = NULL;

	if ( ! pFnTriggerLobbyJoinGameDelegates )
		pFnTriggerLobbyJoinGameDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40803 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyJoinGameDelegates_Parms TriggerLobbyJoinGameDelegates_Parms;
	TriggerLobbyJoinGameDelegates_Parms.LobbyIndex = LobbyIndex;
	memcpy ( &TriggerLobbyJoinGameDelegates_Parms.ServerIP, &ServerIP, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Parms, NULL );

	if ( ServerID )
		memcpy ( ServerID, &TriggerLobbyJoinGameDelegates_Parms.ServerID, 0x48 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
// [0x00520000] 
// Parameters infos:
// struct FString                 ServerIP                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FUniqueNetId            ServerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::OnLobbyJoinGame ( struct FString ServerIP, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerID )
{
	static UFunction* pFnOnLobbyJoinGame = NULL;

	if ( ! pFnOnLobbyJoinGame )
		pFnOnLobbyJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 40613 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyJoinGame_Parms OnLobbyJoinGame_Parms;
	memcpy ( &OnLobbyJoinGame_Parms.ServerIP, &ServerIP, 0xC );

	this->ProcessEvent ( pFnOnLobbyJoinGame, &OnLobbyJoinGame_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbyJoinGame_Parms.LobbyInfo, 0x24 );

	if ( ServerID )
		memcpy ( ServerID, &OnLobbyJoinGame_Parms.ServerID, 0x48 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate )
{
	static UFunction* pFnClearLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnClearLobbyReceiveBinaryDataDelegate )
		pFnClearLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40797 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveBinaryDataDelegate_Parms ClearLobbyReceiveBinaryDataDelegate_Parms;
	memcpy ( &ClearLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, &LobbyReceiveBinaryDataDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveBinaryDataDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveBinaryDataDelegate ( struct FScriptDelegate LobbyReceiveBinaryDataDelegate )
{
	static UFunction* pFnAddLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnAddLobbyReceiveBinaryDataDelegate )
		pFnAddLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40795 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveBinaryDataDelegate_Parms AddLobbyReceiveBinaryDataDelegate_Parms;
	memcpy ( &AddLobbyReceiveBinaryDataDelegate_Parms.LobbyReceiveBinaryDataDelegate, &LobbyReceiveBinaryDataDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveBinaryDataDelegates ( int LobbyIndex, int MemberIndex )
{
	static UFunction* pFnTriggerLobbyReceiveBinaryDataDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveBinaryDataDelegates )
		pFnTriggerLobbyReceiveBinaryDataDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40789 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveBinaryDataDelegates_Parms TriggerLobbyReceiveBinaryDataDelegates_Parms;
	TriggerLobbyReceiveBinaryDataDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyReceiveBinaryDataDelegates_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
// [0x00520000] 
// Parameters infos:
// int                            MemberIndex                    ( CPF_Parm )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveBinaryData ( int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray< unsigned char >* Data )
{
	static UFunction* pFnOnLobbyReceiveBinaryData = NULL;

	if ( ! pFnOnLobbyReceiveBinaryData )
		pFnOnLobbyReceiveBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 40610 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveBinaryData_Parms OnLobbyReceiveBinaryData_Parms;
	OnLobbyReceiveBinaryData_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbyReceiveBinaryData_Parms.LobbyInfo, 0x24 );

	if ( Data )
		memcpy ( Data, &OnLobbyReceiveBinaryData_Parms.Data, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceImpl::SendLobbyBinaryData ( struct FUniqueLobbyId* LobbyId, TArray< unsigned char >* Data )
{
	static UFunction* pFnSendLobbyBinaryData = NULL;

	if ( ! pFnSendLobbyBinaryData )
		pFnSendLobbyBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 40780 ];

	UOnlineLobbyInterfaceImpl_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;

	this->ProcessEvent ( pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SendLobbyBinaryData_Parms.LobbyId, 0xC );

	if ( Data )
		memcpy ( Data, &SendLobbyBinaryData_Parms.Data, 0xC );

	return SendLobbyBinaryData_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate )
{
	static UFunction* pFnClearLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnClearLobbyReceiveMessageDelegate )
		pFnClearLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40777 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyReceiveMessageDelegate_Parms ClearLobbyReceiveMessageDelegate_Parms;
	memcpy ( &ClearLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, &LobbyReceiveMessageDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyReceiveMessageDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyReceiveMessageDelegate ( struct FScriptDelegate LobbyReceiveMessageDelegate )
{
	static UFunction* pFnAddLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnAddLobbyReceiveMessageDelegate )
		pFnAddLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40775 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyReceiveMessageDelegate_Parms AddLobbyReceiveMessageDelegate_Parms;
	memcpy ( &AddLobbyReceiveMessageDelegate_Parms.LobbyReceiveMessageDelegate, &LobbyReceiveMessageDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyReceiveMessageDelegates ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message )
{
	static UFunction* pFnTriggerLobbyReceiveMessageDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveMessageDelegates )
		pFnTriggerLobbyReceiveMessageDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40767 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyReceiveMessageDelegates_Parms TriggerLobbyReceiveMessageDelegates_Parms;
	TriggerLobbyReceiveMessageDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyReceiveMessageDelegates_Parms.MemberIndex = MemberIndex;
	memcpy ( &TriggerLobbyReceiveMessageDelegates_Parms.Type, &Type, 0xC );
	memcpy ( &TriggerLobbyReceiveMessageDelegates_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
// [0x00520000] 
// Parameters infos:
// int                            MemberIndex                    ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbyReceiveMessage ( int MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo* LobbyInfo )
{
	static UFunction* pFnOnLobbyReceiveMessage = NULL;

	if ( ! pFnOnLobbyReceiveMessage )
		pFnOnLobbyReceiveMessage = (UFunction*) UObject::GObjObjects()->Data[ 40607 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyReceiveMessage_Parms OnLobbyReceiveMessage_Parms;
	OnLobbyReceiveMessage_Parms.MemberIndex = MemberIndex;
	memcpy ( &OnLobbyReceiveMessage_Parms.Type, &Type, 0xC );
	memcpy ( &OnLobbyReceiveMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbyReceiveMessage_Parms.LobbyInfo, 0x24 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SendLobbyMessage ( struct FString Message, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSendLobbyMessage = NULL;

	if ( ! pFnSendLobbyMessage )
		pFnSendLobbyMessage = (UFunction*) UObject::GObjObjects()->Data[ 40759 ];

	UOnlineLobbyInterfaceImpl_execSendLobbyMessage_Parms SendLobbyMessage_Parms;
	memcpy ( &SendLobbyMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSendLobbyMessage, &SendLobbyMessage_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SendLobbyMessage_Parms.LobbyId, 0xC );

	return SendLobbyMessage_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate )
{
	static UFunction* pFnClearLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberStatusUpdateDelegate )
		pFnClearLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40756 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberStatusUpdateDelegate_Parms ClearLobbyMemberStatusUpdateDelegate_Parms;
	memcpy ( &ClearLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, &LobbyMemberStatusUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberStatusUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyMemberStatusUpdateDelegate ( struct FScriptDelegate LobbyMemberStatusUpdateDelegate )
{
	static UFunction* pFnAddLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberStatusUpdateDelegate )
		pFnAddLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40754 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberStatusUpdateDelegate_Parms AddLobbyMemberStatusUpdateDelegate_Parms;
	memcpy ( &AddLobbyMemberStatusUpdateDelegate_Parms.LobbyMemberStatusUpdateDelegate, &LobbyMemberStatusUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )
// int                            InstigatorIndex                ( CPF_Parm )
// struct FString                 Status                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberStatusUpdateDelegates ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status )
{
	static UFunction* pFnTriggerLobbyMemberStatusUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberStatusUpdateDelegates )
		pFnTriggerLobbyMemberStatusUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40746 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberStatusUpdateDelegates_Parms TriggerLobbyMemberStatusUpdateDelegates_Parms;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.MemberIndex = MemberIndex;
	TriggerLobbyMemberStatusUpdateDelegates_Parms.InstigatorIndex = InstigatorIndex;
	memcpy ( &TriggerLobbyMemberStatusUpdateDelegates_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
// [0x00520000] 
// Parameters infos:
// int                            MemberIndex                    ( CPF_Parm )
// int                            InstigatorIndex                ( CPF_Parm )
// struct FString                 Status                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbyMemberStatusUpdate ( int MemberIndex, int InstigatorIndex, struct FString Status, struct FActiveLobbyInfo* LobbyInfo )
{
	static UFunction* pFnOnLobbyMemberStatusUpdate = NULL;

	if ( ! pFnOnLobbyMemberStatusUpdate )
		pFnOnLobbyMemberStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 40604 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberStatusUpdate_Parms OnLobbyMemberStatusUpdate_Parms;
	OnLobbyMemberStatusUpdate_Parms.MemberIndex = MemberIndex;
	OnLobbyMemberStatusUpdate_Parms.InstigatorIndex = InstigatorIndex;
	memcpy ( &OnLobbyMemberStatusUpdate_Parms.Status, &Status, 0xC );

	this->ProcessEvent ( pFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbyMemberStatusUpdate_Parms.LobbyInfo, 0x24 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate )
{
	static UFunction* pFnClearLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberSettingsUpdateDelegate )
		pFnClearLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40739 ];

	UOnlineLobbyInterfaceImpl_execClearLobbyMemberSettingsUpdateDelegate_Parms ClearLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy ( &ClearLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, &LobbyMemberSettingsUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbyMemberSettingsUpdateDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbyMemberSettingsUpdateDelegate ( struct FScriptDelegate LobbyMemberSettingsUpdateDelegate )
{
	static UFunction* pFnAddLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberSettingsUpdateDelegate )
		pFnAddLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40737 ];

	UOnlineLobbyInterfaceImpl_execAddLobbyMemberSettingsUpdateDelegate_Parms AddLobbyMemberSettingsUpdateDelegate_Parms;
	memcpy ( &AddLobbyMemberSettingsUpdateDelegate_Parms.LobbyMemberSettingsUpdateDelegate, &LobbyMemberSettingsUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )
// int                            MemberIndex                    ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbyMemberSettingsUpdateDelegates ( int LobbyIndex, int MemberIndex )
{
	static UFunction* pFnTriggerLobbyMemberSettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberSettingsUpdateDelegates )
		pFnTriggerLobbyMemberSettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40731 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms TriggerLobbyMemberSettingsUpdateDelegates_Parms;
	TriggerLobbyMemberSettingsUpdateDelegates_Parms.LobbyIndex = LobbyIndex;
	TriggerLobbyMemberSettingsUpdateDelegates_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
// [0x00520000] 
// Parameters infos:
// int                            MemberIndex                    ( CPF_Parm )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbyMemberSettingsUpdate ( int MemberIndex, struct FActiveLobbyInfo* LobbyInfo )
{
	static UFunction* pFnOnLobbyMemberSettingsUpdate = NULL;

	if ( ! pFnOnLobbyMemberSettingsUpdate )
		pFnOnLobbyMemberSettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 40601 ];

	UOnlineLobbyInterfaceImpl_execOnLobbyMemberSettingsUpdate_Parms OnLobbyMemberSettingsUpdate_Parms;
	OnLobbyMemberSettingsUpdate_Parms.MemberIndex = MemberIndex;

	this->ProcessEvent ( pFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbyMemberSettingsUpdate_Parms.LobbyInfo, 0x24 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate )
{
	static UFunction* pFnClearLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbySettingsUpdateDelegate )
		pFnClearLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40726 ];

	UOnlineLobbyInterfaceImpl_execClearLobbySettingsUpdateDelegate_Parms ClearLobbySettingsUpdateDelegate_Parms;
	memcpy ( &ClearLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, &LobbySettingsUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LobbySettingsUpdateDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddLobbySettingsUpdateDelegate ( struct FScriptDelegate LobbySettingsUpdateDelegate )
{
	static UFunction* pFnAddLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbySettingsUpdateDelegate )
		pFnAddLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40724 ];

	UOnlineLobbyInterfaceImpl_execAddLobbySettingsUpdateDelegate_Parms AddLobbySettingsUpdateDelegate_Parms;
	memcpy ( &AddLobbySettingsUpdateDelegate_Parms.LobbySettingsUpdateDelegate, &LobbySettingsUpdateDelegate, 0x10 );

	this->ProcessEvent ( pFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            LobbyIndex                     ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::eventTriggerLobbySettingsUpdateDelegates ( int LobbyIndex )
{
	static UFunction* pFnTriggerLobbySettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbySettingsUpdateDelegates )
		pFnTriggerLobbySettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40719 ];

	UOnlineLobbyInterfaceImpl_eventTriggerLobbySettingsUpdateDelegates_Parms TriggerLobbySettingsUpdateDelegates_Parms;
	TriggerLobbySettingsUpdateDelegates_Parms.LobbyIndex = LobbyIndex;

	this->ProcessEvent ( pFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
// [0x00520000] 
// Parameters infos:
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnLobbySettingsUpdate ( struct FActiveLobbyInfo* LobbyInfo )
{
	static UFunction* pFnOnLobbySettingsUpdate = NULL;

	if ( ! pFnOnLobbySettingsUpdate )
		pFnOnLobbySettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 40598 ];

	UOnlineLobbyInterfaceImpl_execOnLobbySettingsUpdate_Parms OnLobbySettingsUpdate_Parms;

	this->ProcessEvent ( pFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnLobbySettingsUpdate_Parms.LobbyInfo, 0x24 );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Key                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::SetLobbyUserSetting ( struct FString Key, struct FString Value, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnSetLobbyUserSetting = NULL;

	if ( ! pFnSetLobbyUserSetting )
		pFnSetLobbyUserSetting = (UFunction*) UObject::GObjObjects()->Data[ 40713 ];

	UOnlineLobbyInterfaceImpl_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;
	memcpy ( &SetLobbyUserSetting_Parms.Key, &Key, 0xC );
	memcpy ( &SetLobbyUserSetting_Parms.Value, &Value, 0xC );

	this->ProcessEvent ( pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &SetLobbyUserSetting_Parms.LobbyId, 0xC );

	return SetLobbyUserSetting_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::LeaveLobby ( struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnLeaveLobby = NULL;

	if ( ! pFnLeaveLobby )
		pFnLeaveLobby = (UFunction*) UObject::GObjObjects()->Data[ 40710 ];

	UOnlineLobbyInterfaceImpl_execLeaveLobby_Parms LeaveLobby_Parms;

	this->ProcessEvent ( pFnLeaveLobby, &LeaveLobby_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &LeaveLobby_Parms.LobbyId, 0xC );

	return LeaveLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate )
{
	static UFunction* pFnClearJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnClearJoinLobbyCompleteDelegate )
		pFnClearJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40707 ];

	UOnlineLobbyInterfaceImpl_execClearJoinLobbyCompleteDelegate_Parms ClearJoinLobbyCompleteDelegate_Parms;
	memcpy ( &ClearJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, &JoinLobbyCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinLobbyCompleteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddJoinLobbyCompleteDelegate ( struct FScriptDelegate JoinLobbyCompleteDelegate )
{
	static UFunction* pFnAddJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnAddJoinLobbyCompleteDelegate )
		pFnAddJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40705 ];

	UOnlineLobbyInterfaceImpl_execAddJoinLobbyCompleteDelegate_Parms AddJoinLobbyCompleteDelegate_Parms;
	memcpy ( &AddJoinLobbyCompleteDelegate_Parms.JoinLobbyCompleteDelegate, &JoinLobbyCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyUID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::eventTriggerJoinLobbyCompleteDelegates ( unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID )
{
	static UFunction* pFnTriggerJoinLobbyCompleteDelegates = NULL;

	if ( ! pFnTriggerJoinLobbyCompleteDelegates )
		pFnTriggerJoinLobbyCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40697 ];

	UOnlineLobbyInterfaceImpl_eventTriggerJoinLobbyCompleteDelegates_Parms TriggerJoinLobbyCompleteDelegates_Parms;
	TriggerJoinLobbyCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &TriggerJoinLobbyCompleteDelegates_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &TriggerJoinLobbyCompleteDelegates_Parms.LobbyInfo, 0x24 );

	if ( LobbyUID )
		memcpy ( LobbyUID, &TriggerJoinLobbyCompleteDelegates_Parms.LobbyUID, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FActiveLobbyInfo        LobbyInfo                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyUID                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::OnJoinLobbyComplete ( unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID )
{
	static UFunction* pFnOnJoinLobbyComplete = NULL;

	if ( ! pFnOnJoinLobbyComplete )
		pFnOnJoinLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 40595 ];

	UOnlineLobbyInterfaceImpl_execOnJoinLobbyComplete_Parms OnJoinLobbyComplete_Parms;
	OnJoinLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnJoinLobbyComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Parms, NULL );

	if ( LobbyInfo )
		memcpy ( LobbyInfo, &OnJoinLobbyComplete_Parms.LobbyInfo, 0x24 );

	if ( LobbyUID )
		memcpy ( LobbyUID, &OnJoinLobbyComplete_Parms.LobbyUID, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            LocalPlayerNum                 ( CPF_Parm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineLobbyInterfaceImpl::JoinLobby ( int LocalPlayerNum, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnJoinLobby = NULL;

	if ( ! pFnJoinLobby )
		pFnJoinLobby = (UFunction*) UObject::GObjObjects()->Data[ 40689 ];

	UOnlineLobbyInterfaceImpl_execJoinLobby_Parms JoinLobby_Parms;
	JoinLobby_Parms.LocalPlayerNum = LocalPlayerNum;

	this->ProcessEvent ( pFnJoinLobby, &JoinLobby_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &JoinLobby_Parms.LobbyId, 0xC );

	return JoinLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate )
{
	static UFunction* pFnClearFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnClearFindLobbiesCompleteDelegate )
		pFnClearFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40686 ];

	UOnlineLobbyInterfaceImpl_execClearFindLobbiesCompleteDelegate_Parms ClearFindLobbiesCompleteDelegate_Parms;
	memcpy ( &ClearFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, &FindLobbiesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindLobbiesCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddFindLobbiesCompleteDelegate ( struct FScriptDelegate FindLobbiesCompleteDelegate )
{
	static UFunction* pFnAddFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnAddFindLobbiesCompleteDelegate )
		pFnAddFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40684 ];

	UOnlineLobbyInterfaceImpl_execAddFindLobbiesCompleteDelegate_Parms AddFindLobbiesCompleteDelegate_Parms;
	memcpy ( &AddFindLobbiesCompleteDelegate_Parms.FindLobbiesCompleteDelegate, &FindLobbiesCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineLobbyInterfaceImpl::eventTriggerFindLobbiesCompleteDelegates ( unsigned long bWasSuccessful )
{
	static UFunction* pFnTriggerFindLobbiesCompleteDelegates = NULL;

	if ( ! pFnTriggerFindLobbiesCompleteDelegates )
		pFnTriggerFindLobbiesCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 40679 ];

	UOnlineLobbyInterfaceImpl_eventTriggerFindLobbiesCompleteDelegates_Parms TriggerFindLobbiesCompleteDelegates_Parms;
	TriggerFindLobbiesCompleteDelegates_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< struct FBasicLobbyInfo > LobbyList                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::OnFindLobbiesComplete ( unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList )
{
	static UFunction* pFnOnFindLobbiesComplete = NULL;

	if ( ! pFnOnFindLobbiesComplete )
		pFnOnFindLobbiesComplete = (UFunction*) UObject::GObjObjects()->Data[ 40592 ];

	UOnlineLobbyInterfaceImpl_execOnFindLobbiesComplete_Parms OnFindLobbiesComplete_Parms;
	OnFindLobbiesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Parms, NULL );

	if ( LobbyList )
		memcpy ( LobbyList, &OnFindLobbiesComplete_Parms.LobbyList, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueLobbyId          LobbyId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceImpl::UpdateFoundLobbies ( struct FUniqueLobbyId LobbyId )
{
	static UFunction* pFnUpdateFoundLobbies = NULL;

	if ( ! pFnUpdateFoundLobbies )
		pFnUpdateFoundLobbies = (UFunction*) UObject::GObjObjects()->Data[ 40673 ];

	UOnlineLobbyInterfaceImpl_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;
	memcpy ( &UpdateFoundLobbies_Parms.LobbyId, &LobbyId, 0xC );

	this->ProcessEvent ( pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, NULL );

	return UpdateFoundLobbies_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyFilter >  Filters                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FLobbySortFilter > SortFilters                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MinSlots                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  Distance                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineLobbyInterfaceImpl::FindLobbies ( int MaxResults, TArray< struct FLobbyFilter > Filters, TArray< struct FLobbySortFilter > SortFilters, int MinSlots, unsigned char Distance )
{
	static UFunction* pFnFindLobbies = NULL;

	if ( ! pFnFindLobbies )
		pFnFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 40664 ];

	UOnlineLobbyInterfaceImpl_execFindLobbies_Parms FindLobbies_Parms;
	FindLobbies_Parms.MaxResults = MaxResults;
	memcpy ( &FindLobbies_Parms.Filters, &Filters, 0xC );
	memcpy ( &FindLobbies_Parms.SortFilters, &SortFilters, 0xC );
	FindLobbies_Parms.MinSlots = MinSlots;
	FindLobbies_Parms.Distance = Distance;

	this->ProcessEvent ( pFnFindLobbies, &FindLobbies_Parms, NULL );

	return FindLobbies_Parms.ReturnValue;
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::ClearCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate )
{
	static UFunction* pFnClearCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnClearCreateLobbyCompleteDelegate )
		pFnClearCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40661 ];

	UOnlineLobbyInterfaceImpl_execClearCreateLobbyCompleteDelegate_Parms ClearCreateLobbyCompleteDelegate_Parms;
	memcpy ( &ClearCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, &CreateLobbyCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateLobbyCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineLobbyInterfaceImpl::AddCreateLobbyCompleteDelegate ( struct FScriptDelegate CreateLobbyCompleteDelegate )
{
	static UFunction* pFnAddCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnAddCreateLobbyCompleteDelegate )
		pFnAddCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40659 ];

	UOnlineLobbyInterfaceImpl_execAddCreateLobbyCompleteDelegate_Parms AddCreateLobbyCompleteDelegate_Parms;
	memcpy ( &AddCreateLobbyCompleteDelegate_Parms.CreateLobbyCompleteDelegate, &CreateLobbyCompleteDelegate, 0x10 );

	this->ProcessEvent ( pFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
// [0x00520000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueLobbyId          LobbyId                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineLobbyInterfaceImpl::OnCreateLobbyComplete ( unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId* LobbyId )
{
	static UFunction* pFnOnCreateLobbyComplete = NULL;

	if ( ! pFnOnCreateLobbyComplete )
		pFnOnCreateLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 40589 ];

	UOnlineLobbyInterfaceImpl_execOnCreateLobbyComplete_Parms OnCreateLobbyComplete_Parms;
	OnCreateLobbyComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateLobbyComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Parms, NULL );

	if ( LobbyId )
		memcpy ( LobbyId, &OnCreateLobbyComplete_Parms.LobbyId, 0xC );
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            LocalPlayerNum                 ( CPF_Parm )
// int                            MaxPlayers                     ( CPF_Parm )
// unsigned char                  Type                           ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FLobbyMetaData > InitialSettings                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineLobbyInterfaceImpl::CreateLobby ( int LocalPlayerNum, int MaxPlayers, unsigned char Type, TArray< struct FLobbyMetaData > InitialSettings )
{
	static UFunction* pFnCreateLobby = NULL;

	if ( ! pFnCreateLobby )
		pFnCreateLobby = (UFunction*) UObject::GObjObjects()->Data[ 40649 ];

	UOnlineLobbyInterfaceImpl_execCreateLobby_Parms CreateLobby_Parms;
	CreateLobby_Parms.LocalPlayerNum = LocalPlayerNum;
	CreateLobby_Parms.MaxPlayers = MaxPlayers;
	CreateLobby_Parms.Type = Type;
	memcpy ( &CreateLobby_Parms.InitialSettings, &InitialSettings, 0xC );

	this->ProcessEvent ( pFnCreateLobby, &CreateLobby_Parms, NULL );

	return CreateLobby_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::ParseDataCenterId ( TArray< unsigned char >* Data )
{
	static UFunction* pFnParseDataCenterId = NULL;

	if ( ! pFnParseDataCenterId )
		pFnParseDataCenterId = (UFunction*) UObject::GObjObjects()->Data[ 41103 ];

	UOnlinePlaylistManager_execParseDataCenterId_Parms ParseDataCenterId_Parms;

	pFnParseDataCenterId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParseDataCenterId, &ParseDataCenterId_Parms, NULL );

	pFnParseDataCenterId->FunctionFlags |= 0x400;

	if ( Data )
		memcpy ( Data, &ParseDataCenterId_Parms.Data, 0xC );
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadDataCenterIdComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadDataCenterIdComplete = NULL;

	if ( ! pFnOnReadDataCenterIdComplete )
		pFnOnReadDataCenterIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 41098 ];

	UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms OnReadDataCenterIdComplete_Parms;
	OnReadDataCenterIdComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadDataCenterIdComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadDataCenterIdComplete, &OnReadDataCenterIdComplete_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002] 
// Parameters infos:

void UOnlinePlaylistManager::ReadDataCenterId ( )
{
	static UFunction* pFnReadDataCenterId = NULL;

	if ( ! pFnReadDataCenterId )
		pFnReadDataCenterId = (UFunction*) UObject::GObjObjects()->Data[ 41096 ];

	UOnlinePlaylistManager_execReadDataCenterId_Parms ReadDataCenterId_Parms;

	this->ProcessEvent ( pFnReadDataCenterId, &ReadDataCenterId_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            NumPlayers                     ( CPF_Parm )

void UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate ( int NumPlayers )
{
	static UFunction* pFnSendPlaylistPopulationUpdate = NULL;

	if ( ! pFnSendPlaylistPopulationUpdate )
		pFnSendPlaylistPopulationUpdate = (UFunction*) UObject::GObjObjects()->Data[ 41092 ];

	UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms SendPlaylistPopulationUpdate_Parms;
	SendPlaylistPopulationUpdate_Parms.NumPlayers = NumPlayers;

	this->ProcessEvent ( pFnSendPlaylistPopulationUpdate, &SendPlaylistPopulationUpdate_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002] 
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            WorldwideTotal                 ( CPF_Parm | CPF_OutParm )
// int                            RegionTotal                    ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist ( int PlaylistId, int* WorldwideTotal, int* RegionTotal )
{
	static UFunction* pFnGetPopulationInfoFromPlaylist = NULL;

	if ( ! pFnGetPopulationInfoFromPlaylist )
		pFnGetPopulationInfoFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41087 ];

	UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms GetPopulationInfoFromPlaylist_Parms;
	GetPopulationInfoFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetPopulationInfoFromPlaylist, &GetPopulationInfoFromPlaylist_Parms, NULL );

	if ( WorldwideTotal )
		*WorldwideTotal = GetPopulationInfoFromPlaylist_Parms.WorldwideTotal;

	if ( RegionTotal )
		*RegionTotal = GetPopulationInfoFromPlaylist_Parms.RegionTotal;
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::ParsePlaylistPopulationData ( TArray< unsigned char >* Data )
{
	static UFunction* pFnParsePlaylistPopulationData = NULL;

	if ( ! pFnParsePlaylistPopulationData )
		pFnParsePlaylistPopulationData = (UFunction*) UObject::GObjObjects()->Data[ 41084 ];

	UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms ParsePlaylistPopulationData_Parms;

	pFnParsePlaylistPopulationData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParsePlaylistPopulationData, &ParsePlaylistPopulationData_Parms, NULL );

	pFnParsePlaylistPopulationData->FunctionFlags |= 0x400;

	if ( Data )
		memcpy ( Data, &ParsePlaylistPopulationData_Parms.Data, 0xC );
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000] 
// Parameters infos:

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated ( )
{
	static UFunction* pFnOnPlaylistPopulationDataUpdated = NULL;

	if ( ! pFnOnPlaylistPopulationDataUpdated )
		pFnOnPlaylistPopulationDataUpdated = (UFunction*) UObject::GObjObjects()->Data[ 40956 ];

	UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms OnPlaylistPopulationDataUpdated_Parms;

	this->ProcessEvent ( pFnOnPlaylistPopulationDataUpdated, &OnPlaylistPopulationDataUpdated_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadPlaylistPopulationComplete = NULL;

	if ( ! pFnOnReadPlaylistPopulationComplete )
		pFnOnReadPlaylistPopulationComplete = (UFunction*) UObject::GObjObjects()->Data[ 41079 ];

	UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms OnReadPlaylistPopulationComplete_Parms;
	OnReadPlaylistPopulationComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadPlaylistPopulationComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadPlaylistPopulationComplete, &OnReadPlaylistPopulationComplete_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002] 
// Parameters infos:

void UOnlinePlaylistManager::ReadPlaylistPopulation ( )
{
	static UFunction* pFnReadPlaylistPopulation = NULL;

	if ( ! pFnReadPlaylistPopulation )
		pFnReadPlaylistPopulation = (UFunction*) UObject::GObjObjects()->Data[ 41077 ];

	UOnlinePlaylistManager_execReadPlaylistPopulation_Parms ReadPlaylistPopulation_Parms;

	this->ProcessEvent ( pFnReadPlaylistPopulation, &ReadPlaylistPopulation_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002] 
// Parameters infos:

void UOnlinePlaylistManager::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 41075 ];

	UOnlinePlaylistManager_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002] 
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// TArray< int >                  ContentIds                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::GetContentIdsFromPlaylist ( int PlaylistId, TArray< int >* ContentIds )
{
	static UFunction* pFnGetContentIdsFromPlaylist = NULL;

	if ( ! pFnGetContentIdsFromPlaylist )
		pFnGetContentIdsFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41070 ];

	UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms GetContentIdsFromPlaylist_Parms;
	GetContentIdsFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetContentIdsFromPlaylist, &GetContentIdsFromPlaylist_Parms, NULL );

	if ( ContentIds )
		memcpy ( ContentIds, &GetContentIdsFromPlaylist_Parms.ContentIds, 0xC );
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// class UClass*                  SourceInventory                ( CPF_Parm )

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist ( int PlaylistId, class UClass* SourceInventory )
{
	static UFunction* pFnGetInventorySwapFromPlaylist = NULL;

	if ( ! pFnGetInventorySwapFromPlaylist )
		pFnGetInventorySwapFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41064 ];

	UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Parms GetInventorySwapFromPlaylist_Parms;
	GetInventorySwapFromPlaylist_Parms.PlaylistId = PlaylistId;
	GetInventorySwapFromPlaylist_Parms.SourceInventory = SourceInventory;

	this->ProcessEvent ( pFnGetInventorySwapFromPlaylist, &GetInventorySwapFromPlaylist_Parms, NULL );

	return GetInventorySwapFromPlaylist_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002] 
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// TArray< struct FName >         MapCycle                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::GetMapCycleFromPlaylist ( int PlaylistId, TArray< struct FName >* MapCycle )
{
	static UFunction* pFnGetMapCycleFromPlaylist = NULL;

	if ( ! pFnGetMapCycleFromPlaylist )
		pFnGetMapCycleFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41059 ];

	UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms GetMapCycleFromPlaylist_Parms;
	GetMapCycleFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetMapCycleFromPlaylist, &GetMapCycleFromPlaylist_Parms, NULL );

	if ( MapCycle )
		memcpy ( MapCycle, &GetMapCycleFromPlaylist_Parms.MapCycle, 0xC );
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            PlaylistId                     ( CPF_Parm )

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist ( int PlaylistId )
{
	static UFunction* pFnGetUrlFromPlaylist = NULL;

	if ( ! pFnGetUrlFromPlaylist )
		pFnGetUrlFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41055 ];

	UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms GetUrlFromPlaylist_Parms;
	GetUrlFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetUrlFromPlaylist, &GetUrlFromPlaylist_Parms, NULL );

	return GetUrlFromPlaylist_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

int UOnlinePlaylistManager::GetMatchType ( int PlaylistId )
{
	static UFunction* pFnGetMatchType = NULL;

	if ( ! pFnGetMatchType )
		pFnGetMatchType = (UFunction*) UObject::GObjObjects()->Data[ 41051 ];

	UOnlinePlaylistManager_execGetMatchType_Parms GetMatchType_Parms;
	GetMatchType_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetMatchType, &GetMatchType_Parms, NULL );

	return GetMatchType_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::IsPlaylistArbitrated ( int PlaylistId )
{
	static UFunction* pFnIsPlaylistArbitrated = NULL;

	if ( ! pFnIsPlaylistArbitrated )
		pFnIsPlaylistArbitrated = (UFunction*) UObject::GObjObjects()->Data[ 41047 ];

	UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms IsPlaylistArbitrated_Parms;
	IsPlaylistArbitrated_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnIsPlaylistArbitrated, &IsPlaylistArbitrated_Parms, NULL );

	return IsPlaylistArbitrated_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002] 
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            LoadBalanceId                  ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist ( int PlaylistId, int* LoadBalanceId )
{
	static UFunction* pFnGetLoadBalanceIdFromPlaylist = NULL;

	if ( ! pFnGetLoadBalanceIdFromPlaylist )
		pFnGetLoadBalanceIdFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41043 ];

	UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms GetLoadBalanceIdFromPlaylist_Parms;
	GetLoadBalanceIdFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetLoadBalanceIdFromPlaylist, &GetLoadBalanceIdFromPlaylist_Parms, NULL );

	if ( LoadBalanceId )
		*LoadBalanceId = GetLoadBalanceIdFromPlaylist_Parms.LoadBalanceId;
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002] 
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            TeamSize                       ( CPF_Parm | CPF_OutParm )
// int                            TeamCount                      ( CPF_Parm | CPF_OutParm )
// int                            MaxPartySize                   ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist ( int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize )
{
	static UFunction* pFnGetTeamInfoFromPlaylist = NULL;

	if ( ! pFnGetTeamInfoFromPlaylist )
		pFnGetTeamInfoFromPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41037 ];

	UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms GetTeamInfoFromPlaylist_Parms;
	GetTeamInfoFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetTeamInfoFromPlaylist, &GetTeamInfoFromPlaylist_Parms, NULL );

	if ( TeamSize )
		*TeamSize = GetTeamInfoFromPlaylist_Parms.TeamSize;

	if ( TeamCount )
		*TeamCount = GetTeamInfoFromPlaylist_Parms.TeamCount;

	if ( MaxPartySize )
		*MaxPartySize = GetTeamInfoFromPlaylist_Parms.MaxPartySize;
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers ( int PlaylistId )
{
	static UFunction* pFnPlaylistSupportsDedicatedServers = NULL;

	if ( ! pFnPlaylistSupportsDedicatedServers )
		pFnPlaylistSupportsDedicatedServers = (UFunction*) UObject::GObjObjects()->Data[ 41033 ];

	UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms PlaylistSupportsDedicatedServers_Parms;
	PlaylistSupportsDedicatedServers_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnPlaylistSupportsDedicatedServers, &PlaylistSupportsDedicatedServers_Parms, NULL );

	return PlaylistSupportsDedicatedServers_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::HasAnyGameSettings ( int PlaylistId )
{
	static UFunction* pFnHasAnyGameSettings = NULL;

	if ( ! pFnHasAnyGameSettings )
		pFnHasAnyGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 41028 ];

	UOnlinePlaylistManager_execHasAnyGameSettings_Parms HasAnyGameSettings_Parms;
	HasAnyGameSettings_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnHasAnyGameSettings, &HasAnyGameSettings_Parms, NULL );

	return HasAnyGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            GameSettingsId                 ( CPF_Parm )

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings ( int PlaylistId, int GameSettingsId )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 41022 ];

	UOnlinePlaylistManager_execGetGameSettings_Parms GetGameSettings_Parms;
	GetGameSettings_Parms.PlaylistId = PlaylistId;
	GetGameSettings_Parms.GameSettingsId = GameSettingsId;

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlinePlaylistManager::FinalizePlaylistObjects ( )
{
	static UFunction* pFnFinalizePlaylistObjects = NULL;

	if ( ! pFnFinalizePlaylistObjects )
		pFnFinalizePlaylistObjects = (UFunction*) UObject::GObjObjects()->Data[ 41021 ];

	UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms FinalizePlaylistObjects_Parms;

	pFnFinalizePlaylistObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFinalizePlaylistObjects, &FinalizePlaylistObjects_Parms, NULL );

	pFnFinalizePlaylistObjects->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 41016 ];

	UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlinePlaylistManager::ShouldRefreshPlaylists ( )
{
	static UFunction* pFnShouldRefreshPlaylists = NULL;

	if ( ! pFnShouldRefreshPlaylists )
		pFnShouldRefreshPlaylists = (UFunction*) UObject::GObjObjects()->Data[ 41014 ];

	UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms ShouldRefreshPlaylists_Parms;

	pFnShouldRefreshPlaylists->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldRefreshPlaylists, &ShouldRefreshPlaylists_Parms, NULL );

	pFnShouldRefreshPlaylists->FunctionFlags |= 0x400;

	return ShouldRefreshPlaylists_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlinePlaylistManager::DetermineFilesToDownload ( )
{
	static UFunction* pFnDetermineFilesToDownload = NULL;

	if ( ! pFnDetermineFilesToDownload )
		pFnDetermineFilesToDownload = (UFunction*) UObject::GObjObjects()->Data[ 41013 ];

	UOnlinePlaylistManager_execDetermineFilesToDownload_Parms DetermineFilesToDownload_Parms;

	pFnDetermineFilesToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDetermineFilesToDownload, &DetermineFilesToDownload_Parms, NULL );

	pFnDetermineFilesToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002] 
// Parameters infos:

void UOnlinePlaylistManager::DownloadPlaylist ( )
{
	static UFunction* pFnDownloadPlaylist = NULL;

	if ( ! pFnDownloadPlaylist )
		pFnDownloadPlaylist = (UFunction*) UObject::GObjObjects()->Data[ 41010 ];

	UOnlinePlaylistManager_execDownloadPlaylist_Parms DownloadPlaylist_Parms;

	this->ProcessEvent ( pFnDownloadPlaylist, &DownloadPlaylist_Parms, NULL );
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlinePlaylistManager::OnReadPlaylistComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlaylistComplete = NULL;

	if ( ! pFnOnReadPlaylistComplete )
		pFnOnReadPlaylistComplete = (UFunction*) UObject::GObjObjects()->Data[ 40958 ];

	UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms OnReadPlaylistComplete_Parms;
	OnReadPlaylistComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlaylistComplete, &OnReadPlaylistComplete_Parms, NULL );
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ResponseMicroTxnDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePurchaseInterfaceImpl::ClearMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate )
{
	static UFunction* pFnClearMicroTxnResponseDelegate = NULL;

	if ( ! pFnClearMicroTxnResponseDelegate )
		pFnClearMicroTxnResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41133 ];

	UOnlinePurchaseInterfaceImpl_execClearMicroTxnResponseDelegate_Parms ClearMicroTxnResponseDelegate_Parms;
	memcpy ( &ClearMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, &ResponseMicroTxnDelegate, 0x10 );

	this->ProcessEvent ( pFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ResponseMicroTxnDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePurchaseInterfaceImpl::AddMicroTxnResponseDelegate ( struct FScriptDelegate ResponseMicroTxnDelegate )
{
	static UFunction* pFnAddMicroTxnResponseDelegate = NULL;

	if ( ! pFnAddMicroTxnResponseDelegate )
		pFnAddMicroTxnResponseDelegate = (UFunction*) UObject::GObjObjects()->Data[ 41131 ];

	UOnlinePurchaseInterfaceImpl_execAddMicroTxnResponseDelegate_Parms AddMicroTxnResponseDelegate_Parms;
	memcpy ( &AddMicroTxnResponseDelegate_Parms.ResponseMicroTxnDelegate, &ResponseMicroTxnDelegate, 0x10 );

	this->ProcessEvent ( pFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Parms, NULL );
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
// [0x00120000] 
// Parameters infos:
// unsigned long                  bAuthorized                    ( CPF_Parm )

void UOnlinePurchaseInterfaceImpl::OnMicroTxnResponse ( unsigned long bAuthorized )
{
	static UFunction* pFnOnMicroTxnResponse = NULL;

	if ( ! pFnOnMicroTxnResponse )
		pFnOnMicroTxnResponse = (UFunction*) UObject::GObjObjects()->Data[ 41117 ];

	UOnlinePurchaseInterfaceImpl_execOnMicroTxnResponse_Parms OnMicroTxnResponse_Parms;
	OnMicroTxnResponse_Parms.bAuthorized = bAuthorized;

	this->ProcessEvent ( pFnOnMicroTxnResponse, &OnMicroTxnResponse_Parms, NULL );
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Currency                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            Price                          ( CPF_Parm )

struct FString UOnlinePurchaseInterfaceImpl::FormatCurrency ( struct FString Currency, int Price )
{
	static UFunction* pFnFormatCurrency = NULL;

	if ( ! pFnFormatCurrency )
		pFnFormatCurrency = (UFunction*) UObject::GObjObjects()->Data[ 41125 ];

	UOnlinePurchaseInterfaceImpl_execFormatCurrency_Parms FormatCurrency_Parms;
	memcpy ( &FormatCurrency_Parms.Currency, &Currency, 0xC );
	FormatCurrency_Parms.Price = Price;

	this->ProcessEvent ( pFnFormatCurrency, &FormatCurrency_Parms, NULL );

	return FormatCurrency_Parms.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerID                       ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FName >         AppNames                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlinePurchaseInterfaceImpl::GetAppPriceInfo ( struct FScriptDelegate Callback, struct FUniqueNetId* PlayerID, TArray< struct FName >* AppNames )
{
	static UFunction* pFnGetAppPriceInfo = NULL;

	if ( ! pFnGetAppPriceInfo )
		pFnGetAppPriceInfo = (UFunction*) UObject::GObjObjects()->Data[ 41119 ];

	UOnlinePurchaseInterfaceImpl_execGetAppPriceInfo_Parms GetAppPriceInfo_Parms;
	memcpy ( &GetAppPriceInfo_Parms.Callback, &Callback, 0x10 );

	this->ProcessEvent ( pFnGetAppPriceInfo, &GetAppPriceInfo_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetAppPriceInfo_Parms.PlayerID, 0x48 );

	if ( AppNames )
		memcpy ( AppNames, &GetAppPriceInfo_Parms.AppNames, 0xC );

	return GetAppPriceInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   AppName                        ( CPF_Parm )
// struct FString                 Price                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DiscountPrice                  ( CPF_Parm | CPF_NeedCtorLink )
// int                            DiscountPercentage             ( CPF_Parm )

void UOnlinePurchaseInterfaceImpl::EventGetAppPriceInfoComplete ( struct FName AppName, struct FString Price, struct FString DiscountPrice, int DiscountPercentage )
{
	static UFunction* pFnEventGetAppPriceInfoComplete = NULL;

	if ( ! pFnEventGetAppPriceInfoComplete )
		pFnEventGetAppPriceInfoComplete = (UFunction*) UObject::GObjObjects()->Data[ 41111 ];

	UOnlinePurchaseInterfaceImpl_execEventGetAppPriceInfoComplete_Parms EventGetAppPriceInfoComplete_Parms;
	memcpy ( &EventGetAppPriceInfoComplete_Parms.AppName, &AppName, 0x8 );
	memcpy ( &EventGetAppPriceInfoComplete_Parms.Price, &Price, 0xC );
	memcpy ( &EventGetAppPriceInfoComplete_Parms.DiscountPrice, &DiscountPrice, 0xC );
	EventGetAppPriceInfoComplete_Parms.DiscountPercentage = DiscountPercentage;

	this->ProcessEvent ( pFnEventGetAppPriceInfoComplete, &EventGetAppPriceInfoComplete_Parms, NULL );
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
// Parameters infos:

void UPartyBeacon::OnDestroyComplete ( )
{
	static UFunction* pFnOnDestroyComplete = NULL;

	if ( ! pFnOnDestroyComplete )
		pFnOnDestroyComplete = (UFunction*) UObject::GObjObjects()->Data[ 41190 ];

	UPartyBeacon_execOnDestroyComplete_Parms OnDestroyComplete_Parms;

	this->ProcessEvent ( pFnOnDestroyComplete, &OnDestroyComplete_Parms, NULL );
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeacon::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 41214 ];

	UPartyBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconClient::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 41256 ];

	UPartyBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            CancellingPartyLeader          ( CPF_Parm )

bool UPartyBeaconClient::CancelReservation ( struct FUniqueNetId CancellingPartyLeader )
{
	static UFunction* pFnCancelReservation = NULL;

	if ( ! pFnCancelReservation )
		pFnCancelReservation = (UFunction*) UObject::GObjObjects()->Data[ 41253 ];

	UPartyBeaconClient_execCancelReservation_Parms CancelReservation_Parms;
	memcpy ( &CancelReservation_Parms.CancellingPartyLeader, &CancellingPartyLeader, 0x48 );

	pFnCancelReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelReservation, &CancelReservation_Parms, NULL );

	pFnCancelReservation->FunctionFlags |= 0x400;

	return CancelReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > PlayersToAdd                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservationUpdate ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd )
{
	static UFunction* pFnRequestReservationUpdate = NULL;

	if ( ! pFnRequestReservationUpdate )
		pFnRequestReservationUpdate = (UFunction*) UObject::GObjObjects()->Data[ 41247 ];

	UPartyBeaconClient_execRequestReservationUpdate_Parms RequestReservationUpdate_Parms;
	memcpy ( &RequestReservationUpdate_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x48 );

	pFnRequestReservationUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestReservationUpdate, &RequestReservationUpdate_Parms, NULL );

	pFnRequestReservationUpdate->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservationUpdate_Parms.DesiredHost, 0x8 );

	if ( PlayersToAdd )
		memcpy ( PlayersToAdd, &RequestReservationUpdate_Parms.PlayersToAdd, 0xC );

	return RequestReservationUpdate_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservation ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players )
{
	static UFunction* pFnRequestReservation = NULL;

	if ( ! pFnRequestReservation )
		pFnRequestReservation = (UFunction*) UObject::GObjObjects()->Data[ 41241 ];

	UPartyBeaconClient_execRequestReservation_Parms RequestReservation_Parms;
	memcpy ( &RequestReservation_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x48 );

	pFnRequestReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRequestReservation, &RequestReservation_Parms, NULL );

	pFnRequestReservation->FunctionFlags |= 0x400;

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservation_Parms.DesiredHost, 0x8 );

	if ( Players )
		memcpy ( Players, &RequestReservation_Parms.Players, 0xC );

	return RequestReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
// Parameters infos:

void UPartyBeaconClient::OnHostHasCancelled ( )
{
	static UFunction* pFnOnHostHasCancelled = NULL;

	if ( ! pFnOnHostHasCancelled )
		pFnOnHostHasCancelled = (UFunction*) UObject::GObjObjects()->Data[ 41216 ];

	UPartyBeaconClient_execOnHostHasCancelled_Parms OnHostHasCancelled_Parms;

	this->ProcessEvent ( pFnOnHostHasCancelled, &OnHostHasCancelled_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
// Parameters infos:

void UPartyBeaconClient::OnHostIsReady ( )
{
	static UFunction* pFnOnHostIsReady = NULL;

	if ( ! pFnOnHostIsReady )
		pFnOnHostIsReady = (UFunction*) UObject::GObjObjects()->Data[ 41218 ];

	UPartyBeaconClient_execOnHostIsReady_Parms OnHostIsReady_Parms;

	this->ProcessEvent ( pFnOnHostIsReady, &OnHostIsReady_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconClient::OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 41220 ];

	UPartyBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;
	memcpy ( &OnTravelRequestReceived_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
// Parameters infos:
// int                            ReservationRemaining           ( CPF_Parm )

void UPartyBeaconClient::OnReservationCountUpdated ( int ReservationRemaining )
{
	static UFunction* pFnOnReservationCountUpdated = NULL;

	if ( ! pFnOnReservationCountUpdated )
		pFnOnReservationCountUpdated = (UFunction*) UObject::GObjObjects()->Data[ 41222 ];

	UPartyBeaconClient_execOnReservationCountUpdated_Parms OnReservationCountUpdated_Parms;
	OnReservationCountUpdated_Parms.ReservationRemaining = ReservationRemaining;

	this->ProcessEvent ( pFnOnReservationCountUpdated, &OnReservationCountUpdated_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  ReservationResult              ( CPF_Parm )

void UPartyBeaconClient::OnReservationRequestComplete ( unsigned char ReservationResult )
{
	static UFunction* pFnOnReservationRequestComplete = NULL;

	if ( ! pFnOnReservationRequestComplete )
		pFnOnReservationRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 41224 ];

	UPartyBeaconClient_execOnReservationRequestComplete_Parms OnReservationRequestComplete_Parms;
	OnReservationRequestComplete_Parms.ReservationResult = ReservationResult;

	this->ProcessEvent ( pFnOnReservationRequestComplete, &OnReservationRequestComplete_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPartyBeaconHost::GetMaxAvailableTeamSize ( )
{
	static UFunction* pFnGetMaxAvailableTeamSize = NULL;

	if ( ! pFnGetMaxAvailableTeamSize )
		pFnGetMaxAvailableTeamSize = (UFunction*) UObject::GObjObjects()->Data[ 41350 ];

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms GetMaxAvailableTeamSize_Parms;

	pFnGetMaxAvailableTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Parms, NULL );

	pFnGetMaxAvailableTeamSize->FunctionFlags |= 0x400;

	return GetMaxAvailableTeamSize_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] 
// Parameters infos:
// TArray< struct FUniqueNetId >  PartyLeaders                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPartyLeaders ( TArray< struct FUniqueNetId >* PartyLeaders )
{
	static UFunction* pFnGetPartyLeaders = NULL;

	if ( ! pFnGetPartyLeaders )
		pFnGetPartyLeaders = (UFunction*) UObject::GObjObjects()->Data[ 41346 ];

	UPartyBeaconHost_execGetPartyLeaders_Parms GetPartyLeaders_Parms;

	this->ProcessEvent ( pFnGetPartyLeaders, &GetPartyLeaders_Parms, NULL );

	if ( PartyLeaders )
		memcpy ( PartyLeaders, &GetPartyLeaders_Parms.PartyLeaders, 0xC );
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002] 
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPlayers ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnGetPlayers = NULL;

	if ( ! pFnGetPlayers )
		pFnGetPlayers = (UFunction*) UObject::GObjObjects()->Data[ 41340 ];

	UPartyBeaconHost_execGetPlayers_Parms GetPlayers_Parms;

	this->ProcessEvent ( pFnGetPlayers, &GetPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &GetPlayers_Parms.Players, 0xC );
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

void UPartyBeaconHost::AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnAppendReservationSkillsToSearch = NULL;

	if ( ! pFnAppendReservationSkillsToSearch )
		pFnAppendReservationSkillsToSearch = (UFunction*) UObject::GObjObjects()->Data[ 41338 ];

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms AppendReservationSkillsToSearch_Parms;
	AppendReservationSkillsToSearch_Parms.Search = Search;

	pFnAppendReservationSkillsToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Parms, NULL );

	pFnAppendReservationSkillsToSearch->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::eventUnregisterParty ( struct FUniqueNetId PartyLeader )
{
	static UFunction* pFnUnregisterParty = NULL;

	if ( ! pFnUnregisterParty )
		pFnUnregisterParty = (UFunction*) UObject::GObjObjects()->Data[ 41332 ];

	UPartyBeaconHost_eventUnregisterParty_Parms UnregisterParty_Parms;
	memcpy ( &UnregisterParty_Parms.PartyLeader, &PartyLeader, 0x48 );

	this->ProcessEvent ( pFnUnregisterParty, &UnregisterParty_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventUnregisterPartyMembers ( )
{
	static UFunction* pFnUnregisterPartyMembers = NULL;

	if ( ! pFnUnregisterPartyMembers )
		pFnUnregisterPartyMembers = (UFunction*) UObject::GObjObjects()->Data[ 41327 ];

	UPartyBeaconHost_eventUnregisterPartyMembers_Parms UnregisterPartyMembers_Parms;

	this->ProcessEvent ( pFnUnregisterPartyMembers, &UnregisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventRegisterPartyMembers ( )
{
	static UFunction* pFnRegisterPartyMembers = NULL;

	if ( ! pFnRegisterPartyMembers )
		pFnRegisterPartyMembers = (UFunction*) UObject::GObjObjects()->Data[ 41319 ];

	UPartyBeaconHost_eventRegisterPartyMembers_Parms RegisterPartyMembers_Parms;

	this->ProcessEvent ( pFnRegisterPartyMembers, &RegisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPartyBeaconHost::AreReservationsFull ( )
{
	static UFunction* pFnAreReservationsFull = NULL;

	if ( ! pFnAreReservationsFull )
		pFnAreReservationsFull = (UFunction*) UObject::GObjObjects()->Data[ 41317 ];

	UPartyBeaconHost_execAreReservationsFull_Parms AreReservationsFull_Parms;

	this->ProcessEvent ( pFnAreReservationsFull, &AreReservationsFull_Parms, NULL );

	return AreReservationsFull_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostHasCancelled ( )
{
	static UFunction* pFnTellClientsHostHasCancelled = NULL;

	if ( ! pFnTellClientsHostHasCancelled )
		pFnTellClientsHostHasCancelled = (UFunction*) UObject::GObjObjects()->Data[ 41316 ];

	UPartyBeaconHost_execTellClientsHostHasCancelled_Parms TellClientsHostHasCancelled_Parms;

	pFnTellClientsHostHasCancelled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Parms, NULL );

	pFnTellClientsHostHasCancelled->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostIsReady ( )
{
	static UFunction* pFnTellClientsHostIsReady = NULL;

	if ( ! pFnTellClientsHostIsReady )
		pFnTellClientsHostIsReady = (UFunction*) UObject::GObjObjects()->Data[ 41315 ];

	UPartyBeaconHost_execTellClientsHostIsReady_Parms TellClientsHostIsReady_Parms;

	pFnTellClientsHostIsReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsHostIsReady, &TellClientsHostIsReady_Parms, NULL );

	pFnTellClientsHostIsReady->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconHost::TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = (UFunction*) UObject::GObjObjects()->Data[ 41311 ];

	UPartyBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;
	memcpy ( &TellClientsToTravel_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );

	pFnTellClientsToTravel->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::eventDestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 41310 ];

	UPartyBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::OnClientCancellationReceived ( struct FUniqueNetId PartyLeader )
{
	static UFunction* pFnOnClientCancellationReceived = NULL;

	if ( ! pFnOnClientCancellationReceived )
		pFnOnClientCancellationReceived = (UFunction*) UObject::GObjObjects()->Data[ 41266 ];

	UPartyBeaconHost_execOnClientCancellationReceived_Parms OnClientCancellationReceived_Parms;
	memcpy ( &OnClientCancellationReceived_Parms.PartyLeader, &PartyLeader, 0x48 );

	this->ProcessEvent ( pFnOnClientCancellationReceived, &OnClientCancellationReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
// Parameters infos:

void UPartyBeaconHost::OnReservationsFull ( )
{
	static UFunction* pFnOnReservationsFull = NULL;

	if ( ! pFnOnReservationsFull )
		pFnOnReservationsFull = (UFunction*) UObject::GObjObjects()->Data[ 41268 ];

	UPartyBeaconHost_execOnReservationsFull_Parms OnReservationsFull_Parms;

	this->ProcessEvent ( pFnOnReservationsFull, &OnReservationsFull_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
// Parameters infos:

void UPartyBeaconHost::OnReservationChange ( )
{
	static UFunction* pFnOnReservationChange = NULL;

	if ( ! pFnOnReservationChange )
		pFnOnReservationChange = (UFunction*) UObject::GObjObjects()->Data[ 41270 ];

	UPartyBeaconHost_execOnReservationChange_Parms OnReservationChange_Parms;

	this->ProcessEvent ( pFnOnReservationChange, &OnReservationChange_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bMaintainParty                 ( CPF_Parm )

void UPartyBeaconHost::HandlePlayerLogout ( struct FUniqueNetId PlayerID, unsigned long bMaintainParty )
{
	static UFunction* pFnHandlePlayerLogout = NULL;

	if ( ! pFnHandlePlayerLogout )
		pFnHandlePlayerLogout = (UFunction*) UObject::GObjObjects()->Data[ 41306 ];

	UPartyBeaconHost_execHandlePlayerLogout_Parms HandlePlayerLogout_Parms;
	memcpy ( &HandlePlayerLogout_Parms.PlayerID, &PlayerID, 0x48 );
	HandlePlayerLogout_Parms.bMaintainParty = bMaintainParty;

	pFnHandlePlayerLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandlePlayerLogout, &HandlePlayerLogout_Parms, NULL );

	pFnHandlePlayerLogout->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Const | CPF_Parm | CPF_OutParm )

int UPartyBeaconHost::GetExistingReservation ( struct FUniqueNetId* PartyLeader )
{
	static UFunction* pFnGetExistingReservation = NULL;

	if ( ! pFnGetExistingReservation )
		pFnGetExistingReservation = (UFunction*) UObject::GObjObjects()->Data[ 41303 ];

	UPartyBeaconHost_execGetExistingReservation_Parms GetExistingReservation_Parms;

	pFnGetExistingReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetExistingReservation, &GetExistingReservation_Parms, NULL );

	pFnGetExistingReservation->FunctionFlags |= 0x400;

	if ( PartyLeader )
		memcpy ( PartyLeader, &GetExistingReservation_Parms.PartyLeader, 0x48 );

	return GetExistingReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry ( struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers )
{
	static UFunction* pFnUpdatePartyReservationEntry = NULL;

	if ( ! pFnUpdatePartyReservationEntry )
		pFnUpdatePartyReservationEntry = (UFunction*) UObject::GObjObjects()->Data[ 41298 ];

	UPartyBeaconHost_execUpdatePartyReservationEntry_Parms UpdatePartyReservationEntry_Parms;
	memcpy ( &UpdatePartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x48 );

	pFnUpdatePartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Parms, NULL );

	pFnUpdatePartyReservationEntry->FunctionFlags |= 0x400;

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &UpdatePartyReservationEntry_Parms.PlayerMembers, 0xC );

	return UpdatePartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// int                            TeamNum                        ( CPF_Parm )
// unsigned long                  bIsHost                        ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::AddPartyReservationEntry ( struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers )
{
	static UFunction* pFnAddPartyReservationEntry = NULL;

	if ( ! pFnAddPartyReservationEntry )
		pFnAddPartyReservationEntry = (UFunction*) UObject::GObjObjects()->Data[ 41291 ];

	UPartyBeaconHost_execAddPartyReservationEntry_Parms AddPartyReservationEntry_Parms;
	memcpy ( &AddPartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x48 );
	AddPartyReservationEntry_Parms.TeamNum = TeamNum;
	AddPartyReservationEntry_Parms.bIsHost = bIsHost;

	pFnAddPartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPartyReservationEntry, &AddPartyReservationEntry_Parms, NULL );

	pFnAddPartyReservationEntry->FunctionFlags |= 0x400;

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &AddPartyReservationEntry_Parms.PlayerMembers, 0xC );

	return AddPartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InNumTeams                     ( CPF_Parm )
// int                            InNumPlayersPerTeam            ( CPF_Parm )
// int                            InNumReservations              ( CPF_Parm )
// struct FName                   InSessionName                  ( CPF_Parm )
// int                            InForceTeamNum                 ( CPF_OptionalParm | CPF_Parm )

bool UPartyBeaconHost::InitHostBeacon ( int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName, int InForceTeamNum )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = (UFunction*) UObject::GObjObjects()->Data[ 41284 ];

	UPartyBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	InitHostBeacon_Parms.InNumTeams = InNumTeams;
	InitHostBeacon_Parms.InNumPlayersPerTeam = InNumPlayersPerTeam;
	InitHostBeacon_Parms.InNumReservations = InNumReservations;
	memcpy ( &InitHostBeacon_Parms.InSessionName, &InSessionName, 0x8 );
	InitHostBeacon_Parms.InForceTeamNum = InForceTeamNum;

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPause                         ( CPF_Parm )

void UPartyBeaconHost::PauseReservationRequests ( unsigned long bPause )
{
	static UFunction* pFnPauseReservationRequests = NULL;

	if ( ! pFnPauseReservationRequests )
		pFnPauseReservationRequests = (UFunction*) UObject::GObjObjects()->Data[ 41282 ];

	UPartyBeaconHost_execPauseReservationRequests_Parms PauseReservationRequests_Parms;
	PauseReservationRequests_Parms.bPause = bPause;

	pFnPauseReservationRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPauseReservationRequests, &PauseReservationRequests_Parms, NULL );

	pFnPauseReservationRequests->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 D                              ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetHexDigit ( struct FString D )
{
	static UFunction* pFnGetHexDigit = NULL;

	if ( ! pFnGetHexDigit )
		pFnGetHexDigit = (UFunction*) UObject::GObjObjects()->Data[ 41589 ];

	UWebRequest_execGetHexDigit_Parms GetHexDigit_Parms;
	memcpy ( &GetHexDigit_Parms.D, &D, 0xC );

	this->ProcessEvent ( pFnGetHexDigit, &GetHexDigit_Parms, NULL );

	return GetHexDigit_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] 
// Parameters infos:
// struct FString                 Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::DecodeFormData ( struct FString Data )
{
	static UFunction* pFnDecodeFormData = NULL;

	if ( ! pFnDecodeFormData )
		pFnDecodeFormData = (UFunction*) UObject::GObjObjects()->Data[ 41580 ];

	UWebRequest_execDecodeFormData_Parms DecodeFormData_Parms;
	memcpy ( &DecodeFormData_Parms.Data, &Data, 0xC );

	this->ProcessEvent ( pFnDecodeFormData, &DecodeFormData_Parms, NULL );
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::ProcessHeaderString ( struct FString S )
{
	static UFunction* pFnProcessHeaderString = NULL;

	if ( ! pFnProcessHeaderString )
		pFnProcessHeaderString = (UFunction*) UObject::GObjObjects()->Data[ 41577 ];

	UWebRequest_execProcessHeaderString_Parms ProcessHeaderString_Parms;
	memcpy ( &ProcessHeaderString_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessHeaderString, &ProcessHeaderString_Parms, NULL );
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebRequest::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = (UFunction*) UObject::GObjObjects()->Data[ 41576 ];

	UWebRequest_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FString >       varNames                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetVariables ( TArray< struct FString >* varNames )
{
	static UFunction* pFnGetVariables = NULL;

	if ( ! pFnGetVariables )
		pFnGetVariables = (UFunction*) UObject::GObjObjects()->Data[ 41573 ];

	UWebRequest_execGetVariables_Parms GetVariables_Parms;

	pFnGetVariables->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariables, &GetVariables_Parms, NULL );

	pFnGetVariables->FunctionFlags |= 0x400;

	if ( varNames )
		memcpy ( varNames, &GetVariables_Parms.varNames, 0xC );
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Number                         ( CPF_Parm )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariableNumber ( struct FString VariableName, int Number, struct FString DefaultValue )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 37517 ];

	UWebRequest_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.VariableName, &VariableName, 0xC );
	GetVariableNumber_Parms.Number = Number;
	memcpy ( &GetVariableNumber_Parms.DefaultValue, &DefaultValue, 0xC );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetVariableCount ( struct FString VariableName )
{
	static UFunction* pFnGetVariableCount = NULL;

	if ( ! pFnGetVariableCount )
		pFnGetVariableCount = (UFunction*) UObject::GObjObjects()->Data[ 37515 ];

	UWebRequest_execGetVariableCount_Parms GetVariableCount_Parms;
	memcpy ( &GetVariableCount_Parms.VariableName, &VariableName, 0xC );

	pFnGetVariableCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableCount, &GetVariableCount_Parms, NULL );

	pFnGetVariableCount->FunctionFlags |= 0x400;

	return GetVariableCount_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariable ( struct FString VariableName, struct FString DefaultValue )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = (UFunction*) UObject::GObjObjects()->Data[ 37513 ];

	UWebRequest_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.VariableName, &VariableName, 0xC );
	memcpy ( &GetVariable_Parms.DefaultValue, &DefaultValue, 0xC );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddVariable ( struct FString VariableName, struct FString Value )
{
	static UFunction* pFnAddVariable = NULL;

	if ( ! pFnAddVariable )
		pFnAddVariable = (UFunction*) UObject::GObjObjects()->Data[ 41564 ];

	UWebRequest_execAddVariable_Parms AddVariable_Parms;
	memcpy ( &AddVariable_Parms.VariableName, &VariableName, 0xC );
	memcpy ( &AddVariable_Parms.Value, &Value, 0xC );

	pFnAddVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddVariable, &AddVariable_Parms, NULL );

	pFnAddVariable->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FString >       Headers                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetHeaders ( TArray< struct FString >* Headers )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 41561 ];

	UWebRequest_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	if ( Headers )
		memcpy ( Headers, &GetHeaders_Parms.Headers, 0xC );
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetHeader ( struct FString HeaderName, struct FString DefaultValue )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 41557 ];

	UWebRequest_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &GetHeader_Parms.DefaultValue, &DefaultValue, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddHeader ( struct FString HeaderName, struct FString Value )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = (UFunction*) UObject::GObjObjects()->Data[ 41554 ];

	UWebRequest_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &AddHeader_Parms.Value, &Value, 0xC );

	pFnAddHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );

	pFnAddHeader->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Decoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::EncodeBase64 ( struct FString Decoded )
{
	static UFunction* pFnEncodeBase64 = NULL;

	if ( ! pFnEncodeBase64 )
		pFnEncodeBase64 = (UFunction*) UObject::GObjObjects()->Data[ 41551 ];

	UWebRequest_execEncodeBase64_Parms EncodeBase64_Parms;
	memcpy ( &EncodeBase64_Parms.Decoded, &Decoded, 0xC );

	pFnEncodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEncodeBase64, &EncodeBase64_Parms, NULL );

	pFnEncodeBase64->FunctionFlags |= 0x400;

	return EncodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Encoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::DecodeBase64 ( struct FString Encoded )
{
	static UFunction* pFnDecodeBase64 = NULL;

	if ( ! pFnDecodeBase64 )
		pFnDecodeBase64 = (UFunction*) UObject::GObjObjects()->Data[ 41548 ];

	UWebRequest_execDecodeBase64_Parms DecodeBase64_Parms;
	memcpy ( &DecodeBase64_Parms.Encoded, &Encoded, 0xC );

	pFnDecodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDecodeBase64, &DecodeBase64_Parms, NULL );

	pFnDecodeBase64->FunctionFlags |= 0x400;

	return DecodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentResponse ( )
{
	static UFunction* pFnSentResponse = NULL;

	if ( ! pFnSentResponse )
		pFnSentResponse = (UFunction*) UObject::GObjObjects()->Data[ 41649 ];

	UWebResponse_execSentResponse_Parms SentResponse_Parms;

	this->ProcessEvent ( pFnSentResponse, &SentResponse_Parms, NULL );

	return SentResponse_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentText ( )
{
	static UFunction* pFnSentText = NULL;

	if ( ! pFnSentText )
		pFnSentText = (UFunction*) UObject::GObjObjects()->Data[ 41647 ];

	UWebResponse_execSentText_Parms SentText_Parms;

	this->ProcessEvent ( pFnSentText, &SentText_Parms, NULL );

	return SentText_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] 
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::Redirect ( struct FString URL )
{
	static UFunction* pFnRedirect = NULL;

	if ( ! pFnRedirect )
		pFnRedirect = (UFunction*) UObject::GObjObjects()->Data[ 41645 ];

	UWebResponse_execRedirect_Parms Redirect_Parms;
	memcpy ( &Redirect_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnRedirect, &Redirect_Parms, NULL );
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] 
// Parameters infos:
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCache                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::SendStandardHeaders ( struct FString ContentType, unsigned long bCache )
{
	static UFunction* pFnSendStandardHeaders = NULL;

	if ( ! pFnSendStandardHeaders )
		pFnSendStandardHeaders = (UFunction*) UObject::GObjObjects()->Data[ 41641 ];

	UWebResponse_execSendStandardHeaders_Parms SendStandardHeaders_Parms;
	memcpy ( &SendStandardHeaders_Parms.ContentType, &ContentType, 0xC );
	SendStandardHeaders_Parms.bCache = bCache;

	this->ProcessEvent ( pFnSendStandardHeaders, &SendStandardHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] 
// Parameters infos:
// int                            ErrorNum                       ( CPF_Parm )
// struct FString                 Data                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPError ( int ErrorNum, struct FString Data )
{
	static UFunction* pFnHTTPError = NULL;

	if ( ! pFnHTTPError )
		pFnHTTPError = (UFunction*) UObject::GObjObjects()->Data[ 41638 ];

	UWebResponse_execHTTPError_Parms HTTPError_Parms;
	HTTPError_Parms.ErrorNum = ErrorNum;
	memcpy ( &HTTPError_Parms.Data, &Data, 0xC );

	this->ProcessEvent ( pFnHTTPError, &HTTPError_Parms, NULL );
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] 
// Parameters infos:

void UWebResponse::SendHeaders ( )
{
	static UFunction* pFnSendHeaders = NULL;

	if ( ! pFnSendHeaders )
		pFnSendHeaders = (UFunction*) UObject::GObjObjects()->Data[ 41636 ];

	UWebResponse_execSendHeaders_Parms SendHeaders_Parms;

	this->ProcessEvent ( pFnSendHeaders, &SendHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bReplace                       ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::AddHeader ( struct FString Header, unsigned long bReplace )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = (UFunction*) UObject::GObjObjects()->Data[ 41629 ];

	UWebResponse_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.Header, &Header, 0xC );
	AddHeader_Parms.bReplace = bReplace;

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPHeader ( struct FString Header )
{
	static UFunction* pFnHTTPHeader = NULL;

	if ( ! pFnHTTPHeader )
		pFnHTTPHeader = (UFunction*) UObject::GObjObjects()->Data[ 41627 ];

	UWebResponse_execHTTPHeader_Parms HTTPHeader_Parms;
	memcpy ( &HTTPHeader_Parms.Header, &Header, 0xC );

	this->ProcessEvent ( pFnHTTPHeader, &HTTPHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020002] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HttpResponse ( struct FString Header )
{
	static UFunction* pFnHttpResponse = NULL;

	if ( ! pFnHttpResponse )
		pFnHttpResponse = (UFunction*) UObject::GObjObjects()->Data[ 41625 ];

	UWebResponse_execHttpResponse_Parms HttpResponse_Parms;
	memcpy ( &HttpResponse_Parms.Header, &Header, 0xC );

	this->ProcessEvent ( pFnHttpResponse, &HttpResponse_Parms, NULL );
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] 
// Parameters infos:
// struct FString                 Realm                          ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::FailAuthentication ( struct FString Realm )
{
	static UFunction* pFnFailAuthentication = NULL;

	if ( ! pFnFailAuthentication )
		pFnFailAuthentication = (UFunction*) UObject::GObjObjects()->Data[ 41623 ];

	UWebResponse_execFailAuthentication_Parms FailAuthentication_Parms;
	memcpy ( &FailAuthentication_Parms.Realm, &Realm, 0xC );

	this->ProcessEvent ( pFnFailAuthentication, &FailAuthentication_Parms, NULL );
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::SendCachedFile ( struct FString Filename, struct FString ContentType )
{
	static UFunction* pFnSendCachedFile = NULL;

	if ( ! pFnSendCachedFile )
		pFnSendCachedFile = (UFunction*) UObject::GObjObjects()->Data[ 41619 ];

	UWebResponse_execSendCachedFile_Parms SendCachedFile_Parms;
	memcpy ( &SendCachedFile_Parms.Filename, &Filename, 0xC );
	memcpy ( &SendCachedFile_Parms.ContentType, &ContentType, 0xC );

	this->ProcessEvent ( pFnSendCachedFile, &SendCachedFile_Parms, NULL );

	return SendCachedFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void UWebResponse::eventSendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = (UFunction*) UObject::GObjObjects()->Data[ 41616 ];

	UWebResponse_eventSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNoCRLF                        ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::eventSendText ( struct FString Text, unsigned long bNoCRLF )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = (UFunction*) UObject::GObjObjects()->Data[ 41613 ];

	UWebResponse_eventSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Text, &Text, 0xC );
	SendText_Parms.bNoCRLF = bNoCRLF;

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = (UFunction*) UObject::GObjObjects()->Data[ 41612 ];

	UWebResponse_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            OffsetSeconds                  ( CPF_OptionalParm | CPF_Parm )

struct FString UWebResponse::GetHTTPExpiration ( int OffsetSeconds )
{
	static UFunction* pFnGetHTTPExpiration = NULL;

	if ( ! pFnGetHTTPExpiration )
		pFnGetHTTPExpiration = (UFunction*) UObject::GObjObjects()->Data[ 41609 ];

	UWebResponse_execGetHTTPExpiration_Parms GetHTTPExpiration_Parms;
	GetHTTPExpiration_Parms.OffsetSeconds = OffsetSeconds;

	pFnGetHTTPExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHTTPExpiration, &GetHTTPExpiration_Parms, NULL );

	pFnGetHTTPExpiration->FunctionFlags |= 0x400;

	return GetHTTPExpiration_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebResponse::LoadParsedUHTM ( struct FString Filename )
{
	static UFunction* pFnLoadParsedUHTM = NULL;

	if ( ! pFnLoadParsedUHTM )
		pFnLoadParsedUHTM = (UFunction*) UObject::GObjObjects()->Data[ 41606 ];

	UWebResponse_execLoadParsedUHTM_Parms LoadParsedUHTM_Parms;
	memcpy ( &LoadParsedUHTM_Parms.Filename, &Filename, 0xC );

	pFnLoadParsedUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadParsedUHTM, &LoadParsedUHTM_Parms, NULL );

	pFnLoadParsedUHTM->FunctionFlags |= 0x400;

	return LoadParsedUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeBinaryFile ( struct FString Filename )
{
	static UFunction* pFnIncludeBinaryFile = NULL;

	if ( ! pFnIncludeBinaryFile )
		pFnIncludeBinaryFile = (UFunction*) UObject::GObjObjects()->Data[ 37599 ];

	UWebResponse_execIncludeBinaryFile_Parms IncludeBinaryFile_Parms;
	memcpy ( &IncludeBinaryFile_Parms.Filename, &Filename, 0xC );

	pFnIncludeBinaryFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncludeBinaryFile, &IncludeBinaryFile_Parms, NULL );

	pFnIncludeBinaryFile->FunctionFlags |= 0x400;

	return IncludeBinaryFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeUHTM ( struct FString Filename )
{
	static UFunction* pFnIncludeUHTM = NULL;

	if ( ! pFnIncludeUHTM )
		pFnIncludeUHTM = (UFunction*) UObject::GObjObjects()->Data[ 37520 ];

	UWebResponse_execIncludeUHTM_Parms IncludeUHTM_Parms;
	memcpy ( &IncludeUHTM_Parms.Filename, &Filename, 0xC );

	pFnIncludeUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncludeUHTM, &IncludeUHTM_Parms, NULL );

	pFnIncludeUHTM->FunctionFlags |= 0x400;

	return IncludeUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::ClearSubst ( )
{
	static UFunction* pFnClearSubst = NULL;

	if ( ! pFnClearSubst )
		pFnClearSubst = (UFunction*) UObject::GObjObjects()->Data[ 41603 ];

	UWebResponse_execClearSubst_Parms ClearSubst_Parms;

	pFnClearSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSubst, &ClearSubst_Parms, NULL );

	pFnClearSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Variable                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::Subst ( struct FString Variable, struct FString Value, unsigned long bClear )
{
	static UFunction* pFnSubst = NULL;

	if ( ! pFnSubst )
		pFnSubst = (UFunction*) UObject::GObjObjects()->Data[ 37519 ];

	UWebResponse_execSubst_Parms Subst_Parms;
	memcpy ( &Subst_Parms.Variable, &Variable, 0xC );
	memcpy ( &Subst_Parms.Value, &Value, 0xC );
	Subst_Parms.bClear = bClear;

	pFnSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubst, &Subst_Parms, NULL );

	pFnSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::FileExists ( struct FString Filename )
{
	static UFunction* pFnFileExists = NULL;

	if ( ! pFnFileExists )
		pFnFileExists = (UFunction*) UObject::GObjObjects()->Data[ 37597 ];

	UWebResponse_execFileExists_Parms FileExists_Parms;
	memcpy ( &FileExists_Parms.Filename, &Filename, 0xC );

	pFnFileExists->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFileExists, &FileExists_Parms, NULL );

	pFnFileExists->FunctionFlags |= 0x400;

	return FileExists_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

int UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId ( int PlaylistId )
{
	static UFunction* pFnGetMatchTypeForPlaylistId = NULL;

	if ( ! pFnGetMatchTypeForPlaylistId )
		pFnGetMatchTypeForPlaylistId = (UFunction*) UObject::GObjObjects()->Data[ 41496 ];

	UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms GetMatchTypeForPlaylistId_Parms;
	GetMatchTypeForPlaylistId_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetMatchTypeForPlaylistId, &GetMatchTypeForPlaylistId_Parms, NULL );

	return GetMatchTypeForPlaylistId_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426002] 
// Parameters infos:
// class UOnlinePlaylistProvider* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            ProviderIndex                  ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider ( struct FName ProviderTag, int PlaylistId, int* ProviderIndex )
{
	static UFunction* pFnGetOnlinePlaylistProvider = NULL;

	if ( ! pFnGetOnlinePlaylistProvider )
		pFnGetOnlinePlaylistProvider = (UFunction*) UObject::GObjObjects()->Data[ 41487 ];

	UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms GetOnlinePlaylistProvider_Parms;
	memcpy ( &GetOnlinePlaylistProvider_Parms.ProviderTag, &ProviderTag, 0x8 );
	GetOnlinePlaylistProvider_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent ( pFnGetOnlinePlaylistProvider, &GetOnlinePlaylistProvider_Parms, NULL );

	if ( ProviderIndex )
		*ProviderIndex = GetOnlinePlaylistProvider_Parms.ProviderIndex;

	return GetOnlinePlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// int                            ProviderIndex                  ( CPF_Parm )
// class UUIResourceDataProvider* out_Provider                   ( CPF_Parm | CPF_OutParm )

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider ( struct FName ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider )
{
	static UFunction* pFnGetPlaylistProvider = NULL;

	if ( ! pFnGetPlaylistProvider )
		pFnGetPlaylistProvider = (UFunction*) UObject::GObjObjects()->Data[ 41482 ];

	UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms GetPlaylistProvider_Parms;
	memcpy ( &GetPlaylistProvider_Parms.ProviderTag, &ProviderTag, 0x8 );
	GetPlaylistProvider_Parms.ProviderIndex = ProviderIndex;

	pFnGetPlaylistProvider->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlaylistProvider, &GetPlaylistProvider_Parms, NULL );

	pFnGetPlaylistProvider->FunctionFlags |= 0x400;

	if ( out_Provider )
		*out_Provider = GetPlaylistProvider_Parms.out_Provider;

	return GetPlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// TArray< class UUIResourceDataProvider* > out_Providers                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUIDataStore_OnlinePlaylists::GetResourceProviders ( struct FName ProviderTag, TArray< class UUIResourceDataProvider* >* out_Providers )
{
	static UFunction* pFnGetResourceProviders = NULL;

	if ( ! pFnGetResourceProviders )
		pFnGetResourceProviders = (UFunction*) UObject::GObjObjects()->Data[ 41477 ];

	UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms GetResourceProviders_Parms;
	memcpy ( &GetResourceProviders_Parms.ProviderTag, &ProviderTag, 0x8 );

	pFnGetResourceProviders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResourceProviders, &GetResourceProviders_Parms, NULL );

	pFnGetResourceProviders->FunctionFlags |= 0x400;

	if ( out_Providers )
		memcpy ( out_Providers, &GetResourceProviders_Parms.out_Providers, 0xC );

	return GetResourceProviders_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIDataStore_OnlinePlaylists::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 41475 ];

	UUIDataStore_OnlinePlaylists_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::PostQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPostQuery = NULL;

	if ( ! pFnPostQuery )
		pFnPostQuery = (UFunction*) UObject::GObjObjects()->Data[ 37500 ];

	UWebApplication_execPostQuery_Parms PostQuery_Parms;
	PostQuery_Parms.Request = Request;
	PostQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPostQuery, &PostQuery_Parms, NULL );
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::Query ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37497 ];

	UWebApplication_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

bool UWebApplication::PreQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPreQuery = NULL;

	if ( ! pFnPreQuery )
		pFnPreQuery = (UFunction*) UObject::GObjObjects()->Data[ 37493 ];

	UWebApplication_execPreQuery_Parms PreQuery_Parms;
	PreQuery_Parms.Request = Request;
	PreQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPreQuery, &PreQuery_Parms, NULL );

	return PreQuery_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] 
// Parameters infos:

void UWebApplication::CleanupApp ( )
{
	static UFunction* pFnCleanupApp = NULL;

	if ( ! pFnCleanupApp )
		pFnCleanupApp = (UFunction*) UObject::GObjObjects()->Data[ 37492 ];

	UWebApplication_execCleanupApp_Parms CleanupApp_Parms;

	this->ProcessEvent ( pFnCleanupApp, &CleanupApp_Parms, NULL );
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UWebApplication::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 37491 ];

	UWebApplication_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
// Parameters infos:

void UWebApplication::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37490 ];

	UWebApplication_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] 
// Parameters infos:
// class UWebApplication*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URI                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SubURI                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UWebApplication* AWebServer::GetApplication ( struct FString URI, struct FString* SubURI )
{
	static UFunction* pFnGetApplication = NULL;

	if ( ! pFnGetApplication )
		pFnGetApplication = (UFunction*) UObject::GObjObjects()->Data[ 41526 ];

	AWebServer_execGetApplication_Parms GetApplication_Parms;
	memcpy ( &GetApplication_Parms.URI, &URI, 0xC );

	this->ProcessEvent ( pFnGetApplication, &GetApplication_Parms, NULL );

	if ( SubURI )
		memcpy ( SubURI, &GetApplication_Parms.SubURI, 0xC );

	return GetApplication_Parms.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventLostChild ( class AActor* C )
{
	static UFunction* pFnLostChild = NULL;

	if ( ! pFnLostChild )
		pFnLostChild = (UFunction*) UObject::GObjObjects()->Data[ 41668 ];

	AWebServer_eventLostChild_Parms LostChild_Parms;
	LostChild_Parms.C = C;

	this->ProcessEvent ( pFnLostChild, &LostChild_Parms, NULL );
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventGainedChild ( class AActor* C )
{
	static UFunction* pFnGainedChild = NULL;

	if ( ! pFnGainedChild )
		pFnGainedChild = (UFunction*) UObject::GObjObjects()->Data[ 41666 ];

	AWebServer_eventGainedChild_Parms GainedChild_Parms;
	GainedChild_Parms.C = C;

	this->ProcessEvent ( pFnGainedChild, &GainedChild_Parms, NULL );
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebServer::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 41664 ];

	AWebServer_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] 
// Parameters infos:

void AWebServer::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41659 ];

	AWebServer_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UHelloWeb::eventQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37506 ];

	UHelloWeb_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
// Parameters infos:

void UHelloWeb::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37505 ];

	UHelloWeb_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UImageServer::eventQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37593 ];

	UImageServer_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

struct FString UMcpServiceConfig::GetUserAuthTicket ( struct FString McpId )
{
	static UFunction* pFnGetUserAuthTicket = NULL;

	if ( ! pFnGetUserAuthTicket )
		pFnGetUserAuthTicket = (UFunction*) UObject::GObjObjects()->Data[ 37656 ];

	UMcpServiceConfig_execGetUserAuthTicket_Parms GetUserAuthTicket_Parms;
	memcpy ( &GetUserAuthTicket_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetUserAuthTicket, &GetUserAuthTicket_Parms, NULL );

	return GetUserAuthTicket_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            UserReward                     ( CPF_Parm )

void UMcpClashMobBase::UpdateChallengeUserReward ( struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward )
{
	static UFunction* pFnUpdateChallengeUserReward = NULL;

	if ( ! pFnUpdateChallengeUserReward )
		pFnUpdateChallengeUserReward = (UFunction*) UObject::GObjObjects()->Data[ 37802 ];

	UMcpClashMobBase_execUpdateChallengeUserReward_Parms UpdateChallengeUserReward_Parms;
	memcpy ( &UpdateChallengeUserReward_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &UpdateChallengeUserReward_Parms.UniqueUserId, &UniqueUserId, 0xC );
	UpdateChallengeUserReward_Parms.UserReward = UserReward;

	this->ProcessEvent ( pFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnUpdateChallengeUserRewardComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error )
{
	static UFunction* pFnOnUpdateChallengeUserRewardComplete = NULL;

	if ( ! pFnOnUpdateChallengeUserRewardComplete )
		pFnOnUpdateChallengeUserRewardComplete = (UFunction*) UObject::GObjObjects()->Data[ 37797 ];

	UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Parms OnUpdateChallengeUserRewardComplete_Parms;
	OnUpdateChallengeUserRewardComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnUpdateChallengeUserRewardComplete_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &OnUpdateChallengeUserRewardComplete_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &OnUpdateChallengeUserRewardComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnUpdateChallengeUserRewardComplete, &OnUpdateChallengeUserRewardComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bDidComplete                   ( CPF_Parm )
// int                            GoalProgress                   ( CPF_Parm )

void UMcpClashMobBase::UpdateChallengeUserProgress ( struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress )
{
	static UFunction* pFnUpdateChallengeUserProgress = NULL;

	if ( ! pFnUpdateChallengeUserProgress )
		pFnUpdateChallengeUserProgress = (UFunction*) UObject::GObjObjects()->Data[ 37792 ];

	UMcpClashMobBase_execUpdateChallengeUserProgress_Parms UpdateChallengeUserProgress_Parms;
	memcpy ( &UpdateChallengeUserProgress_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &UpdateChallengeUserProgress_Parms.UniqueUserId, &UniqueUserId, 0xC );
	UpdateChallengeUserProgress_Parms.bDidComplete = bDidComplete;
	UpdateChallengeUserProgress_Parms.GoalProgress = GoalProgress;

	this->ProcessEvent ( pFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnUpdateChallengeUserProgressComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error )
{
	static UFunction* pFnOnUpdateChallengeUserProgressComplete = NULL;

	if ( ! pFnOnUpdateChallengeUserProgressComplete )
		pFnOnUpdateChallengeUserProgressComplete = (UFunction*) UObject::GObjObjects()->Data[ 37787 ];

	UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Parms OnUpdateChallengeUserProgressComplete_Parms;
	OnUpdateChallengeUserProgressComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnUpdateChallengeUserProgressComplete_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &OnUpdateChallengeUserProgressComplete_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &OnUpdateChallengeUserProgressComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnUpdateChallengeUserProgressComplete, &OnUpdateChallengeUserProgressComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobBase::GetChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus )
{
	static UFunction* pFnGetChallengeUserStatus = NULL;

	if ( ! pFnGetChallengeUserStatus )
		pFnGetChallengeUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 37783 ];

	UMcpClashMobBase_execGetChallengeUserStatus_Parms GetChallengeUserStatus_Parms;
	memcpy ( &GetChallengeUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &GetChallengeUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnGetChallengeUserStatus, &GetChallengeUserStatus_Parms, NULL );

	if ( OutChallengeUserStatus )
		memcpy ( OutChallengeUserStatus, &GetChallengeUserStatus_Parms.OutChallengeUserStatus, 0x68 );
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UserIdsToRead                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobBase::QueryChallengeMultiUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, TArray< struct FString >* UserIdsToRead )
{
	static UFunction* pFnQueryChallengeMultiUserStatus = NULL;

	if ( ! pFnQueryChallengeMultiUserStatus )
		pFnQueryChallengeMultiUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 37778 ];

	UMcpClashMobBase_execQueryChallengeMultiUserStatus_Parms QueryChallengeMultiUserStatus_Parms;
	memcpy ( &QueryChallengeMultiUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &QueryChallengeMultiUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Parms, NULL );

	if ( UserIdsToRead )
		memcpy ( UserIdsToRead, &QueryChallengeMultiUserStatus_Parms.UserIdsToRead, 0xC );
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::QueryChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId )
{
	static UFunction* pFnQueryChallengeUserStatus = NULL;

	if ( ! pFnQueryChallengeUserStatus )
		pFnQueryChallengeUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 37775 ];

	UMcpClashMobBase_execQueryChallengeUserStatus_Parms QueryChallengeUserStatus_Parms;
	memcpy ( &QueryChallengeUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &QueryChallengeUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnQueryChallengeUserStatusComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error )
{
	static UFunction* pFnOnQueryChallengeUserStatusComplete = NULL;

	if ( ! pFnOnQueryChallengeUserStatusComplete )
		pFnOnQueryChallengeUserStatusComplete = (UFunction*) UObject::GObjObjects()->Data[ 37770 ];

	UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Parms OnQueryChallengeUserStatusComplete_Parms;
	OnQueryChallengeUserStatusComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryChallengeUserStatusComplete_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &OnQueryChallengeUserStatusComplete_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &OnQueryChallengeUserStatusComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryChallengeUserStatusComplete, &OnQueryChallengeUserStatusComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::AcceptChallenge ( struct FString UniqueChallengeId, struct FString UniqueUserId )
{
	static UFunction* pFnAcceptChallenge = NULL;

	if ( ! pFnAcceptChallenge )
		pFnAcceptChallenge = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

	UMcpClashMobBase_execAcceptChallenge_Parms AcceptChallenge_Parms;
	memcpy ( &AcceptChallenge_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &AcceptChallenge_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnAcceptChallenge, &AcceptChallenge_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnAcceptChallengeComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error )
{
	static UFunction* pFnOnAcceptChallengeComplete = NULL;

	if ( ! pFnOnAcceptChallengeComplete )
		pFnOnAcceptChallengeComplete = (UFunction*) UObject::GObjObjects()->Data[ 37762 ];

	UMcpClashMobBase_execOnAcceptChallengeComplete_Parms OnAcceptChallengeComplete_Parms;
	OnAcceptChallengeComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAcceptChallengeComplete_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &OnAcceptChallengeComplete_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &OnAcceptChallengeComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnAcceptChallengeComplete, &OnAcceptChallengeComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::DeleteCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnDeleteCachedChallengeFile = NULL;

	if ( ! pFnDeleteCachedChallengeFile )
		pFnDeleteCachedChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 37759 ];

	UMcpClashMobBase_execDeleteCachedChallengeFile_Parms DeleteCachedChallengeFile_Parms;
	memcpy ( &DeleteCachedChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &DeleteCachedChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::ClearCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnClearCachedChallengeFile = NULL;

	if ( ! pFnClearCachedChallengeFile )
		pFnClearCachedChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 37756 ];

	UMcpClashMobBase_execClearCachedChallengeFile_Parms ClearCachedChallengeFile_Parms;
	memcpy ( &ClearCachedChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &ClearCachedChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnClearCachedChallengeFile, &ClearCachedChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        OutFileContents                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobBase::GetChallengeFileContents ( struct FString UniqueChallengeId, struct FString DLName, TArray< unsigned char >* OutFileContents )
{
	static UFunction* pFnGetChallengeFileContents = NULL;

	if ( ! pFnGetChallengeFileContents )
		pFnGetChallengeFileContents = (UFunction*) UObject::GObjObjects()->Data[ 37751 ];

	UMcpClashMobBase_execGetChallengeFileContents_Parms GetChallengeFileContents_Parms;
	memcpy ( &GetChallengeFileContents_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &GetChallengeFileContents_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnGetChallengeFileContents, &GetChallengeFileContents_Parms, NULL );

	if ( OutFileContents )
		memcpy ( OutFileContents, &GetChallengeFileContents_Parms.OutFileContents, 0xC );
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::DownloadChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnDownloadChallengeFile = NULL;

	if ( ! pFnDownloadChallengeFile )
		pFnDownloadChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 37748 ];

	UMcpClashMobBase_execDownloadChallengeFile_Parms DownloadChallengeFile_Parms;
	memcpy ( &DownloadChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &DownloadChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnDownloadChallengeFile, &DownloadChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpClashMobChallengeFile > OutChallengeFiles              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobBase::GetChallengeFileList ( struct FString UniqueChallengeId, TArray< struct FMcpClashMobChallengeFile >* OutChallengeFiles )
{
	static UFunction* pFnGetChallengeFileList = NULL;

	if ( ! pFnGetChallengeFileList )
		pFnGetChallengeFileList = (UFunction*) UObject::GObjObjects()->Data[ 37744 ];

	UMcpClashMobBase_execGetChallengeFileList_Parms GetChallengeFileList_Parms;
	memcpy ( &GetChallengeFileList_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );

	this->ProcessEvent ( pFnGetChallengeFileList, &GetChallengeFileList_Parms, NULL );

	if ( OutChallengeFiles )
		memcpy ( OutChallengeFiles, &GetChallengeFileList_Parms.OutChallengeFiles, 0xC );
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnDownloadChallengeFileComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString DLName, struct FString Filename, struct FString Error )
{
	static UFunction* pFnOnDownloadChallengeFileComplete = NULL;

	if ( ! pFnOnDownloadChallengeFileComplete )
		pFnOnDownloadChallengeFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37738 ];

	UMcpClashMobBase_execOnDownloadChallengeFileComplete_Parms OnDownloadChallengeFileComplete_Parms;
	OnDownloadChallengeFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDownloadChallengeFileComplete_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &OnDownloadChallengeFileComplete_Parms.DLName, &DLName, 0xC );
	memcpy ( &OnDownloadChallengeFileComplete_Parms.Filename, &Filename, 0xC );
	memcpy ( &OnDownloadChallengeFileComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDownloadChallengeFileComplete, &OnDownloadChallengeFileComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] 
// Parameters infos:
// TArray< struct FMcpClashMobChallengeEvent > OutChallengeEvents             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobBase::GetChallengeList ( TArray< struct FMcpClashMobChallengeEvent >* OutChallengeEvents )
{
	static UFunction* pFnGetChallengeList = NULL;

	if ( ! pFnGetChallengeList )
		pFnGetChallengeList = (UFunction*) UObject::GObjObjects()->Data[ 37735 ];

	UMcpClashMobBase_execGetChallengeList_Parms GetChallengeList_Parms;

	this->ProcessEvent ( pFnGetChallengeList, &GetChallengeList_Parms, NULL );

	if ( OutChallengeEvents )
		memcpy ( OutChallengeEvents, &GetChallengeList_Parms.OutChallengeEvents, 0xC );
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] 
// Parameters infos:

void UMcpClashMobBase::QueryChallengeList ( )
{
	static UFunction* pFnQueryChallengeList = NULL;

	if ( ! pFnQueryChallengeList )
		pFnQueryChallengeList = (UFunction*) UObject::GObjObjects()->Data[ 37734 ];

	UMcpClashMobBase_execQueryChallengeList_Parms QueryChallengeList_Parms;

	this->ProcessEvent ( pFnQueryChallengeList, &QueryChallengeList_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobBase::OnQueryChallengeListComplete ( unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryChallengeListComplete = NULL;

	if ( ! pFnOnQueryChallengeListComplete )
		pFnOnQueryChallengeListComplete = (UFunction*) UObject::GObjObjects()->Data[ 37731 ];

	UMcpClashMobBase_execOnQueryChallengeListComplete_Parms OnQueryChallengeListComplete_Parms;
	OnQueryChallengeListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryChallengeListComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryChallengeListComplete, &OnQueryChallengeListComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpClashMobBase*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpClashMobBase* UMcpClashMobBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 37727 ];

	UMcpClashMobBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UMcpClashMobFileDownload::GetUrlForFile ( struct FString Filename )
{
	static UFunction* pFnGetUrlForFile = NULL;

	if ( ! pFnGetUrlForFile )
		pFnGetUrlForFile = (UFunction*) UObject::GObjObjects()->Data[ 37935 ];

	UMcpClashMobFileDownload_execGetUrlForFile_Parms GetUrlForFile_Parms;
	memcpy ( &GetUrlForFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetUrlForFile, &GetUrlForFile_Parms, NULL );

	return GetUrlForFile_Parms.ReturnValue;
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnUpdateChallengeUserRewardHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateChallengeUserRewardHTTPRequestComplete = NULL;

	if ( ! pFnOnUpdateChallengeUserRewardHTTPRequestComplete )
		pFnOnUpdateChallengeUserRewardHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38138 ];

	UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Parms OnUpdateChallengeUserRewardHTTPRequestComplete_Parms;
	OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.Request = Request;
	OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.Response = Response;
	OnUpdateChallengeUserRewardHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateChallengeUserRewardHTTPRequestComplete, &OnUpdateChallengeUserRewardHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            UserReward                     ( CPF_Parm )

void UMcpClashMobManager::UpdateChallengeUserReward ( struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward )
{
	static UFunction* pFnUpdateChallengeUserReward = NULL;

	if ( ! pFnUpdateChallengeUserReward )
		pFnUpdateChallengeUserReward = (UFunction*) UObject::GObjObjects()->Data[ 38128 ];

	UMcpClashMobManager_execUpdateChallengeUserReward_Parms UpdateChallengeUserReward_Parms;
	memcpy ( &UpdateChallengeUserReward_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &UpdateChallengeUserReward_Parms.UniqueUserId, &UniqueUserId, 0xC );
	UpdateChallengeUserReward_Parms.UserReward = UserReward;

	this->ProcessEvent ( pFnUpdateChallengeUserReward, &UpdateChallengeUserReward_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnUpdateChallengeUserProgressHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateChallengeUserProgressHTTPRequestComplete = NULL;

	if ( ! pFnOnUpdateChallengeUserProgressHTTPRequestComplete )
		pFnOnUpdateChallengeUserProgressHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38118 ];

	UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Parms OnUpdateChallengeUserProgressHTTPRequestComplete_Parms;
	OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.Request = Request;
	OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.Response = Response;
	OnUpdateChallengeUserProgressHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateChallengeUserProgressHTTPRequestComplete, &OnUpdateChallengeUserProgressHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bDidComplete                   ( CPF_Parm )
// int                            GoalProgress                   ( CPF_Parm )

void UMcpClashMobManager::UpdateChallengeUserProgress ( struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress )
{
	static UFunction* pFnUpdateChallengeUserProgress = NULL;

	if ( ! pFnUpdateChallengeUserProgress )
		pFnUpdateChallengeUserProgress = (UFunction*) UObject::GObjObjects()->Data[ 38107 ];

	UMcpClashMobManager_execUpdateChallengeUserProgress_Parms UpdateChallengeUserProgress_Parms;
	memcpy ( &UpdateChallengeUserProgress_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &UpdateChallengeUserProgress_Parms.UniqueUserId, &UniqueUserId, 0xC );
	UpdateChallengeUserProgress_Parms.bDidComplete = bDidComplete;
	UpdateChallengeUserProgress_Parms.GoalProgress = GoalProgress;

	this->ProcessEvent ( pFnUpdateChallengeUserProgress, &UpdateChallengeUserProgress_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpClashMobChallengeUserStatus OutChallengeUserStatus         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobManager::GetChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus )
{
	static UFunction* pFnGetChallengeUserStatus = NULL;

	if ( ! pFnGetChallengeUserStatus )
		pFnGetChallengeUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 38101 ];

	UMcpClashMobManager_execGetChallengeUserStatus_Parms GetChallengeUserStatus_Parms;
	memcpy ( &GetChallengeUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &GetChallengeUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnGetChallengeUserStatus, &GetChallengeUserStatus_Parms, NULL );

	if ( OutChallengeUserStatus )
		memcpy ( OutChallengeUserStatus, &GetChallengeUserStatus_Parms.OutChallengeUserStatus, 0x68 );
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnQueryChallengeMultiStatusHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryChallengeMultiStatusHTTPRequestComplete = NULL;

	if ( ! pFnOnQueryChallengeMultiStatusHTTPRequestComplete )
		pFnOnQueryChallengeMultiStatusHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38088 ];

	UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Parms OnQueryChallengeMultiStatusHTTPRequestComplete_Parms;
	OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.Request = Request;
	OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.Response = Response;
	OnQueryChallengeMultiStatusHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryChallengeMultiStatusHTTPRequestComplete, &OnQueryChallengeMultiStatusHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UserIdsToRead                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobManager::QueryChallengeMultiUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, TArray< struct FString >* UserIdsToRead )
{
	static UFunction* pFnQueryChallengeMultiUserStatus = NULL;

	if ( ! pFnQueryChallengeMultiUserStatus )
		pFnQueryChallengeMultiUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 38075 ];

	UMcpClashMobManager_execQueryChallengeMultiUserStatus_Parms QueryChallengeMultiUserStatus_Parms;
	memcpy ( &QueryChallengeMultiUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &QueryChallengeMultiUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryChallengeMultiUserStatus, &QueryChallengeMultiUserStatus_Parms, NULL );

	if ( UserIdsToRead )
		memcpy ( UserIdsToRead, &QueryChallengeMultiUserStatus_Parms.UserIdsToRead, 0xC );
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnQueryChallengeStatusHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryChallengeStatusHTTPRequestComplete = NULL;

	if ( ! pFnOnQueryChallengeStatusHTTPRequestComplete )
		pFnOnQueryChallengeStatusHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38063 ];

	UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Parms OnQueryChallengeStatusHTTPRequestComplete_Parms;
	OnQueryChallengeStatusHTTPRequestComplete_Parms.Request = Request;
	OnQueryChallengeStatusHTTPRequestComplete_Parms.Response = Response;
	OnQueryChallengeStatusHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryChallengeStatusHTTPRequestComplete, &OnQueryChallengeStatusHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::QueryChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId )
{
	static UFunction* pFnQueryChallengeUserStatus = NULL;

	if ( ! pFnQueryChallengeUserStatus )
		pFnQueryChallengeUserStatus = (UFunction*) UObject::GObjObjects()->Data[ 38054 ];

	UMcpClashMobManager_execQueryChallengeUserStatus_Parms QueryChallengeUserStatus_Parms;
	memcpy ( &QueryChallengeUserStatus_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &QueryChallengeUserStatus_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryChallengeUserStatus, &QueryChallengeUserStatus_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnAcceptChallengeHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAcceptChallengeHTTPRequestComplete = NULL;

	if ( ! pFnOnAcceptChallengeHTTPRequestComplete )
		pFnOnAcceptChallengeHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38044 ];

	UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Parms OnAcceptChallengeHTTPRequestComplete_Parms;
	OnAcceptChallengeHTTPRequestComplete_Parms.Request = Request;
	OnAcceptChallengeHTTPRequestComplete_Parms.Response = Response;
	OnAcceptChallengeHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAcceptChallengeHTTPRequestComplete, &OnAcceptChallengeHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::AcceptChallenge ( struct FString UniqueChallengeId, struct FString UniqueUserId )
{
	static UFunction* pFnAcceptChallenge = NULL;

	if ( ! pFnAcceptChallenge )
		pFnAcceptChallenge = (UFunction*) UObject::GObjObjects()->Data[ 38035 ];

	UMcpClashMobManager_execAcceptChallenge_Parms AcceptChallenge_Parms;
	memcpy ( &AcceptChallenge_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &AcceptChallenge_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnAcceptChallenge, &AcceptChallenge_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::DeleteCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnDeleteCachedChallengeFile = NULL;

	if ( ! pFnDeleteCachedChallengeFile )
		pFnDeleteCachedChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 38030 ];

	UMcpClashMobManager_execDeleteCachedChallengeFile_Parms DeleteCachedChallengeFile_Parms;
	memcpy ( &DeleteCachedChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &DeleteCachedChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnDeleteCachedChallengeFile, &DeleteCachedChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::ClearCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnClearCachedChallengeFile = NULL;

	if ( ! pFnClearCachedChallengeFile )
		pFnClearCachedChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 38025 ];

	UMcpClashMobManager_execClearCachedChallengeFile_Parms ClearCachedChallengeFile_Parms;
	memcpy ( &ClearCachedChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &ClearCachedChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnClearCachedChallengeFile, &ClearCachedChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        OutFileContents                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobManager::GetChallengeFileContents ( struct FString UniqueChallengeId, struct FString DLName, TArray< unsigned char >* OutFileContents )
{
	static UFunction* pFnGetChallengeFileContents = NULL;

	if ( ! pFnGetChallengeFileContents )
		pFnGetChallengeFileContents = (UFunction*) UObject::GObjObjects()->Data[ 38018 ];

	UMcpClashMobManager_execGetChallengeFileContents_Parms GetChallengeFileContents_Parms;
	memcpy ( &GetChallengeFileContents_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &GetChallengeFileContents_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnGetChallengeFileContents, &GetChallengeFileContents_Parms, NULL );

	if ( OutFileContents )
		memcpy ( OutFileContents, &GetChallengeFileContents_Parms.OutFileContents, 0xC );
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::OnDownloadMcpFileComplete ( unsigned long bWasSuccessful, struct FString DLName )
{
	static UFunction* pFnOnDownloadMcpFileComplete = NULL;

	if ( ! pFnOnDownloadMcpFileComplete )
		pFnOnDownloadMcpFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 38010 ];

	UMcpClashMobManager_execOnDownloadMcpFileComplete_Parms OnDownloadMcpFileComplete_Parms;
	OnDownloadMcpFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDownloadMcpFileComplete_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnOnDownloadMcpFileComplete, &OnDownloadMcpFileComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::OnLoadCachedFileComplete ( unsigned long bWasSuccessful, struct FString DLName )
{
	static UFunction* pFnOnLoadCachedFileComplete = NULL;

	if ( ! pFnOnLoadCachedFileComplete )
		pFnOnLoadCachedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37999 ];

	UMcpClashMobManager_execOnLoadCachedFileComplete_Parms OnLoadCachedFileComplete_Parms;
	OnLoadCachedFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnLoadCachedFileComplete_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnOnLoadCachedFileComplete, &OnLoadCachedFileComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DLName                         ( CPF_Parm | CPF_NeedCtorLink )

void UMcpClashMobManager::DownloadChallengeFile ( struct FString UniqueChallengeId, struct FString DLName )
{
	static UFunction* pFnDownloadChallengeFile = NULL;

	if ( ! pFnDownloadChallengeFile )
		pFnDownloadChallengeFile = (UFunction*) UObject::GObjObjects()->Data[ 37992 ];

	UMcpClashMobManager_execDownloadChallengeFile_Parms DownloadChallengeFile_Parms;
	memcpy ( &DownloadChallengeFile_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );
	memcpy ( &DownloadChallengeFile_Parms.DLName, &DLName, 0xC );

	this->ProcessEvent ( pFnDownloadChallengeFile, &DownloadChallengeFile_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] 
// Parameters infos:
// struct FString                 UniqueChallengeId              ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpClashMobChallengeFile > OutChallengeFiles              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobManager::GetChallengeFileList ( struct FString UniqueChallengeId, TArray< struct FMcpClashMobChallengeFile >* OutChallengeFiles )
{
	static UFunction* pFnGetChallengeFileList = NULL;

	if ( ! pFnGetChallengeFileList )
		pFnGetChallengeFileList = (UFunction*) UObject::GObjObjects()->Data[ 37987 ];

	UMcpClashMobManager_execGetChallengeFileList_Parms GetChallengeFileList_Parms;
	memcpy ( &GetChallengeFileList_Parms.UniqueChallengeId, &UniqueChallengeId, 0xC );

	this->ProcessEvent ( pFnGetChallengeFileList, &GetChallengeFileList_Parms, NULL );

	if ( OutChallengeFiles )
		memcpy ( OutChallengeFiles, &GetChallengeFileList_Parms.OutChallengeFiles, 0xC );
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] 
// Parameters infos:
// TArray< struct FMcpClashMobChallengeEvent > OutChallengeEvents             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpClashMobManager::GetChallengeList ( TArray< struct FMcpClashMobChallengeEvent >* OutChallengeEvents )
{
	static UFunction* pFnGetChallengeList = NULL;

	if ( ! pFnGetChallengeList )
		pFnGetChallengeList = (UFunction*) UObject::GObjObjects()->Data[ 37984 ];

	UMcpClashMobManager_execGetChallengeList_Parms GetChallengeList_Parms;

	this->ProcessEvent ( pFnGetChallengeList, &GetChallengeList_Parms, NULL );

	if ( OutChallengeEvents )
		memcpy ( OutChallengeEvents, &GetChallengeList_Parms.OutChallengeEvents, 0xC );
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpClashMobManager::OnQueryChallengeListHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryChallengeListHTTPRequestComplete = NULL;

	if ( ! pFnOnQueryChallengeListHTTPRequestComplete )
		pFnOnQueryChallengeListHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 37977 ];

	UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Parms OnQueryChallengeListHTTPRequestComplete_Parms;
	OnQueryChallengeListHTTPRequestComplete_Parms.Request = Request;
	OnQueryChallengeListHTTPRequestComplete_Parms.Response = Response;
	OnQueryChallengeListHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryChallengeListHTTPRequestComplete, &OnQueryChallengeListHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] 
// Parameters infos:

void UMcpClashMobManager::QueryChallengeList ( )
{
	static UFunction* pFnQueryChallengeList = NULL;

	if ( ! pFnQueryChallengeList )
		pFnQueryChallengeList = (UFunction*) UObject::GObjObjects()->Data[ 37973 ];

	UMcpClashMobManager_execQueryChallengeList_Parms QueryChallengeList_Parms;

	this->ProcessEvent ( pFnQueryChallengeList, &QueryChallengeList_Parms, NULL );
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] 
// Parameters infos:

void UMcpClashMobManager::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37972 ];

	UMcpClashMobManager_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnAcceptGroupInviteComplete ( struct FString GroupId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnAcceptGroupInviteComplete = NULL;

	if ( ! pFnOnAcceptGroupInviteComplete )
		pFnOnAcceptGroupInviteComplete = (UFunction*) UObject::GObjObjects()->Data[ 38242 ];

	UMcpGroupsBase_execOnAcceptGroupInviteComplete_Parms OnAcceptGroupInviteComplete_Parms;
	memcpy ( &OnAcceptGroupInviteComplete_Parms.GroupId, &GroupId, 0xC );
	OnAcceptGroupInviteComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAcceptGroupInviteComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnAcceptGroupInviteComplete, &OnAcceptGroupInviteComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldAccept                  ( CPF_Parm )

void UMcpGroupsBase::AcceptGroupInvite ( struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept )
{
	static UFunction* pFnAcceptGroupInvite = NULL;

	if ( ! pFnAcceptGroupInvite )
		pFnAcceptGroupInvite = (UFunction*) UObject::GObjObjects()->Data[ 38238 ];

	UMcpGroupsBase_execAcceptGroupInvite_Parms AcceptGroupInvite_Parms;
	memcpy ( &AcceptGroupInvite_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &AcceptGroupInvite_Parms.GroupId, &GroupId, 0xC );
	AcceptGroupInvite_Parms.bShouldAccept = bShouldAccept;

	this->ProcessEvent ( pFnAcceptGroupInvite, &AcceptGroupInvite_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420000] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpGroupList           InviteList                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsBase::GetGroupInviteList ( struct FString UserId, struct FMcpGroupList* InviteList )
{
	static UFunction* pFnGetGroupInviteList = NULL;

	if ( ! pFnGetGroupInviteList )
		pFnGetGroupInviteList = (UFunction*) UObject::GObjObjects()->Data[ 38235 ];

	UMcpGroupsBase_execGetGroupInviteList_Parms GetGroupInviteList_Parms;
	memcpy ( &GetGroupInviteList_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnGetGroupInviteList, &GetGroupInviteList_Parms, NULL );

	if ( InviteList )
		memcpy ( InviteList, &GetGroupInviteList_Parms.InviteList, 0x18 );
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnQueryGroupInvitesComplete ( unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryGroupInvitesComplete = NULL;

	if ( ! pFnOnQueryGroupInvitesComplete )
		pFnOnQueryGroupInvitesComplete = (UFunction*) UObject::GObjObjects()->Data[ 38232 ];

	UMcpGroupsBase_execOnQueryGroupInvitesComplete_Parms OnQueryGroupInvitesComplete_Parms;
	OnQueryGroupInvitesComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryGroupInvitesComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryGroupInvitesComplete, &OnQueryGroupInvitesComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::QueryGroupInvites ( struct FString UniqueUserId )
{
	static UFunction* pFnQueryGroupInvites = NULL;

	if ( ! pFnQueryGroupInvites )
		pFnQueryGroupInvites = (UFunction*) UObject::GObjObjects()->Data[ 38230 ];

	UMcpGroupsBase_execQueryGroupInvites_Parms QueryGroupInvites_Parms;
	memcpy ( &QueryGroupInvites_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnQueryGroupInvites, &QueryGroupInvites_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 RequesterId                    ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnDeleteAllGroupsComplete ( struct FString RequesterId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteAllGroupsComplete = NULL;

	if ( ! pFnOnDeleteAllGroupsComplete )
		pFnOnDeleteAllGroupsComplete = (UFunction*) UObject::GObjObjects()->Data[ 38226 ];

	UMcpGroupsBase_execOnDeleteAllGroupsComplete_Parms OnDeleteAllGroupsComplete_Parms;
	memcpy ( &OnDeleteAllGroupsComplete_Parms.RequesterId, &RequesterId, 0xC );
	OnDeleteAllGroupsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteAllGroupsComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteAllGroupsComplete, &OnDeleteAllGroupsComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] 
// Parameters infos:
// struct FString                 OwnerId                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::DeleteAllGroups ( struct FString OwnerId )
{
	static UFunction* pFnDeleteAllGroups = NULL;

	if ( ! pFnDeleteAllGroups )
		pFnDeleteAllGroups = (UFunction*) UObject::GObjObjects()->Data[ 38224 ];

	UMcpGroupsBase_execDeleteAllGroups_Parms DeleteAllGroups_Parms;
	memcpy ( &DeleteAllGroups_Parms.OwnerId, &OwnerId, 0xC );

	this->ProcessEvent ( pFnDeleteAllGroups, &DeleteAllGroups_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnRemoveGroupMembersComplete ( struct FString GroupId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnRemoveGroupMembersComplete = NULL;

	if ( ! pFnOnRemoveGroupMembersComplete )
		pFnOnRemoveGroupMembersComplete = (UFunction*) UObject::GObjObjects()->Data[ 38220 ];

	UMcpGroupsBase_execOnRemoveGroupMembersComplete_Parms OnRemoveGroupMembersComplete_Parms;
	memcpy ( &OnRemoveGroupMembersComplete_Parms.GroupId, &GroupId, 0xC );
	OnRemoveGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnRemoveGroupMembersComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnRemoveGroupMembersComplete, &OnRemoveGroupMembersComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] 
// Parameters infos:
// struct FString                 OwnerId                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       MemberIds                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsBase::RemoveGroupMembers ( struct FString OwnerId, struct FString GroupId, TArray< struct FString >* MemberIds )
{
	static UFunction* pFnRemoveGroupMembers = NULL;

	if ( ! pFnRemoveGroupMembers )
		pFnRemoveGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38215 ];

	UMcpGroupsBase_execRemoveGroupMembers_Parms RemoveGroupMembers_Parms;
	memcpy ( &RemoveGroupMembers_Parms.OwnerId, &OwnerId, 0xC );
	memcpy ( &RemoveGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnRemoveGroupMembers, &RemoveGroupMembers_Parms, NULL );

	if ( MemberIds )
		memcpy ( MemberIds, &RemoveGroupMembers_Parms.MemberIds, 0xC );
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnAddGroupMembersComplete ( struct FString GroupId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnAddGroupMembersComplete = NULL;

	if ( ! pFnOnAddGroupMembersComplete )
		pFnOnAddGroupMembersComplete = (UFunction*) UObject::GObjObjects()->Data[ 38211 ];

	UMcpGroupsBase_execOnAddGroupMembersComplete_Parms OnAddGroupMembersComplete_Parms;
	memcpy ( &OnAddGroupMembersComplete_Parms.GroupId, &GroupId, 0xC );
	OnAddGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAddGroupMembersComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnAddGroupMembersComplete, &OnAddGroupMembersComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] 
// Parameters infos:
// struct FString                 OwnerId                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bRequiresAcceptance            ( CPF_Parm )
// TArray< struct FString >       MemberIds                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsBase::AddGroupMembers ( struct FString OwnerId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray< struct FString >* MemberIds )
{
	static UFunction* pFnAddGroupMembers = NULL;

	if ( ! pFnAddGroupMembers )
		pFnAddGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38205 ];

	UMcpGroupsBase_execAddGroupMembers_Parms AddGroupMembers_Parms;
	memcpy ( &AddGroupMembers_Parms.OwnerId, &OwnerId, 0xC );
	memcpy ( &AddGroupMembers_Parms.GroupId, &GroupId, 0xC );
	AddGroupMembers_Parms.bRequiresAcceptance = bRequiresAcceptance;

	this->ProcessEvent ( pFnAddGroupMembers, &AddGroupMembers_Parms, NULL );

	if ( MemberIds )
		memcpy ( MemberIds, &AddGroupMembers_Parms.MemberIds, 0xC );
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpGroupMember > GroupMembers                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsBase::GetGroupMembers ( struct FString GroupId, TArray< struct FMcpGroupMember >* GroupMembers )
{
	static UFunction* pFnGetGroupMembers = NULL;

	if ( ! pFnGetGroupMembers )
		pFnGetGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38201 ];

	UMcpGroupsBase_execGetGroupMembers_Parms GetGroupMembers_Parms;
	memcpy ( &GetGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnGetGroupMembers, &GetGroupMembers_Parms, NULL );

	if ( GroupMembers )
		memcpy ( GroupMembers, &GetGroupMembers_Parms.GroupMembers, 0xC );
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnQueryGroupMembersComplete ( struct FString GroupId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryGroupMembersComplete = NULL;

	if ( ! pFnOnQueryGroupMembersComplete )
		pFnOnQueryGroupMembersComplete = (UFunction*) UObject::GObjObjects()->Data[ 38197 ];

	UMcpGroupsBase_execOnQueryGroupMembersComplete_Parms OnQueryGroupMembersComplete_Parms;
	memcpy ( &OnQueryGroupMembersComplete_Parms.GroupId, &GroupId, 0xC );
	OnQueryGroupMembersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryGroupMembersComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryGroupMembersComplete, &OnQueryGroupMembersComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::QueryGroupMembers ( struct FString UniqueUserId, struct FString GroupId )
{
	static UFunction* pFnQueryGroupMembers = NULL;

	if ( ! pFnQueryGroupMembers )
		pFnQueryGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38194 ];

	UMcpGroupsBase_execQueryGroupMembers_Parms QueryGroupMembers_Parms;
	memcpy ( &QueryGroupMembers_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &QueryGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnQueryGroupMembers, &QueryGroupMembers_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpGroupList           GroupList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsBase::GetGroupList ( struct FString UserId, struct FMcpGroupList* GroupList )
{
	static UFunction* pFnGetGroupList = NULL;

	if ( ! pFnGetGroupList )
		pFnGetGroupList = (UFunction*) UObject::GObjObjects()->Data[ 38191 ];

	UMcpGroupsBase_execGetGroupList_Parms GetGroupList_Parms;
	memcpy ( &GetGroupList_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnGetGroupList, &GetGroupList_Parms, NULL );

	if ( GroupList )
		memcpy ( GroupList, &GetGroupList_Parms.GroupList, 0x18 );
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnQueryGroupsComplete ( struct FString UserId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryGroupsComplete = NULL;

	if ( ! pFnOnQueryGroupsComplete )
		pFnOnQueryGroupsComplete = (UFunction*) UObject::GObjObjects()->Data[ 38187 ];

	UMcpGroupsBase_execOnQueryGroupsComplete_Parms OnQueryGroupsComplete_Parms;
	memcpy ( &OnQueryGroupsComplete_Parms.UserId, &UserId, 0xC );
	OnQueryGroupsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryGroupsComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryGroupsComplete, &OnQueryGroupsComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] 
// Parameters infos:
// struct FString                 RequesterId                    ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::QueryGroups ( struct FString RequesterId )
{
	static UFunction* pFnQueryGroups = NULL;

	if ( ! pFnQueryGroups )
		pFnQueryGroups = (UFunction*) UObject::GObjObjects()->Data[ 38185 ];

	UMcpGroupsBase_execQueryGroups_Parms QueryGroups_Parms;
	memcpy ( &QueryGroups_Parms.RequesterId, &RequesterId, 0xC );

	this->ProcessEvent ( pFnQueryGroups, &QueryGroups_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnDeleteGroupComplete ( struct FString GroupId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteGroupComplete = NULL;

	if ( ! pFnOnDeleteGroupComplete )
		pFnOnDeleteGroupComplete = (UFunction*) UObject::GObjObjects()->Data[ 38181 ];

	UMcpGroupsBase_execOnDeleteGroupComplete_Parms OnDeleteGroupComplete_Parms;
	memcpy ( &OnDeleteGroupComplete_Parms.GroupId, &GroupId, 0xC );
	OnDeleteGroupComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteGroupComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteGroupComplete, &OnDeleteGroupComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::DeleteGroup ( struct FString UniqueUserId, struct FString GroupId )
{
	static UFunction* pFnDeleteGroup = NULL;

	if ( ! pFnDeleteGroup )
		pFnDeleteGroup = (UFunction*) UObject::GObjObjects()->Data[ 38178 ];

	UMcpGroupsBase_execDeleteGroup_Parms DeleteGroup_Parms;
	memcpy ( &DeleteGroup_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &DeleteGroup_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnDeleteGroup, &DeleteGroup_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120000] 
// Parameters infos:
// struct FMcpGroup               Group                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::OnCreateGroupComplete ( struct FMcpGroup Group, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnCreateGroupComplete = NULL;

	if ( ! pFnOnCreateGroupComplete )
		pFnOnCreateGroupComplete = (UFunction*) UObject::GObjObjects()->Data[ 38174 ];

	UMcpGroupsBase_execOnCreateGroupComplete_Parms OnCreateGroupComplete_Parms;
	memcpy ( &OnCreateGroupComplete_Parms.Group, &Group, 0x34 );
	OnCreateGroupComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateGroupComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateGroupComplete, &OnCreateGroupComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] 
// Parameters infos:
// struct FString                 OwnerId                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsBase::CreateGroup ( struct FString OwnerId, struct FString GroupName )
{
	static UFunction* pFnCreateGroup = NULL;

	if ( ! pFnCreateGroup )
		pFnCreateGroup = (UFunction*) UObject::GObjObjects()->Data[ 38171 ];

	UMcpGroupsBase_execCreateGroup_Parms CreateGroup_Parms;
	memcpy ( &CreateGroup_Parms.OwnerId, &OwnerId, 0xC );
	memcpy ( &CreateGroup_Parms.GroupName, &GroupName, 0xC );

	this->ProcessEvent ( pFnCreateGroup, &CreateGroup_Parms, NULL );
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpGroupsBase*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpGroupsBase* UMcpGroupsBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 38167 ];

	UMcpGroupsBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820002] 
// Parameters infos:
// struct FString                 MemberId                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  AcceptState                    ( CPF_Parm )

void UMcpGroupsManager::CacheGroupMember ( struct FString MemberId, struct FString GroupId, unsigned char AcceptState )
{
	static UFunction* pFnCacheGroupMember = NULL;

	if ( ! pFnCacheGroupMember )
		pFnCacheGroupMember = (UFunction*) UObject::GObjObjects()->Data[ 38407 ];

	UMcpGroupsManager_execCacheGroupMember_Parms CacheGroupMember_Parms;
	memcpy ( &CacheGroupMember_Parms.MemberId, &MemberId, 0xC );
	memcpy ( &CacheGroupMember_Parms.GroupId, &GroupId, 0xC );
	CacheGroupMember_Parms.AcceptState = AcceptState;

	this->ProcessEvent ( pFnCacheGroupMember, &CacheGroupMember_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820002] 
// Parameters infos:
// struct FString                 RequesterId                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpGroup               Group                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::CacheGroup ( struct FString RequesterId, struct FMcpGroup Group )
{
	static UFunction* pFnCacheGroup = NULL;

	if ( ! pFnCacheGroup )
		pFnCacheGroup = (UFunction*) UObject::GObjObjects()->Data[ 38399 ];

	UMcpGroupsManager_execCacheGroup_Parms CacheGroup_Parms;
	memcpy ( &CacheGroup_Parms.RequesterId, &RequesterId, 0xC );
	memcpy ( &CacheGroup_Parms.Group, &Group, 0x34 );

	this->ProcessEvent ( pFnCacheGroup, &CacheGroup_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnAcceptGroupInviteRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAcceptGroupInviteRequestComplete = NULL;

	if ( ! pFnOnAcceptGroupInviteRequestComplete )
		pFnOnAcceptGroupInviteRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38260 ];

	UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Parms OnAcceptGroupInviteRequestComplete_Parms;
	OnAcceptGroupInviteRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnAcceptGroupInviteRequestComplete_Parms.HttpResponse = HttpResponse;
	OnAcceptGroupInviteRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAcceptGroupInviteRequestComplete, &OnAcceptGroupInviteRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldAccept                  ( CPF_Parm )

void UMcpGroupsManager::AcceptGroupInvite ( struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept )
{
	static UFunction* pFnAcceptGroupInvite = NULL;

	if ( ! pFnAcceptGroupInvite )
		pFnAcceptGroupInvite = (UFunction*) UObject::GObjObjects()->Data[ 38387 ];

	UMcpGroupsManager_execAcceptGroupInvite_Parms AcceptGroupInvite_Parms;
	memcpy ( &AcceptGroupInvite_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &AcceptGroupInvite_Parms.GroupId, &GroupId, 0xC );
	AcceptGroupInvite_Parms.bShouldAccept = bShouldAccept;

	this->ProcessEvent ( pFnAcceptGroupInvite, &AcceptGroupInvite_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnDeleteAllGroupsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteAllGroupsRequestComplete = NULL;

	if ( ! pFnOnDeleteAllGroupsRequestComplete )
		pFnOnDeleteAllGroupsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38380 ];

	UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Parms OnDeleteAllGroupsRequestComplete_Parms;
	OnDeleteAllGroupsRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnDeleteAllGroupsRequestComplete_Parms.HttpResponse = HttpResponse;
	OnDeleteAllGroupsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteAllGroupsRequestComplete, &OnDeleteAllGroupsRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::DeleteAllGroups ( struct FString UniqueUserId )
{
	static UFunction* pFnDeleteAllGroups = NULL;

	if ( ! pFnDeleteAllGroups )
		pFnDeleteAllGroups = (UFunction*) UObject::GObjObjects()->Data[ 38376 ];

	UMcpGroupsManager_execDeleteAllGroups_Parms DeleteAllGroups_Parms;
	memcpy ( &DeleteAllGroups_Parms.UniqueUserId, &UniqueUserId, 0xC );

	this->ProcessEvent ( pFnDeleteAllGroups, &DeleteAllGroups_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnRemoveGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRemoveGroupMembersRequestComplete = NULL;

	if ( ! pFnOnRemoveGroupMembersRequestComplete )
		pFnOnRemoveGroupMembersRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38369 ];

	UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Parms OnRemoveGroupMembersRequestComplete_Parms;
	OnRemoveGroupMembersRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnRemoveGroupMembersRequestComplete_Parms.HttpResponse = HttpResponse;
	OnRemoveGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRemoveGroupMembersRequestComplete, &OnRemoveGroupMembersRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       MemberIds                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsManager::RemoveGroupMembers ( struct FString UniqueUserId, struct FString GroupId, TArray< struct FString >* MemberIds )
{
	static UFunction* pFnRemoveGroupMembers = NULL;

	if ( ! pFnRemoveGroupMembers )
		pFnRemoveGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38360 ];

	UMcpGroupsManager_execRemoveGroupMembers_Parms RemoveGroupMembers_Parms;
	memcpy ( &RemoveGroupMembers_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &RemoveGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnRemoveGroupMembers, &RemoveGroupMembers_Parms, NULL );

	if ( MemberIds )
		memcpy ( MemberIds, &RemoveGroupMembers_Parms.MemberIds, 0xC );
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnAddGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddGroupMembersRequestComplete = NULL;

	if ( ! pFnOnAddGroupMembersRequestComplete )
		pFnOnAddGroupMembersRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38262 ];

	UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Parms OnAddGroupMembersRequestComplete_Parms;
	OnAddGroupMembersRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnAddGroupMembersRequestComplete_Parms.HttpResponse = HttpResponse;
	OnAddGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddGroupMembersRequestComplete, &OnAddGroupMembersRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bRequiresAcceptance            ( CPF_Parm )
// TArray< struct FString >       MemberIds                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsManager::AddGroupMembers ( struct FString UniqueUserId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray< struct FString >* MemberIds )
{
	static UFunction* pFnAddGroupMembers = NULL;

	if ( ! pFnAddGroupMembers )
		pFnAddGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38344 ];

	UMcpGroupsManager_execAddGroupMembers_Parms AddGroupMembers_Parms;
	memcpy ( &AddGroupMembers_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &AddGroupMembers_Parms.GroupId, &GroupId, 0xC );
	AddGroupMembers_Parms.bRequiresAcceptance = bRequiresAcceptance;

	this->ProcessEvent ( pFnAddGroupMembers, &AddGroupMembers_Parms, NULL );

	if ( MemberIds )
		memcpy ( MemberIds, &AddGroupMembers_Parms.MemberIds, 0xC );
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] 
// Parameters infos:
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpGroupMember > GroupMembers                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsManager::GetGroupMembers ( struct FString GroupId, TArray< struct FMcpGroupMember >* GroupMembers )
{
	static UFunction* pFnGetGroupMembers = NULL;

	if ( ! pFnGetGroupMembers )
		pFnGetGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38337 ];

	UMcpGroupsManager_execGetGroupMembers_Parms GetGroupMembers_Parms;
	memcpy ( &GetGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnGetGroupMembers, &GetGroupMembers_Parms, NULL );

	if ( GroupMembers )
		memcpy ( GroupMembers, &GetGroupMembers_Parms.GroupMembers, 0xC );
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnQueryGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryGroupMembersRequestComplete = NULL;

	if ( ! pFnOnQueryGroupMembersRequestComplete )
		pFnOnQueryGroupMembersRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38264 ];

	UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Parms OnQueryGroupMembersRequestComplete_Parms;
	OnQueryGroupMembersRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnQueryGroupMembersRequestComplete_Parms.HttpResponse = HttpResponse;
	OnQueryGroupMembersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryGroupMembersRequestComplete, &OnQueryGroupMembersRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::QueryGroupMembers ( struct FString UniqueUserId, struct FString GroupId )
{
	static UFunction* pFnQueryGroupMembers = NULL;

	if ( ! pFnQueryGroupMembers )
		pFnQueryGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 38321 ];

	UMcpGroupsManager_execQueryGroupMembers_Parms QueryGroupMembers_Parms;
	memcpy ( &QueryGroupMembers_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &QueryGroupMembers_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnQueryGroupMembers, &QueryGroupMembers_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] 
// Parameters infos:
// struct FString                 UserId                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpGroupList           GroupList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpGroupsManager::GetGroupList ( struct FString UserId, struct FMcpGroupList* GroupList )
{
	static UFunction* pFnGetGroupList = NULL;

	if ( ! pFnGetGroupList )
		pFnGetGroupList = (UFunction*) UObject::GObjObjects()->Data[ 38317 ];

	UMcpGroupsManager_execGetGroupList_Parms GetGroupList_Parms;
	memcpy ( &GetGroupList_Parms.UserId, &UserId, 0xC );

	this->ProcessEvent ( pFnGetGroupList, &GetGroupList_Parms, NULL );

	if ( GroupList )
		memcpy ( GroupList, &GetGroupList_Parms.GroupList, 0x18 );
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnQueryGroupsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryGroupsRequestComplete = NULL;

	if ( ! pFnOnQueryGroupsRequestComplete )
		pFnOnQueryGroupsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38266 ];

	UMcpGroupsManager_execOnQueryGroupsRequestComplete_Parms OnQueryGroupsRequestComplete_Parms;
	OnQueryGroupsRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnQueryGroupsRequestComplete_Parms.HttpResponse = HttpResponse;
	OnQueryGroupsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryGroupsRequestComplete, &OnQueryGroupsRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] 
// Parameters infos:
// struct FString                 RequesterId                    ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::QueryGroups ( struct FString RequesterId )
{
	static UFunction* pFnQueryGroups = NULL;

	if ( ! pFnQueryGroups )
		pFnQueryGroups = (UFunction*) UObject::GObjObjects()->Data[ 38303 ];

	UMcpGroupsManager_execQueryGroups_Parms QueryGroups_Parms;
	memcpy ( &QueryGroups_Parms.RequesterId, &RequesterId, 0xC );

	this->ProcessEvent ( pFnQueryGroups, &QueryGroups_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnDeleteGroupRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteGroupRequestComplete = NULL;

	if ( ! pFnOnDeleteGroupRequestComplete )
		pFnOnDeleteGroupRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38296 ];

	UMcpGroupsManager_execOnDeleteGroupRequestComplete_Parms OnDeleteGroupRequestComplete_Parms;
	OnDeleteGroupRequestComplete_Parms.OriginalRequest = OriginalRequest;
	OnDeleteGroupRequestComplete_Parms.HttpResponse = HttpResponse;
	OnDeleteGroupRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteGroupRequestComplete, &OnDeleteGroupRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupId                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::DeleteGroup ( struct FString UniqueUserId, struct FString GroupId )
{
	static UFunction* pFnDeleteGroup = NULL;

	if ( ! pFnDeleteGroup )
		pFnDeleteGroup = (UFunction*) UObject::GObjObjects()->Data[ 38291 ];

	UMcpGroupsManager_execDeleteGroup_Parms DeleteGroup_Parms;
	memcpy ( &DeleteGroup_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &DeleteGroup_Parms.GroupId, &GroupId, 0xC );

	this->ProcessEvent ( pFnDeleteGroup, &DeleteGroup_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820002] 
// Parameters infos:
// class UHttpRequestInterface*   CreateGroupRequest             ( CPF_Parm )
// class UHttpResponseInterface*  HttpResponse                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpGroupsManager::OnCreateGroupRequestComplete ( class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateGroupRequestComplete = NULL;

	if ( ! pFnOnCreateGroupRequestComplete )
		pFnOnCreateGroupRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38282 ];

	UMcpGroupsManager_execOnCreateGroupRequestComplete_Parms OnCreateGroupRequestComplete_Parms;
	OnCreateGroupRequestComplete_Parms.CreateGroupRequest = CreateGroupRequest;
	OnCreateGroupRequestComplete_Parms.HttpResponse = HttpResponse;
	OnCreateGroupRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateGroupRequestComplete, &OnCreateGroupRequestComplete_Parms, NULL );
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] 
// Parameters infos:
// struct FString                 UniqueUserId                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GroupName                      ( CPF_Parm | CPF_NeedCtorLink )

void UMcpGroupsManager::CreateGroup ( struct FString UniqueUserId, struct FString GroupName )
{
	static UFunction* pFnCreateGroup = NULL;

	if ( ! pFnCreateGroup )
		pFnCreateGroup = (UFunction*) UObject::GObjObjects()->Data[ 38276 ];

	UMcpGroupsManager_execCreateGroup_Parms CreateGroup_Parms;
	memcpy ( &CreateGroup_Parms.UniqueUserId, &UniqueUserId, 0xC );
	memcpy ( &CreateGroup_Parms.GroupName, &GroupName, 0xC );

	this->ProcessEvent ( pFnCreateGroup, &CreateGroup_Parms, NULL );
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] 
// Parameters infos:
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpIdMapping > IDMappings                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpIdMappingBase::GetIdMappings ( struct FString ExternalType, TArray< struct FMcpIdMapping >* IDMappings )
{
	static UFunction* pFnGetIdMappings = NULL;

	if ( ! pFnGetIdMappings )
		pFnGetIdMappings = (UFunction*) UObject::GObjObjects()->Data[ 38448 ];

	UMcpIdMappingBase_execGetIdMappings_Parms GetIdMappings_Parms;
	memcpy ( &GetIdMappings_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnGetIdMappings, &GetIdMappings_Parms, NULL );

	if ( IDMappings )
		memcpy ( IDMappings, &GetIdMappings_Parms.IDMappings, 0xC );
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpIdMappingBase::OnQueryMappingsComplete ( struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryMappingsComplete = NULL;

	if ( ! pFnOnQueryMappingsComplete )
		pFnOnQueryMappingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 38420 ];

	UMcpIdMappingBase_execOnQueryMappingsComplete_Parms OnQueryMappingsComplete_Parms;
	memcpy ( &OnQueryMappingsComplete_Parms.ExternalType, &ExternalType, 0xC );
	OnQueryMappingsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryMappingsComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryMappingsComplete, &OnQueryMappingsComplete_Parms, NULL );
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] 
// Parameters infos:
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       ExternalIds                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpIdMappingBase::QueryMappings ( struct FString ExternalType, TArray< struct FString >* ExternalIds )
{
	static UFunction* pFnQueryMappings = NULL;

	if ( ! pFnQueryMappings )
		pFnQueryMappings = (UFunction*) UObject::GObjObjects()->Data[ 38441 ];

	UMcpIdMappingBase_execQueryMappings_Parms QueryMappings_Parms;
	memcpy ( &QueryMappings_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnQueryMappings, &QueryMappings_Parms, NULL );

	if ( ExternalIds )
		memcpy ( ExternalIds, &QueryMappings_Parms.ExternalIds, 0xC );
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpIdMappingBase::OnAddMappingComplete ( struct FString McpId, struct FString ExternalId, struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnAddMappingComplete = NULL;

	if ( ! pFnOnAddMappingComplete )
		pFnOnAddMappingComplete = (UFunction*) UObject::GObjObjects()->Data[ 38422 ];

	UMcpIdMappingBase_execOnAddMappingComplete_Parms OnAddMappingComplete_Parms;
	memcpy ( &OnAddMappingComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnAddMappingComplete_Parms.ExternalId, &ExternalId, 0xC );
	memcpy ( &OnAddMappingComplete_Parms.ExternalType, &ExternalType, 0xC );
	OnAddMappingComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAddMappingComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnAddMappingComplete, &OnAddMappingComplete_Parms, NULL );
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpIdMappingBase::AddMapping ( struct FString McpId, struct FString ExternalId, struct FString ExternalType )
{
	static UFunction* pFnAddMapping = NULL;

	if ( ! pFnAddMapping )
		pFnAddMapping = (UFunction*) UObject::GObjObjects()->Data[ 38432 ];

	UMcpIdMappingBase_execAddMapping_Parms AddMapping_Parms;
	memcpy ( &AddMapping_Parms.McpId, &McpId, 0xC );
	memcpy ( &AddMapping_Parms.ExternalId, &ExternalId, 0xC );
	memcpy ( &AddMapping_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnAddMapping, &AddMapping_Parms, NULL );
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpIdMappingBase*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpIdMappingBase* UMcpIdMappingBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 38428 ];

	UMcpIdMappingBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] 
// Parameters infos:
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpIdMapping > IDMappings                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpIdMappingManager::GetIdMappings ( struct FString ExternalType, TArray< struct FMcpIdMapping >* IDMappings )
{
	static UFunction* pFnGetIdMappings = NULL;

	if ( ! pFnGetIdMappings )
		pFnGetIdMappings = (UFunction*) UObject::GObjObjects()->Data[ 38509 ];

	UMcpIdMappingManager_execGetIdMappings_Parms GetIdMappings_Parms;
	memcpy ( &GetIdMappings_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnGetIdMappings, &GetIdMappings_Parms, NULL );

	if ( IDMappings )
		memcpy ( IDMappings, &GetIdMappings_Parms.IDMappings, 0xC );
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpIdMappingManager::OnQueryMappingsRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryMappingsRequestComplete = NULL;

	if ( ! pFnOnQueryMappingsRequestComplete )
		pFnOnQueryMappingsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38494 ];

	UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Parms OnQueryMappingsRequestComplete_Parms;
	OnQueryMappingsRequestComplete_Parms.Request = Request;
	OnQueryMappingsRequestComplete_Parms.Response = Response;
	OnQueryMappingsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryMappingsRequestComplete, &OnQueryMappingsRequestComplete_Parms, NULL );
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] 
// Parameters infos:
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       ExternalIds                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpIdMappingManager::QueryMappings ( struct FString ExternalType, TArray< struct FString >* ExternalIds )
{
	static UFunction* pFnQueryMappings = NULL;

	if ( ! pFnQueryMappings )
		pFnQueryMappings = (UFunction*) UObject::GObjObjects()->Data[ 38484 ];

	UMcpIdMappingManager_execQueryMappings_Parms QueryMappings_Parms;
	memcpy ( &QueryMappings_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnQueryMappings, &QueryMappings_Parms, NULL );

	if ( ExternalIds )
		memcpy ( ExternalIds, &QueryMappings_Parms.ExternalIds, 0xC );
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpIdMappingManager::OnAddMappingRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddMappingRequestComplete = NULL;

	if ( ! pFnOnAddMappingRequestComplete )
		pFnOnAddMappingRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38477 ];

	UMcpIdMappingManager_execOnAddMappingRequestComplete_Parms OnAddMappingRequestComplete_Parms;
	OnAddMappingRequestComplete_Parms.Request = Request;
	OnAddMappingRequestComplete_Parms.Response = Response;
	OnAddMappingRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddMappingRequestComplete, &OnAddMappingRequestComplete_Parms, NULL );
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ExternalType                   ( CPF_Parm | CPF_NeedCtorLink )

void UMcpIdMappingManager::AddMapping ( struct FString McpId, struct FString ExternalId, struct FString ExternalType )
{
	static UFunction* pFnAddMapping = NULL;

	if ( ! pFnAddMapping )
		pFnAddMapping = (UFunction*) UObject::GObjObjects()->Data[ 38470 ];

	UMcpIdMappingManager_execAddMapping_Parms AddMapping_Parms;
	memcpy ( &AddMapping_Parms.McpId, &McpId, 0xC );
	memcpy ( &AddMapping_Parms.ExternalId, &ExternalId, 0xC );
	memcpy ( &AddMapping_Parms.ExternalType, &ExternalType, 0xC );

	this->ProcessEvent ( pFnAddMapping, &AddMapping_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::OnDeleteValueComplete ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteValueComplete = NULL;

	if ( ! pFnOnDeleteValueComplete )
		pFnOnDeleteValueComplete = (UFunction*) UObject::GObjObjects()->Data[ 38518 ];

	UMcpManagedValueManagerBase_execOnDeleteValueComplete_Parms OnDeleteValueComplete_Parms;
	memcpy ( &OnDeleteValueComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnDeleteValueComplete_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &OnDeleteValueComplete_Parms.ValueId, &ValueId, 0x8 );
	OnDeleteValueComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteValueComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteValueComplete, &OnDeleteValueComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )

void UMcpManagedValueManagerBase::DeleteValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId )
{
	static UFunction* pFnDeleteValue = NULL;

	if ( ! pFnDeleteValue )
		pFnDeleteValue = (UFunction*) UObject::GObjObjects()->Data[ 38573 ];

	UMcpManagedValueManagerBase_execDeleteValue_Parms DeleteValue_Parms;
	memcpy ( &DeleteValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &DeleteValue_Parms.ValueId, &ValueId, 0x8 );

	this->ProcessEvent ( pFnDeleteValue, &DeleteValue_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )
// int                            Value                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::OnUpdateValueComplete ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnUpdateValueComplete = NULL;

	if ( ! pFnOnUpdateValueComplete )
		pFnOnUpdateValueComplete = (UFunction*) UObject::GObjObjects()->Data[ 38520 ];

	UMcpManagedValueManagerBase_execOnUpdateValueComplete_Parms OnUpdateValueComplete_Parms;
	memcpy ( &OnUpdateValueComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnUpdateValueComplete_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &OnUpdateValueComplete_Parms.ValueId, &ValueId, 0x8 );
	OnUpdateValueComplete_Parms.Value = Value;
	OnUpdateValueComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnUpdateValueComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnUpdateValueComplete, &OnUpdateValueComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )
// int                            Value                          ( CPF_Parm )

void UMcpManagedValueManagerBase::UpdateValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value )
{
	static UFunction* pFnUpdateValue = NULL;

	if ( ! pFnUpdateValue )
		pFnUpdateValue = (UFunction*) UObject::GObjObjects()->Data[ 38562 ];

	UMcpManagedValueManagerBase_execUpdateValue_Parms UpdateValue_Parms;
	memcpy ( &UpdateValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &UpdateValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &UpdateValue_Parms.ValueId, &ValueId, 0x8 );
	UpdateValue_Parms.Value = Value;

	this->ProcessEvent ( pFnUpdateValue, &UpdateValue_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )

int UMcpManagedValueManagerBase::GetValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 38557 ];

	UMcpManagedValueManagerBase_execGetValue_Parms GetValue_Parms;
	memcpy ( &GetValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &GetValue_Parms.ValueId, &ValueId, 0x8 );

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	return GetValue_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] 
// Parameters infos:
// TArray< struct FManagedValue > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FManagedValue > UMcpManagedValueManagerBase::GetValues ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnGetValues = NULL;

	if ( ! pFnGetValues )
		pFnGetValues = (UFunction*) UObject::GObjObjects()->Data[ 38552 ];

	UMcpManagedValueManagerBase_execGetValues_Parms GetValues_Parms;
	memcpy ( &GetValues_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetValues_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnGetValues, &GetValues_Parms, NULL );

	return GetValues_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::OnReadSaveSlotComplete ( struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnReadSaveSlotComplete = NULL;

	if ( ! pFnOnReadSaveSlotComplete )
		pFnOnReadSaveSlotComplete = (UFunction*) UObject::GObjObjects()->Data[ 38522 ];

	UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Parms OnReadSaveSlotComplete_Parms;
	memcpy ( &OnReadSaveSlotComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnReadSaveSlotComplete_Parms.SaveSlot, &SaveSlot, 0xC );
	OnReadSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadSaveSlotComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnReadSaveSlotComplete, &OnReadSaveSlotComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::ReadSaveSlot ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnReadSaveSlot = NULL;

	if ( ! pFnReadSaveSlot )
		pFnReadSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 38545 ];

	UMcpManagedValueManagerBase_execReadSaveSlot_Parms ReadSaveSlot_Parms;
	memcpy ( &ReadSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &ReadSaveSlot_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnReadSaveSlot, &ReadSaveSlot_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::OnCreateSaveSlotComplete ( struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnCreateSaveSlotComplete = NULL;

	if ( ! pFnOnCreateSaveSlotComplete )
		pFnOnCreateSaveSlotComplete = (UFunction*) UObject::GObjObjects()->Data[ 38524 ];

	UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Parms OnCreateSaveSlotComplete_Parms;
	memcpy ( &OnCreateSaveSlotComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnCreateSaveSlotComplete_Parms.SaveSlot, &SaveSlot, 0xC );
	OnCreateSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateSaveSlotComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManagerBase::CreateSaveSlot ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnCreateSaveSlot = NULL;

	if ( ! pFnCreateSaveSlot )
		pFnCreateSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 38538 ];

	UMcpManagedValueManagerBase_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy ( &CreateSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnCreateSaveSlot, &CreateSaveSlot_Parms, NULL );
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpManagedValueManagerBase* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpManagedValueManagerBase* UMcpManagedValueManagerBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 38534 ];

	UMcpManagedValueManagerBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpManagedValueManager::OnDeleteValueRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteValueRequestComplete = NULL;

	if ( ! pFnOnDeleteValueRequestComplete )
		pFnOnDeleteValueRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38684 ];

	UMcpManagedValueManager_execOnDeleteValueRequestComplete_Parms OnDeleteValueRequestComplete_Parms;
	OnDeleteValueRequestComplete_Parms.Request = Request;
	OnDeleteValueRequestComplete_Parms.Response = Response;
	OnDeleteValueRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteValueRequestComplete, &OnDeleteValueRequestComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )

void UMcpManagedValueManager::DeleteValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId )
{
	static UFunction* pFnDeleteValue = NULL;

	if ( ! pFnDeleteValue )
		pFnDeleteValue = (UFunction*) UObject::GObjObjects()->Data[ 38677 ];

	UMcpManagedValueManager_execDeleteValue_Parms DeleteValue_Parms;
	memcpy ( &DeleteValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &DeleteValue_Parms.ValueId, &ValueId, 0x8 );

	this->ProcessEvent ( pFnDeleteValue, &DeleteValue_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpManagedValueManager::OnUpdateValueRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateValueRequestComplete = NULL;

	if ( ! pFnOnUpdateValueRequestComplete )
		pFnOnUpdateValueRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38669 ];

	UMcpManagedValueManager_execOnUpdateValueRequestComplete_Parms OnUpdateValueRequestComplete_Parms;
	OnUpdateValueRequestComplete_Parms.Request = Request;
	OnUpdateValueRequestComplete_Parms.Response = Response;
	OnUpdateValueRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateValueRequestComplete, &OnUpdateValueRequestComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )
// int                            Value                          ( CPF_Parm )

void UMcpManagedValueManager::UpdateValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value )
{
	static UFunction* pFnUpdateValue = NULL;

	if ( ! pFnUpdateValue )
		pFnUpdateValue = (UFunction*) UObject::GObjObjects()->Data[ 38661 ];

	UMcpManagedValueManager_execUpdateValue_Parms UpdateValue_Parms;
	memcpy ( &UpdateValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &UpdateValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &UpdateValue_Parms.ValueId, &ValueId, 0x8 );
	UpdateValue_Parms.Value = Value;

	this->ProcessEvent ( pFnUpdateValue, &UpdateValue_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ValueId                        ( CPF_Parm )

int UMcpManagedValueManager::GetValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 38653 ];

	UMcpManagedValueManager_execGetValue_Parms GetValue_Parms;
	memcpy ( &GetValue_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetValue_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &GetValue_Parms.ValueId, &ValueId, 0x8 );

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	return GetValue_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x00020002] 
// Parameters infos:
// TArray< struct FManagedValue > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FManagedValue > UMcpManagedValueManager::GetValues ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnGetValues = NULL;

	if ( ! pFnGetValues )
		pFnGetValues = (UFunction*) UObject::GObjObjects()->Data[ 38645 ];

	UMcpManagedValueManager_execGetValues_Parms GetValues_Parms;
	memcpy ( &GetValues_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetValues_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnGetValues, &GetValues_Parms, NULL );

	return GetValues_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpManagedValueManager::OnReadSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadSaveSlotRequestComplete = NULL;

	if ( ! pFnOnReadSaveSlotRequestComplete )
		pFnOnReadSaveSlotRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38638 ];

	UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Parms OnReadSaveSlotRequestComplete_Parms;
	OnReadSaveSlotRequestComplete_Parms.Request = Request;
	OnReadSaveSlotRequestComplete_Parms.Response = Response;
	OnReadSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadSaveSlotRequestComplete, &OnReadSaveSlotRequestComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManager::ReadSaveSlot ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnReadSaveSlot = NULL;

	if ( ! pFnReadSaveSlot )
		pFnReadSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 38632 ];

	UMcpManagedValueManager_execReadSaveSlot_Parms ReadSaveSlot_Parms;
	memcpy ( &ReadSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &ReadSaveSlot_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnReadSaveSlot, &ReadSaveSlot_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 JsonPayload                    ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManager::ParseValuesForSaveSlot ( struct FString McpId, struct FString SaveSlot, struct FString JsonPayload )
{
	static UFunction* pFnParseValuesForSaveSlot = NULL;

	if ( ! pFnParseValuesForSaveSlot )
		pFnParseValuesForSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 38622 ];

	UMcpManagedValueManager_execParseValuesForSaveSlot_Parms ParseValuesForSaveSlot_Parms;
	memcpy ( &ParseValuesForSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &ParseValuesForSaveSlot_Parms.SaveSlot, &SaveSlot, 0xC );
	memcpy ( &ParseValuesForSaveSlot_Parms.JsonPayload, &JsonPayload, 0xC );

	this->ProcessEvent ( pFnParseValuesForSaveSlot, &ParseValuesForSaveSlot_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

int UMcpManagedValueManager::FindSaveSlotIndex ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnFindSaveSlotIndex = NULL;

	if ( ! pFnFindSaveSlotIndex )
		pFnFindSaveSlotIndex = (UFunction*) UObject::GObjObjects()->Data[ 38617 ];

	UMcpManagedValueManager_execFindSaveSlotIndex_Parms FindSaveSlotIndex_Parms;
	memcpy ( &FindSaveSlotIndex_Parms.McpId, &McpId, 0xC );
	memcpy ( &FindSaveSlotIndex_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnFindSaveSlotIndex, &FindSaveSlotIndex_Parms, NULL );

	return FindSaveSlotIndex_Parms.ReturnValue;
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpManagedValueManager::OnCreateSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateSaveSlotRequestComplete = NULL;

	if ( ! pFnOnCreateSaveSlotRequestComplete )
		pFnOnCreateSaveSlotRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38610 ];

	UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Parms OnCreateSaveSlotRequestComplete_Parms;
	OnCreateSaveSlotRequestComplete_Parms.Request = Request;
	OnCreateSaveSlotRequestComplete_Parms.Response = Response;
	OnCreateSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Parms, NULL );
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlot                       ( CPF_Parm | CPF_NeedCtorLink )

void UMcpManagedValueManager::CreateSaveSlot ( struct FString McpId, struct FString SaveSlot )
{
	static UFunction* pFnCreateSaveSlot = NULL;

	if ( ! pFnCreateSaveSlot )
		pFnCreateSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 38604 ];

	UMcpManagedValueManager_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy ( &CreateSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.SaveSlot, &SaveSlot, 0xC );

	this->ProcessEvent ( pFnCreateSaveSlot, &CreateSaveSlot_Parms, NULL );
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UMcpServerTimeBase::GetLastServerTime ( )
{
	static UFunction* pFnGetLastServerTime = NULL;

	if ( ! pFnGetLastServerTime )
		pFnGetLastServerTime = (UFunction*) UObject::GObjObjects()->Data[ 38919 ];

	UMcpServerTimeBase_execGetLastServerTime_Parms GetLastServerTime_Parms;

	this->ProcessEvent ( pFnGetLastServerTime, &GetLastServerTime_Parms, NULL );

	return GetLastServerTime_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 DateTimeStr                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpServerTimeBase::OnQueryServerTimeComplete ( unsigned long bWasSuccessful, struct FString DateTimeStr, struct FString Error )
{
	static UFunction* pFnOnQueryServerTimeComplete = NULL;

	if ( ! pFnOnQueryServerTimeComplete )
		pFnOnQueryServerTimeComplete = (UFunction*) UObject::GObjObjects()->Data[ 38909 ];

	UMcpServerTimeBase_execOnQueryServerTimeComplete_Parms OnQueryServerTimeComplete_Parms;
	OnQueryServerTimeComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryServerTimeComplete_Parms.DateTimeStr, &DateTimeStr, 0xC );
	memcpy ( &OnQueryServerTimeComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryServerTimeComplete, &OnQueryServerTimeComplete_Parms, NULL );
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] 
// Parameters infos:

void UMcpServerTimeBase::QueryServerTime ( )
{
	static UFunction* pFnQueryServerTime = NULL;

	if ( ! pFnQueryServerTime )
		pFnQueryServerTime = (UFunction*) UObject::GObjObjects()->Data[ 38915 ];

	UMcpServerTimeBase_execQueryServerTime_Parms QueryServerTime_Parms;

	this->ProcessEvent ( pFnQueryServerTime, &QueryServerTime_Parms, NULL );
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpServerTimeBase*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpServerTimeBase* UMcpServerTimeBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 38911 ];

	UMcpServerTimeBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UMcpServerTimeManager::GetLastServerTime ( )
{
	static UFunction* pFnGetLastServerTime = NULL;

	if ( ! pFnGetLastServerTime )
		pFnGetLastServerTime = (UFunction*) UObject::GObjObjects()->Data[ 38939 ];

	UMcpServerTimeManager_execGetLastServerTime_Parms GetLastServerTime_Parms;

	this->ProcessEvent ( pFnGetLastServerTime, &GetLastServerTime_Parms, NULL );

	return GetLastServerTime_Parms.ReturnValue;
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpServerTimeManager::OnQueryServerTimeHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryServerTimeHTTPRequestComplete = NULL;

	if ( ! pFnOnQueryServerTimeHTTPRequestComplete )
		pFnOnQueryServerTimeHTTPRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38930 ];

	UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Parms OnQueryServerTimeHTTPRequestComplete_Parms;
	OnQueryServerTimeHTTPRequestComplete_Parms.Request = Request;
	OnQueryServerTimeHTTPRequestComplete_Parms.Response = Response;
	OnQueryServerTimeHTTPRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryServerTimeHTTPRequestComplete, &OnQueryServerTimeHTTPRequestComplete_Parms, NULL );
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] 
// Parameters infos:

void UMcpServerTimeManager::QueryServerTime ( )
{
	static UFunction* pFnQueryServerTime = NULL;

	if ( ! pFnQueryServerTime )
		pFnQueryServerTime = (UFunction*) UObject::GObjObjects()->Data[ 38926 ];

	UMcpServerTimeManager_execQueryServerTime_Parms QueryServerTime_Parms;

	this->ProcessEvent ( pFnQueryServerTime, &QueryServerTime_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UpdatedItemIds                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnRecordIapComplete ( struct FString McpId, struct FString SaveSlotId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnRecordIapComplete = NULL;

	if ( ! pFnOnRecordIapComplete )
		pFnOnRecordIapComplete = (UFunction*) UObject::GObjObjects()->Data[ 39138 ];

	UMcpUserInventoryBase_execOnRecordIapComplete_Parms OnRecordIapComplete_Parms;
	memcpy ( &OnRecordIapComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnRecordIapComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnRecordIapComplete_Parms.UpdatedItemIds, &UpdatedItemIds, 0xC );
	OnRecordIapComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnRecordIapComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnRecordIapComplete, &OnRecordIapComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Receipt                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::RecordIap ( struct FString McpId, struct FString SaveSlotId, struct FString Receipt )
{
	static UFunction* pFnRecordIap = NULL;

	if ( ! pFnRecordIap )
		pFnRecordIap = (UFunction*) UObject::GObjObjects()->Data[ 39291 ];

	UMcpUserInventoryBase_execRecordIap_Parms RecordIap_Parms;
	memcpy ( &RecordIap_Parms.McpId, &McpId, 0xC );
	memcpy ( &RecordIap_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &RecordIap_Parms.Receipt, &Receipt, 0xC );

	this->ProcessEvent ( pFnRecordIap, &RecordIap_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnDeleteItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteItemComplete = NULL;

	if ( ! pFnOnDeleteItemComplete )
		pFnOnDeleteItemComplete = (UFunction*) UObject::GObjObjects()->Data[ 39140 ];

	UMcpUserInventoryBase_execOnDeleteItemComplete_Parms OnDeleteItemComplete_Parms;
	memcpy ( &OnDeleteItemComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnDeleteItemComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnDeleteItemComplete_Parms.InstanceItemId, &InstanceItemId, 0xC );
	OnDeleteItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteItemComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteItemComplete, &OnDeleteItemComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryBase::DeleteItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion )
{
	static UFunction* pFnDeleteItem = NULL;

	if ( ! pFnDeleteItem )
		pFnDeleteItem = (UFunction*) UObject::GObjObjects()->Data[ 39281 ];

	UMcpUserInventoryBase_execDeleteItem_Parms DeleteItem_Parms;
	memcpy ( &DeleteItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &DeleteItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	DeleteItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnDeleteItem, &DeleteItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UpdatedItemIds                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnConsumeItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnConsumeItemComplete = NULL;

	if ( ! pFnOnConsumeItemComplete )
		pFnOnConsumeItemComplete = (UFunction*) UObject::GObjObjects()->Data[ 39142 ];

	UMcpUserInventoryBase_execOnConsumeItemComplete_Parms OnConsumeItemComplete_Parms;
	memcpy ( &OnConsumeItemComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnConsumeItemComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnConsumeItemComplete_Parms.InstanceItemId, &InstanceItemId, 0xC );
	memcpy ( &OnConsumeItemComplete_Parms.UpdatedItemIds, &UpdatedItemIds, 0xC );
	OnConsumeItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnConsumeItemComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnConsumeItemComplete, &OnConsumeItemComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryBase::ConsumeItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion )
{
	static UFunction* pFnConsumeItem = NULL;

	if ( ! pFnConsumeItem )
		pFnConsumeItem = (UFunction*) UObject::GObjObjects()->Data[ 39268 ];

	UMcpUserInventoryBase_execConsumeItem_Parms ConsumeItem_Parms;
	memcpy ( &ConsumeItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &ConsumeItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &ConsumeItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	ConsumeItem_Parms.Quantity = Quantity;
	ConsumeItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnConsumeItem, &ConsumeItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UpdatedItemIds                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnEarnItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnEarnItemComplete = NULL;

	if ( ! pFnOnEarnItemComplete )
		pFnOnEarnItemComplete = (UFunction*) UObject::GObjObjects()->Data[ 39144 ];

	UMcpUserInventoryBase_execOnEarnItemComplete_Parms OnEarnItemComplete_Parms;
	memcpy ( &OnEarnItemComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnEarnItemComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnEarnItemComplete_Parms.GlobalItemId, &GlobalItemId, 0xC );
	memcpy ( &OnEarnItemComplete_Parms.UpdatedItemIds, &UpdatedItemIds, 0xC );
	OnEarnItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnEarnItemComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnEarnItemComplete, &OnEarnItemComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryBase::EarnItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion )
{
	static UFunction* pFnEarnItem = NULL;

	if ( ! pFnEarnItem )
		pFnEarnItem = (UFunction*) UObject::GObjObjects()->Data[ 39255 ];

	UMcpUserInventoryBase_execEarnItem_Parms EarnItem_Parms;
	memcpy ( &EarnItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &EarnItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &EarnItem_Parms.GlobalItemId, &GlobalItemId, 0xC );
	EarnItem_Parms.Quantity = Quantity;
	EarnItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnEarnItem, &EarnItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UpdatedItemIds                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnSellItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnSellItemComplete = NULL;

	if ( ! pFnOnSellItemComplete )
		pFnOnSellItemComplete = (UFunction*) UObject::GObjObjects()->Data[ 39146 ];

	UMcpUserInventoryBase_execOnSellItemComplete_Parms OnSellItemComplete_Parms;
	memcpy ( &OnSellItemComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnSellItemComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnSellItemComplete_Parms.InstanceItemId, &InstanceItemId, 0xC );
	memcpy ( &OnSellItemComplete_Parms.UpdatedItemIds, &UpdatedItemIds, 0xC );
	OnSellItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnSellItemComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnSellItemComplete, &OnSellItemComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )
// TArray< struct FMcpInventoryItemContainer > ExpectedResultItems            ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::SellItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray< struct FMcpInventoryItemContainer >* ExpectedResultItems )
{
	static UFunction* pFnSellItem = NULL;

	if ( ! pFnSellItem )
		pFnSellItem = (UFunction*) UObject::GObjObjects()->Data[ 39240 ];

	UMcpUserInventoryBase_execSellItem_Parms SellItem_Parms;
	memcpy ( &SellItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &SellItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &SellItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	SellItem_Parms.Quantity = Quantity;
	SellItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnSellItem, &SellItem_Parms, NULL );

	if ( ExpectedResultItems )
		memcpy ( ExpectedResultItems, &SellItem_Parms.ExpectedResultItems, 0xC );
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       UpdatedItemIds                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnPurchaseItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnPurchaseItemComplete = NULL;

	if ( ! pFnOnPurchaseItemComplete )
		pFnOnPurchaseItemComplete = (UFunction*) UObject::GObjObjects()->Data[ 39148 ];

	UMcpUserInventoryBase_execOnPurchaseItemComplete_Parms OnPurchaseItemComplete_Parms;
	memcpy ( &OnPurchaseItemComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnPurchaseItemComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &OnPurchaseItemComplete_Parms.GlobalItemId, &GlobalItemId, 0xC );
	memcpy ( &OnPurchaseItemComplete_Parms.UpdatedItemIds, &UpdatedItemIds, 0xC );
	OnPurchaseItemComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnPurchaseItemComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnPurchaseItemComplete, &OnPurchaseItemComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       PurchaseItemIds                ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )
// float                          Scalar                         ( CPF_Parm )

void UMcpUserInventoryBase::PurchaseItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > PurchaseItemIds, int Quantity, int StoreVersion, float Scalar )
{
	static UFunction* pFnPurchaseItem = NULL;

	if ( ! pFnPurchaseItem )
		pFnPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 39224 ];

	UMcpUserInventoryBase_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy ( &PurchaseItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &PurchaseItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &PurchaseItem_Parms.GlobalItemId, &GlobalItemId, 0xC );
	memcpy ( &PurchaseItem_Parms.PurchaseItemIds, &PurchaseItemIds, 0xC );
	PurchaseItem_Parms.Quantity = Quantity;
	PurchaseItem_Parms.StoreVersion = StoreVersion;
	PurchaseItem_Parms.Scalar = Scalar;

	this->ProcessEvent ( pFnPurchaseItem, &PurchaseItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpInventoryItem       OutInventoryItem               ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserInventoryBase::GetInventoryItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem* OutInventoryItem )
{
	static UFunction* pFnGetInventoryItem = NULL;

	if ( ! pFnGetInventoryItem )
		pFnGetInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 39218 ];

	UMcpUserInventoryBase_execGetInventoryItem_Parms GetInventoryItem_Parms;
	memcpy ( &GetInventoryItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetInventoryItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &GetInventoryItem_Parms.InstanceItemId, &InstanceItemId, 0xC );

	this->ProcessEvent ( pFnGetInventoryItem, &GetInventoryItem_Parms, NULL );

	if ( OutInventoryItem )
		memcpy ( OutInventoryItem, &GetInventoryItem_Parms.OutInventoryItem, 0x3C );

	return GetInventoryItem_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpInventoryItem > OutInventoryItems              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::GetInventoryItems ( struct FString McpId, struct FString SaveSlotId, TArray< struct FMcpInventoryItem >* OutInventoryItems )
{
	static UFunction* pFnGetInventoryItems = NULL;

	if ( ! pFnGetInventoryItems )
		pFnGetInventoryItems = (UFunction*) UObject::GObjObjects()->Data[ 39213 ];

	UMcpUserInventoryBase_execGetInventoryItems_Parms GetInventoryItems_Parms;
	memcpy ( &GetInventoryItems_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetInventoryItems_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnGetInventoryItems, &GetInventoryItems_Parms, NULL );

	if ( OutInventoryItems )
		memcpy ( OutInventoryItems, &GetInventoryItems_Parms.OutInventoryItems, 0xC );
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnQueryInventoryItemsComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryInventoryItemsComplete = NULL;

	if ( ! pFnOnQueryInventoryItemsComplete )
		pFnOnQueryInventoryItemsComplete = (UFunction*) UObject::GObjObjects()->Data[ 39150 ];

	UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Parms OnQueryInventoryItemsComplete_Parms;
	memcpy ( &OnQueryInventoryItemsComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnQueryInventoryItemsComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	OnQueryInventoryItemsComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryInventoryItemsComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryInventoryItemsComplete, &OnQueryInventoryItemsComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::QueryInventoryItems ( struct FString McpId, struct FString SaveSlotId )
{
	static UFunction* pFnQueryInventoryItems = NULL;

	if ( ! pFnQueryInventoryItems )
		pFnQueryInventoryItems = (UFunction*) UObject::GObjObjects()->Data[ 39206 ];

	UMcpUserInventoryBase_execQueryInventoryItems_Parms QueryInventoryItems_Parms;
	memcpy ( &QueryInventoryItems_Parms.McpId, &McpId, 0xC );
	memcpy ( &QueryInventoryItems_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnQueryInventoryItems, &QueryInventoryItems_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnQuerySaveSlotListComplete ( struct FString McpId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQuerySaveSlotListComplete = NULL;

	if ( ! pFnOnQuerySaveSlotListComplete )
		pFnOnQuerySaveSlotListComplete = (UFunction*) UObject::GObjObjects()->Data[ 39152 ];

	UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Parms OnQuerySaveSlotListComplete_Parms;
	memcpy ( &OnQuerySaveSlotListComplete_Parms.McpId, &McpId, 0xC );
	OnQuerySaveSlotListComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQuerySaveSlotListComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQuerySaveSlotListComplete, &OnQuerySaveSlotListComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] 
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FString > UMcpUserInventoryBase::GetSaveSlotList ( struct FString McpId )
{
	static UFunction* pFnGetSaveSlotList = NULL;

	if ( ! pFnGetSaveSlotList )
		pFnGetSaveSlotList = (UFunction*) UObject::GObjObjects()->Data[ 39199 ];

	UMcpUserInventoryBase_execGetSaveSlotList_Parms GetSaveSlotList_Parms;
	memcpy ( &GetSaveSlotList_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetSaveSlotList, &GetSaveSlotList_Parms, NULL );

	return GetSaveSlotList_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::QuerySaveSlotList ( struct FString McpId )
{
	static UFunction* pFnQuerySaveSlotList = NULL;

	if ( ! pFnQuerySaveSlotList )
		pFnQuerySaveSlotList = (UFunction*) UObject::GObjObjects()->Data[ 39197 ];

	UMcpUserInventoryBase_execQuerySaveSlotList_Parms QuerySaveSlotList_Parms;
	memcpy ( &QuerySaveSlotList_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnQuerySaveSlotList, &QuerySaveSlotList_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnDeleteSaveSlotComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteSaveSlotComplete = NULL;

	if ( ! pFnOnDeleteSaveSlotComplete )
		pFnOnDeleteSaveSlotComplete = (UFunction*) UObject::GObjObjects()->Data[ 39154 ];

	UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Parms OnDeleteSaveSlotComplete_Parms;
	memcpy ( &OnDeleteSaveSlotComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnDeleteSaveSlotComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	OnDeleteSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteSaveSlotComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteSaveSlotComplete, &OnDeleteSaveSlotComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::DeleteSaveSlot ( struct FString McpId, struct FString SaveSlotId )
{
	static UFunction* pFnDeleteSaveSlot = NULL;

	if ( ! pFnDeleteSaveSlot )
		pFnDeleteSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 39190 ];

	UMcpUserInventoryBase_execDeleteSaveSlot_Parms DeleteSaveSlot_Parms;
	memcpy ( &DeleteSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteSaveSlot_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnDeleteSaveSlot, &DeleteSaveSlot_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::OnCreateSaveSlotComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnCreateSaveSlotComplete = NULL;

	if ( ! pFnOnCreateSaveSlotComplete )
		pFnOnCreateSaveSlotComplete = (UFunction*) UObject::GObjObjects()->Data[ 39156 ];

	UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Parms OnCreateSaveSlotComplete_Parms;
	memcpy ( &OnCreateSaveSlotComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnCreateSaveSlotComplete_Parms.SaveSlotId, &SaveSlotId, 0xC );
	OnCreateSaveSlotComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnCreateSaveSlotComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnCreateSaveSlotComplete, &OnCreateSaveSlotComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ParentSaveSlotId               ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryBase::CreateSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId )
{
	static UFunction* pFnCreateSaveSlot = NULL;

	if ( ! pFnCreateSaveSlot )
		pFnCreateSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 39182 ];

	UMcpUserInventoryBase_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy ( &CreateSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.ParentSaveSlotId, &ParentSaveSlotId, 0xC );

	this->ProcessEvent ( pFnCreateSaveSlot, &CreateSaveSlot_Parms, NULL );
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpUserInventoryBase*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpUserInventoryBase* UMcpUserInventoryBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 39178 ];

	UMcpUserInventoryBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnRecordIapRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRecordIapRequestComplete = NULL;

	if ( ! pFnOnRecordIapRequestComplete )
		pFnOnRecordIapRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39569 ];

	UMcpUserInventoryManager_execOnRecordIapRequestComplete_Parms OnRecordIapRequestComplete_Parms;
	OnRecordIapRequestComplete_Parms.Request = Request;
	OnRecordIapRequestComplete_Parms.Response = Response;
	OnRecordIapRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRecordIapRequestComplete, &OnRecordIapRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Receipt                        ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::RecordIap ( struct FString McpId, struct FString SaveSlotId, struct FString Receipt )
{
	static UFunction* pFnRecordIap = NULL;

	if ( ! pFnRecordIap )
		pFnRecordIap = (UFunction*) UObject::GObjObjects()->Data[ 39561 ];

	UMcpUserInventoryManager_execRecordIap_Parms RecordIap_Parms;
	memcpy ( &RecordIap_Parms.McpId, &McpId, 0xC );
	memcpy ( &RecordIap_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &RecordIap_Parms.Receipt, &Receipt, 0xC );

	this->ProcessEvent ( pFnRecordIap, &RecordIap_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnDeleteItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteItemRequestComplete = NULL;

	if ( ! pFnOnDeleteItemRequestComplete )
		pFnOnDeleteItemRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39553 ];

	UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Parms OnDeleteItemRequestComplete_Parms;
	OnDeleteItemRequestComplete_Parms.Request = Request;
	OnDeleteItemRequestComplete_Parms.Response = Response;
	OnDeleteItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteItemRequestComplete, &OnDeleteItemRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryManager::DeleteItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion )
{
	static UFunction* pFnDeleteItem = NULL;

	if ( ! pFnDeleteItem )
		pFnDeleteItem = (UFunction*) UObject::GObjObjects()->Data[ 39544 ];

	UMcpUserInventoryManager_execDeleteItem_Parms DeleteItem_Parms;
	memcpy ( &DeleteItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &DeleteItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	DeleteItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnDeleteItem, &DeleteItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnConsumeItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnConsumeItemRequestComplete = NULL;

	if ( ! pFnOnConsumeItemRequestComplete )
		pFnOnConsumeItemRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39535 ];

	UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Parms OnConsumeItemRequestComplete_Parms;
	OnConsumeItemRequestComplete_Parms.Request = Request;
	OnConsumeItemRequestComplete_Parms.Response = Response;
	OnConsumeItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnConsumeItemRequestComplete, &OnConsumeItemRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryManager::ConsumeItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion )
{
	static UFunction* pFnConsumeItem = NULL;

	if ( ! pFnConsumeItem )
		pFnConsumeItem = (UFunction*) UObject::GObjObjects()->Data[ 39525 ];

	UMcpUserInventoryManager_execConsumeItem_Parms ConsumeItem_Parms;
	memcpy ( &ConsumeItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &ConsumeItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &ConsumeItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	ConsumeItem_Parms.Quantity = Quantity;
	ConsumeItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnConsumeItem, &ConsumeItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnEarnItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEarnItemRequestComplete = NULL;

	if ( ! pFnOnEarnItemRequestComplete )
		pFnOnEarnItemRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39516 ];

	UMcpUserInventoryManager_execOnEarnItemRequestComplete_Parms OnEarnItemRequestComplete_Parms;
	OnEarnItemRequestComplete_Parms.Request = Request;
	OnEarnItemRequestComplete_Parms.Response = Response;
	OnEarnItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEarnItemRequestComplete, &OnEarnItemRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )

void UMcpUserInventoryManager::EarnItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion )
{
	static UFunction* pFnEarnItem = NULL;

	if ( ! pFnEarnItem )
		pFnEarnItem = (UFunction*) UObject::GObjObjects()->Data[ 39506 ];

	UMcpUserInventoryManager_execEarnItem_Parms EarnItem_Parms;
	memcpy ( &EarnItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &EarnItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &EarnItem_Parms.GlobalItemId, &GlobalItemId, 0xC );
	EarnItem_Parms.Quantity = Quantity;
	EarnItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnEarnItem, &EarnItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnSellItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnSellItemRequestComplete = NULL;

	if ( ! pFnOnSellItemRequestComplete )
		pFnOnSellItemRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39494 ];

	UMcpUserInventoryManager_execOnSellItemRequestComplete_Parms OnSellItemRequestComplete_Parms;
	OnSellItemRequestComplete_Parms.Request = Request;
	OnSellItemRequestComplete_Parms.Response = Response;
	OnSellItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnSellItemRequestComplete, &OnSellItemRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x00424002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )
// TArray< struct FMcpInventoryItemContainer > ExpectedResultItems            ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::SellItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray< struct FMcpInventoryItemContainer >* ExpectedResultItems )
{
	static UFunction* pFnSellItem = NULL;

	if ( ! pFnSellItem )
		pFnSellItem = (UFunction*) UObject::GObjObjects()->Data[ 39480 ];

	UMcpUserInventoryManager_execSellItem_Parms SellItem_Parms;
	memcpy ( &SellItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &SellItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &SellItem_Parms.InstanceItemId, &InstanceItemId, 0xC );
	SellItem_Parms.Quantity = Quantity;
	SellItem_Parms.StoreVersion = StoreVersion;

	this->ProcessEvent ( pFnSellItem, &SellItem_Parms, NULL );

	if ( ExpectedResultItems )
		memcpy ( ExpectedResultItems, &SellItem_Parms.ExpectedResultItems, 0xC );
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnPurchaseItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnPurchaseItemRequestComplete = NULL;

	if ( ! pFnOnPurchaseItemRequestComplete )
		pFnOnPurchaseItemRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39468 ];

	UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Parms OnPurchaseItemRequestComplete_Parms;
	OnPurchaseItemRequestComplete_Parms.Request = Request;
	OnPurchaseItemRequestComplete_Parms.Response = Response;
	OnPurchaseItemRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnPurchaseItemRequestComplete, &OnPurchaseItemRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 GlobalItemId                   ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       PurchaseItemIds                ( CPF_Parm | CPF_NeedCtorLink )
// int                            Quantity                       ( CPF_Parm )
// int                            StoreVersion                   ( CPF_Parm )
// float                          Scalar                         ( CPF_Parm )

void UMcpUserInventoryManager::PurchaseItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > PurchaseItemIds, int Quantity, int StoreVersion, float Scalar )
{
	static UFunction* pFnPurchaseItem = NULL;

	if ( ! pFnPurchaseItem )
		pFnPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 39453 ];

	UMcpUserInventoryManager_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy ( &PurchaseItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &PurchaseItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &PurchaseItem_Parms.GlobalItemId, &GlobalItemId, 0xC );
	memcpy ( &PurchaseItem_Parms.PurchaseItemIds, &PurchaseItemIds, 0xC );
	PurchaseItem_Parms.Quantity = Quantity;
	PurchaseItem_Parms.StoreVersion = StoreVersion;
	PurchaseItem_Parms.Scalar = Scalar;

	this->ProcessEvent ( pFnPurchaseItem, &PurchaseItem_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ItemID                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FInventoryItemRequestState > InItemRequests                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UMcpUserInventoryManager::FindItemRequest ( struct FString McpId, struct FString SaveSlotId, struct FString ItemID, TArray< struct FInventoryItemRequestState >* InItemRequests )
{
	static UFunction* pFnFindItemRequest = NULL;

	if ( ! pFnFindItemRequest )
		pFnFindItemRequest = (UFunction*) UObject::GObjObjects()->Data[ 39445 ];

	UMcpUserInventoryManager_execFindItemRequest_Parms FindItemRequest_Parms;
	memcpy ( &FindItemRequest_Parms.McpId, &McpId, 0xC );
	memcpy ( &FindItemRequest_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &FindItemRequest_Parms.ItemID, &ItemID, 0xC );

	this->ProcessEvent ( pFnFindItemRequest, &FindItemRequest_Parms, NULL );

	if ( InItemRequests )
		memcpy ( InItemRequests, &FindItemRequest_Parms.InItemRequests, 0xC );

	return FindItemRequest_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState > InSaveSlotRequests             ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UMcpUserInventoryManager::FindSaveSlotRequest ( struct FString McpId, struct FString SaveSlotId, TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState >* InSaveSlotRequests )
{
	static UFunction* pFnFindSaveSlotRequest = NULL;

	if ( ! pFnFindSaveSlotRequest )
		pFnFindSaveSlotRequest = (UFunction*) UObject::GObjObjects()->Data[ 39438 ];

	UMcpUserInventoryManager_execFindSaveSlotRequest_Parms FindSaveSlotRequest_Parms;
	memcpy ( &FindSaveSlotRequest_Parms.McpId, &McpId, 0xC );
	memcpy ( &FindSaveSlotRequest_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnFindSaveSlotRequest, &FindSaveSlotRequest_Parms, NULL );

	if ( InSaveSlotRequests )
		memcpy ( InSaveSlotRequests, &FindSaveSlotRequest_Parms.InSaveSlotRequests, 0xC );

	return FindSaveSlotRequest_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )

int UMcpUserInventoryManager::FindSaveSlotIndex ( struct FString McpId, struct FString SaveSlotId )
{
	static UFunction* pFnFindSaveSlotIndex = NULL;

	if ( ! pFnFindSaveSlotIndex )
		pFnFindSaveSlotIndex = (UFunction*) UObject::GObjObjects()->Data[ 39433 ];

	UMcpUserInventoryManager_execFindSaveSlotIndex_Parms FindSaveSlotIndex_Parms;
	memcpy ( &FindSaveSlotIndex_Parms.McpId, &McpId, 0xC );
	memcpy ( &FindSaveSlotIndex_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnFindSaveSlotIndex, &FindSaveSlotIndex_Parms, NULL );

	return FindSaveSlotIndex_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 JsonPayload                    ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::ParseSaveSlotList ( struct FString McpId, struct FString JsonPayload )
{
	static UFunction* pFnParseSaveSlotList = NULL;

	if ( ! pFnParseSaveSlotList )
		pFnParseSaveSlotList = (UFunction*) UObject::GObjObjects()->Data[ 39426 ];

	UMcpUserInventoryManager_execParseSaveSlotList_Parms ParseSaveSlotList_Parms;
	memcpy ( &ParseSaveSlotList_Parms.McpId, &McpId, 0xC );
	memcpy ( &ParseSaveSlotList_Parms.JsonPayload, &JsonPayload, 0xC );

	this->ProcessEvent ( pFnParseSaveSlotList, &ParseSaveSlotList_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020002] 
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 JsonPayload                    ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FString > UMcpUserInventoryManager::ParseInventoryForSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString JsonPayload )
{
	static UFunction* pFnParseInventoryForSaveSlot = NULL;

	if ( ! pFnParseInventoryForSaveSlot )
		pFnParseInventoryForSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 39345 ];

	UMcpUserInventoryManager_execParseInventoryForSaveSlot_Parms ParseInventoryForSaveSlot_Parms;
	memcpy ( &ParseInventoryForSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &ParseInventoryForSaveSlot_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &ParseInventoryForSaveSlot_Parms.JsonPayload, &JsonPayload, 0xC );

	this->ProcessEvent ( pFnParseInventoryForSaveSlot, &ParseInventoryForSaveSlot_Parms, NULL );

	return ParseInventoryForSaveSlot_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceItemId                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpInventoryItem       OutInventoryItem               ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserInventoryManager::GetInventoryItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem* OutInventoryItem )
{
	static UFunction* pFnGetInventoryItem = NULL;

	if ( ! pFnGetInventoryItem )
		pFnGetInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 39402 ];

	UMcpUserInventoryManager_execGetInventoryItem_Parms GetInventoryItem_Parms;
	memcpy ( &GetInventoryItem_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetInventoryItem_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &GetInventoryItem_Parms.InstanceItemId, &InstanceItemId, 0xC );

	this->ProcessEvent ( pFnGetInventoryItem, &GetInventoryItem_Parms, NULL );

	if ( OutInventoryItem )
		memcpy ( OutInventoryItem, &GetInventoryItem_Parms.OutInventoryItem, 0x3C );

	return GetInventoryItem_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x00420002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FMcpInventoryItem > OutInventoryItems              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::GetInventoryItems ( struct FString McpId, struct FString SaveSlotId, TArray< struct FMcpInventoryItem >* OutInventoryItems )
{
	static UFunction* pFnGetInventoryItems = NULL;

	if ( ! pFnGetInventoryItems )
		pFnGetInventoryItems = (UFunction*) UObject::GObjObjects()->Data[ 39396 ];

	UMcpUserInventoryManager_execGetInventoryItems_Parms GetInventoryItems_Parms;
	memcpy ( &GetInventoryItems_Parms.McpId, &McpId, 0xC );
	memcpy ( &GetInventoryItems_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnGetInventoryItems, &GetInventoryItems_Parms, NULL );

	if ( OutInventoryItems )
		memcpy ( OutInventoryItems, &GetInventoryItems_Parms.OutInventoryItems, 0xC );
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnQueryInventoryItemsRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryInventoryItemsRequestComplete = NULL;

	if ( ! pFnOnQueryInventoryItemsRequestComplete )
		pFnOnQueryInventoryItemsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39388 ];

	UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Parms OnQueryInventoryItemsRequestComplete_Parms;
	OnQueryInventoryItemsRequestComplete_Parms.Request = Request;
	OnQueryInventoryItemsRequestComplete_Parms.Response = Response;
	OnQueryInventoryItemsRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryInventoryItemsRequestComplete, &OnQueryInventoryItemsRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::QueryInventoryItems ( struct FString McpId, struct FString SaveSlotId )
{
	static UFunction* pFnQueryInventoryItems = NULL;

	if ( ! pFnQueryInventoryItems )
		pFnQueryInventoryItems = (UFunction*) UObject::GObjObjects()->Data[ 39381 ];

	UMcpUserInventoryManager_execQueryInventoryItems_Parms QueryInventoryItems_Parms;
	memcpy ( &QueryInventoryItems_Parms.McpId, &McpId, 0xC );
	memcpy ( &QueryInventoryItems_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnQueryInventoryItems, &QueryInventoryItems_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x00020002] 
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

TArray< struct FString > UMcpUserInventoryManager::GetSaveSlotList ( struct FString McpId )
{
	static UFunction* pFnGetSaveSlotList = NULL;

	if ( ! pFnGetSaveSlotList )
		pFnGetSaveSlotList = (UFunction*) UObject::GObjObjects()->Data[ 39374 ];

	UMcpUserInventoryManager_execGetSaveSlotList_Parms GetSaveSlotList_Parms;
	memcpy ( &GetSaveSlotList_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetSaveSlotList, &GetSaveSlotList_Parms, NULL );

	return GetSaveSlotList_Parms.ReturnValue;
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnQuerySaveSlotListRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQuerySaveSlotListRequestComplete = NULL;

	if ( ! pFnOnQuerySaveSlotListRequestComplete )
		pFnOnQuerySaveSlotListRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39367 ];

	UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Parms OnQuerySaveSlotListRequestComplete_Parms;
	OnQuerySaveSlotListRequestComplete_Parms.Request = Request;
	OnQuerySaveSlotListRequestComplete_Parms.Response = Response;
	OnQuerySaveSlotListRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQuerySaveSlotListRequestComplete, &OnQuerySaveSlotListRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::QuerySaveSlotList ( struct FString McpId )
{
	static UFunction* pFnQuerySaveSlotList = NULL;

	if ( ! pFnQuerySaveSlotList )
		pFnQuerySaveSlotList = (UFunction*) UObject::GObjObjects()->Data[ 39361 ];

	UMcpUserInventoryManager_execQuerySaveSlotList_Parms QuerySaveSlotList_Parms;
	memcpy ( &QuerySaveSlotList_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnQuerySaveSlotList, &QuerySaveSlotList_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnDeleteSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteSaveSlotRequestComplete = NULL;

	if ( ! pFnOnDeleteSaveSlotRequestComplete )
		pFnOnDeleteSaveSlotRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39354 ];

	UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Parms OnDeleteSaveSlotRequestComplete_Parms;
	OnDeleteSaveSlotRequestComplete_Parms.Request = Request;
	OnDeleteSaveSlotRequestComplete_Parms.Response = Response;
	OnDeleteSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteSaveSlotRequestComplete, &OnDeleteSaveSlotRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::DeleteSaveSlot ( struct FString McpId, struct FString SaveSlotId )
{
	static UFunction* pFnDeleteSaveSlot = NULL;

	if ( ! pFnDeleteSaveSlot )
		pFnDeleteSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 39347 ];

	UMcpUserInventoryManager_execDeleteSaveSlot_Parms DeleteSaveSlot_Parms;
	memcpy ( &DeleteSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &DeleteSaveSlot_Parms.SaveSlotId, &SaveSlotId, 0xC );

	this->ProcessEvent ( pFnDeleteSaveSlot, &DeleteSaveSlot_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserInventoryManager::OnCreateSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateSaveSlotRequestComplete = NULL;

	if ( ! pFnOnCreateSaveSlotRequestComplete )
		pFnOnCreateSaveSlotRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39337 ];

	UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Parms OnCreateSaveSlotRequestComplete_Parms;
	OnCreateSaveSlotRequestComplete_Parms.Request = Request;
	OnCreateSaveSlotRequestComplete_Parms.Response = Response;
	OnCreateSaveSlotRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateSaveSlotRequestComplete, &OnCreateSaveSlotRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x00024002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SaveSlotId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ParentSaveSlotId               ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UMcpUserInventoryManager::CreateSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId )
{
	static UFunction* pFnCreateSaveSlot = NULL;

	if ( ! pFnCreateSaveSlot )
		pFnCreateSaveSlot = (UFunction*) UObject::GObjObjects()->Data[ 39329 ];

	UMcpUserInventoryManager_execCreateSaveSlot_Parms CreateSaveSlot_Parms;
	memcpy ( &CreateSaveSlot_Parms.McpId, &McpId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.SaveSlotId, &SaveSlotId, 0xC );
	memcpy ( &CreateSaveSlot_Parms.ParentSaveSlotId, &ParentSaveSlotId, 0xC );

	this->ProcessEvent ( pFnCreateSaveSlot, &CreateSaveSlot_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::OnDeleteUserComplete ( unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnDeleteUserComplete = NULL;

	if ( ! pFnOnDeleteUserComplete )
		pFnOnDeleteUserComplete = (UFunction*) UObject::GObjObjects()->Data[ 39581 ];

	UMcpUserManagerBase_execOnDeleteUserComplete_Parms OnDeleteUserComplete_Parms;
	OnDeleteUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnDeleteUserComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnDeleteUserComplete, &OnDeleteUserComplete_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::DeleteUser ( struct FString McpId )
{
	static UFunction* pFnDeleteUser = NULL;

	if ( ! pFnDeleteUser )
		pFnDeleteUser = (UFunction*) UObject::GObjObjects()->Data[ 39636 ];

	UMcpUserManagerBase_execDeleteUser_Parms DeleteUser_Parms;
	memcpy ( &DeleteUser_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnDeleteUser, &DeleteUser_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpUserStatus          User                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserManagerBase::GetUser ( struct FString McpId, struct FMcpUserStatus* User )
{
	static UFunction* pFnGetUser = NULL;

	if ( ! pFnGetUser )
		pFnGetUser = (UFunction*) UObject::GObjObjects()->Data[ 39632 ];

	UMcpUserManagerBase_execGetUser_Parms GetUser_Parms;
	memcpy ( &GetUser_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetUser, &GetUser_Parms, NULL );

	if ( User )
		memcpy ( User, &GetUser_Parms.User, 0x50 );

	return GetUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] 
// Parameters infos:
// TArray< struct FMcpUserStatus > Users                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserManagerBase::GetUsers ( TArray< struct FMcpUserStatus >* Users )
{
	static UFunction* pFnGetUsers = NULL;

	if ( ! pFnGetUsers )
		pFnGetUsers = (UFunction*) UObject::GObjObjects()->Data[ 39629 ];

	UMcpUserManagerBase_execGetUsers_Parms GetUsers_Parms;

	this->ProcessEvent ( pFnGetUsers, &GetUsers_Parms, NULL );

	if ( Users )
		memcpy ( Users, &GetUsers_Parms.Users, 0xC );
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::OnQueryUsersComplete ( unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnQueryUsersComplete = NULL;

	if ( ! pFnOnQueryUsersComplete )
		pFnOnQueryUsersComplete = (UFunction*) UObject::GObjObjects()->Data[ 39583 ];

	UMcpUserManagerBase_execOnQueryUsersComplete_Parms OnQueryUsersComplete_Parms;
	OnQueryUsersComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnQueryUsersComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnQueryUsersComplete, &OnQueryUsersComplete_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] 
// Parameters infos:
// TArray< struct FString >       McpIds                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserManagerBase::QueryUsers ( TArray< struct FString >* McpIds )
{
	static UFunction* pFnQueryUsers = NULL;

	if ( ! pFnQueryUsers )
		pFnQueryUsers = (UFunction*) UObject::GObjObjects()->Data[ 39624 ];

	UMcpUserManagerBase_execQueryUsers_Parms QueryUsers_Parms;

	this->ProcessEvent ( pFnQueryUsers, &QueryUsers_Parms, NULL );

	if ( McpIds )
		memcpy ( McpIds, &QueryUsers_Parms.McpIds, 0xC );
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldUpdateLastActive        ( CPF_OptionalParm | CPF_Parm )

void UMcpUserManagerBase::QueryUser ( struct FString McpId, unsigned long bShouldUpdateLastActive )
{
	static UFunction* pFnQueryUser = NULL;

	if ( ! pFnQueryUser )
		pFnQueryUser = (UFunction*) UObject::GObjObjects()->Data[ 39621 ];

	UMcpUserManagerBase_execQueryUser_Parms QueryUser_Parms;
	memcpy ( &QueryUser_Parms.McpId, &McpId, 0xC );
	QueryUser_Parms.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent ( pFnQueryUser, &QueryUser_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::OnAuthenticateUserComplete ( struct FString McpId, struct FString Token, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnAuthenticateUserComplete = NULL;

	if ( ! pFnOnAuthenticateUserComplete )
		pFnOnAuthenticateUserComplete = (UFunction*) UObject::GObjObjects()->Data[ 39585 ];

	UMcpUserManagerBase_execOnAuthenticateUserComplete_Parms OnAuthenticateUserComplete_Parms;
	memcpy ( &OnAuthenticateUserComplete_Parms.McpId, &McpId, 0xC );
	memcpy ( &OnAuthenticateUserComplete_Parms.Token, &Token, 0xC );
	OnAuthenticateUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAuthenticateUserComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnAuthenticateUserComplete, &OnAuthenticateUserComplete_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ClientSecret                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UDID                           ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::AuthenticateUserMcp ( struct FString McpId, struct FString ClientSecret, struct FString UDID )
{
	static UFunction* pFnAuthenticateUserMcp = NULL;

	if ( ! pFnAuthenticateUserMcp )
		pFnAuthenticateUserMcp = (UFunction*) UObject::GObjObjects()->Data[ 39613 ];

	UMcpUserManagerBase_execAuthenticateUserMcp_Parms AuthenticateUserMcp_Parms;
	memcpy ( &AuthenticateUserMcp_Parms.McpId, &McpId, 0xC );
	memcpy ( &AuthenticateUserMcp_Parms.ClientSecret, &ClientSecret, 0xC );
	memcpy ( &AuthenticateUserMcp_Parms.UDID, &UDID, 0xC );

	this->ProcessEvent ( pFnAuthenticateUserMcp, &AuthenticateUserMcp_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] 
// Parameters infos:
// struct FString                 FacebookId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FacebookToken                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UDID                           ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::AuthenticateUserFacebook ( struct FString FacebookId, struct FString FacebookToken, struct FString UDID )
{
	static UFunction* pFnAuthenticateUserFacebook = NULL;

	if ( ! pFnAuthenticateUserFacebook )
		pFnAuthenticateUserFacebook = (UFunction*) UObject::GObjObjects()->Data[ 39609 ];

	UMcpUserManagerBase_execAuthenticateUserFacebook_Parms AuthenticateUserFacebook_Parms;
	memcpy ( &AuthenticateUserFacebook_Parms.FacebookId, &FacebookId, 0xC );
	memcpy ( &AuthenticateUserFacebook_Parms.FacebookToken, &FacebookToken, 0xC );
	memcpy ( &AuthenticateUserFacebook_Parms.UDID, &UDID, 0xC );

	this->ProcessEvent ( pFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120000] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Error                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::OnRegisterUserComplete ( struct FString McpId, unsigned long bWasSuccessful, struct FString Error )
{
	static UFunction* pFnOnRegisterUserComplete = NULL;

	if ( ! pFnOnRegisterUserComplete )
		pFnOnRegisterUserComplete = (UFunction*) UObject::GObjObjects()->Data[ 39587 ];

	UMcpUserManagerBase_execOnRegisterUserComplete_Parms OnRegisterUserComplete_Parms;
	memcpy ( &OnRegisterUserComplete_Parms.McpId, &McpId, 0xC );
	OnRegisterUserComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnRegisterUserComplete_Parms.Error, &Error, 0xC );

	this->ProcessEvent ( pFnOnRegisterUserComplete, &OnRegisterUserComplete_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] 
// Parameters infos:
// struct FString                 FacebookId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FacebookAuthToken              ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManagerBase::RegisterUserFacebook ( struct FString FacebookId, struct FString FacebookAuthToken )
{
	static UFunction* pFnRegisterUserFacebook = NULL;

	if ( ! pFnRegisterUserFacebook )
		pFnRegisterUserFacebook = (UFunction*) UObject::GObjObjects()->Data[ 39603 ];

	UMcpUserManagerBase_execRegisterUserFacebook_Parms RegisterUserFacebook_Parms;
	memcpy ( &RegisterUserFacebook_Parms.FacebookId, &FacebookId, 0xC );
	memcpy ( &RegisterUserFacebook_Parms.FacebookAuthToken, &FacebookAuthToken, 0xC );

	this->ProcessEvent ( pFnRegisterUserFacebook, &RegisterUserFacebook_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] 
// Parameters infos:

void UMcpUserManagerBase::RegisterUserGenerated ( )
{
	static UFunction* pFnRegisterUserGenerated = NULL;

	if ( ! pFnRegisterUserGenerated )
		pFnRegisterUserGenerated = (UFunction*) UObject::GObjObjects()->Data[ 39602 ];

	UMcpUserManagerBase_execRegisterUserGenerated_Parms RegisterUserGenerated_Parms;

	this->ProcessEvent ( pFnRegisterUserGenerated, &RegisterUserGenerated_Parms, NULL );
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// class UMcpUserManagerBase*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UMcpUserManagerBase* UMcpUserManagerBase::CreateInstance ( )
{
	static UFunction* pFnCreateInstance = NULL;

	if ( ! pFnCreateInstance )
		pFnCreateInstance = (UFunction*) UObject::GObjObjects()->Data[ 39598 ];

	UMcpUserManagerBase_execCreateInstance_Parms CreateInstance_Parms;

	this->ProcessEvent ( pFnCreateInstance, &CreateInstance_Parms, NULL );

	return CreateInstance_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserManager::OnDeleteUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeleteUserRequestComplete = NULL;

	if ( ! pFnOnDeleteUserRequestComplete )
		pFnOnDeleteUserRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39759 ];

	UMcpUserManager_execOnDeleteUserRequestComplete_Parms OnDeleteUserRequestComplete_Parms;
	OnDeleteUserRequestComplete_Parms.Request = Request;
	OnDeleteUserRequestComplete_Parms.Response = Response;
	OnDeleteUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeleteUserRequestComplete, &OnDeleteUserRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManager::DeleteUser ( struct FString McpId )
{
	static UFunction* pFnDeleteUser = NULL;

	if ( ! pFnDeleteUser )
		pFnDeleteUser = (UFunction*) UObject::GObjObjects()->Data[ 39754 ];

	UMcpUserManager_execDeleteUser_Parms DeleteUser_Parms;
	memcpy ( &DeleteUser_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnDeleteUser, &DeleteUser_Parms, NULL );
};

// Function IpDrv.McpUserManager.GetUser
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FMcpUserStatus          User                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMcpUserManager::GetUser ( struct FString McpId, struct FMcpUserStatus* User )
{
	static UFunction* pFnGetUser = NULL;

	if ( ! pFnGetUser )
		pFnGetUser = (UFunction*) UObject::GObjObjects()->Data[ 39749 ];

	UMcpUserManager_execGetUser_Parms GetUser_Parms;
	memcpy ( &GetUser_Parms.McpId, &McpId, 0xC );

	this->ProcessEvent ( pFnGetUser, &GetUser_Parms, NULL );

	if ( User )
		memcpy ( User, &GetUser_Parms.User, 0x50 );

	return GetUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] 
// Parameters infos:
// TArray< struct FMcpUserStatus > Users                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserManager::GetUsers ( TArray< struct FMcpUserStatus >* Users )
{
	static UFunction* pFnGetUsers = NULL;

	if ( ! pFnGetUsers )
		pFnGetUsers = (UFunction*) UObject::GObjObjects()->Data[ 39746 ];

	UMcpUserManager_execGetUsers_Parms GetUsers_Parms;

	this->ProcessEvent ( pFnGetUsers, &GetUsers_Parms, NULL );

	if ( Users )
		memcpy ( Users, &GetUsers_Parms.Users, 0xC );
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserManager::OnQueryUsersRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryUsersRequestComplete = NULL;

	if ( ! pFnOnQueryUsersRequestComplete )
		pFnOnQueryUsersRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39739 ];

	UMcpUserManager_execOnQueryUsersRequestComplete_Parms OnQueryUsersRequestComplete_Parms;
	OnQueryUsersRequestComplete_Parms.Request = Request;
	OnQueryUsersRequestComplete_Parms.Response = Response;
	OnQueryUsersRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryUsersRequestComplete, &OnQueryUsersRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080002] 
// Parameters infos:
// struct FString                 JsonPayload                    ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManager::ParseUsers ( struct FString JsonPayload )
{
	static UFunction* pFnParseUsers = NULL;

	if ( ! pFnParseUsers )
		pFnParseUsers = (UFunction*) UObject::GObjObjects()->Data[ 39733 ];

	UMcpUserManager_execParseUsers_Parms ParseUsers_Parms;
	memcpy ( &ParseUsers_Parms.JsonPayload, &JsonPayload, 0xC );

	this->ProcessEvent ( pFnParseUsers, &ParseUsers_Parms, NULL );
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] 
// Parameters infos:
// TArray< struct FString >       McpIds                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMcpUserManager::QueryUsers ( TArray< struct FString >* McpIds )
{
	static UFunction* pFnQueryUsers = NULL;

	if ( ! pFnQueryUsers )
		pFnQueryUsers = (UFunction*) UObject::GObjObjects()->Data[ 39725 ];

	UMcpUserManager_execQueryUsers_Parms QueryUsers_Parms;

	this->ProcessEvent ( pFnQueryUsers, &QueryUsers_Parms, NULL );

	if ( McpIds )
		memcpy ( McpIds, &QueryUsers_Parms.McpIds, 0xC );
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserManager::OnQueryUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryUserRequestComplete = NULL;

	if ( ! pFnOnQueryUserRequestComplete )
		pFnOnQueryUserRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39717 ];

	UMcpUserManager_execOnQueryUserRequestComplete_Parms OnQueryUserRequestComplete_Parms;
	OnQueryUserRequestComplete_Parms.Request = Request;
	OnQueryUserRequestComplete_Parms.Response = Response;
	OnQueryUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryUserRequestComplete, &OnQueryUserRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bShouldUpdateLastActive        ( CPF_OptionalParm | CPF_Parm )

void UMcpUserManager::QueryUser ( struct FString McpId, unsigned long bShouldUpdateLastActive )
{
	static UFunction* pFnQueryUser = NULL;

	if ( ! pFnQueryUser )
		pFnQueryUser = (UFunction*) UObject::GObjObjects()->Data[ 39711 ];

	UMcpUserManager_execQueryUser_Parms QueryUser_Parms;
	memcpy ( &QueryUser_Parms.McpId, &McpId, 0xC );
	QueryUser_Parms.bShouldUpdateLastActive = bShouldUpdateLastActive;

	this->ProcessEvent ( pFnQueryUser, &QueryUser_Parms, NULL );
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserManager::OnAuthenticateUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAuthenticateUserRequestComplete = NULL;

	if ( ! pFnOnAuthenticateUserRequestComplete )
		pFnOnAuthenticateUserRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39701 ];

	UMcpUserManager_execOnAuthenticateUserRequestComplete_Parms OnAuthenticateUserRequestComplete_Parms;
	OnAuthenticateUserRequestComplete_Parms.Request = Request;
	OnAuthenticateUserRequestComplete_Parms.Response = Response;
	OnAuthenticateUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAuthenticateUserRequestComplete, &OnAuthenticateUserRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x00020002] 
// Parameters infos:
// struct FString                 McpId                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ClientSecret                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UDID                           ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManager::AuthenticateUserMcp ( struct FString McpId, struct FString ClientSecret, struct FString UDID )
{
	static UFunction* pFnAuthenticateUserMcp = NULL;

	if ( ! pFnAuthenticateUserMcp )
		pFnAuthenticateUserMcp = (UFunction*) UObject::GObjObjects()->Data[ 39694 ];

	UMcpUserManager_execAuthenticateUserMcp_Parms AuthenticateUserMcp_Parms;
	memcpy ( &AuthenticateUserMcp_Parms.McpId, &McpId, 0xC );
	memcpy ( &AuthenticateUserMcp_Parms.ClientSecret, &ClientSecret, 0xC );
	memcpy ( &AuthenticateUserMcp_Parms.UDID, &UDID, 0xC );

	this->ProcessEvent ( pFnAuthenticateUserMcp, &AuthenticateUserMcp_Parms, NULL );
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x00020002] 
// Parameters infos:
// struct FString                 FacebookId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FacebookToken                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UDID                           ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManager::AuthenticateUserFacebook ( struct FString FacebookId, struct FString FacebookToken, struct FString UDID )
{
	static UFunction* pFnAuthenticateUserFacebook = NULL;

	if ( ! pFnAuthenticateUserFacebook )
		pFnAuthenticateUserFacebook = (UFunction*) UObject::GObjObjects()->Data[ 39687 ];

	UMcpUserManager_execAuthenticateUserFacebook_Parms AuthenticateUserFacebook_Parms;
	memcpy ( &AuthenticateUserFacebook_Parms.FacebookId, &FacebookId, 0xC );
	memcpy ( &AuthenticateUserFacebook_Parms.FacebookToken, &FacebookToken, 0xC );
	memcpy ( &AuthenticateUserFacebook_Parms.UDID, &UDID, 0xC );

	this->ProcessEvent ( pFnAuthenticateUserFacebook, &AuthenticateUserFacebook_Parms, NULL );
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020002] 
// Parameters infos:
// class UHttpRequestInterface*   Request                        ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UMcpUserManager::OnRegisterUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterUserRequestComplete = NULL;

	if ( ! pFnOnRegisterUserRequestComplete )
		pFnOnRegisterUserRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 39678 ];

	UMcpUserManager_execOnRegisterUserRequestComplete_Parms OnRegisterUserRequestComplete_Parms;
	OnRegisterUserRequestComplete_Parms.Request = Request;
	OnRegisterUserRequestComplete_Parms.Response = Response;
	OnRegisterUserRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterUserRequestComplete, &OnRegisterUserRequestComplete_Parms, NULL );
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 JsonPayload                    ( CPF_Parm | CPF_NeedCtorLink )

int UMcpUserManager::ParseUser ( struct FString JsonPayload )
{
	static UFunction* pFnParseUser = NULL;

	if ( ! pFnParseUser )
		pFnParseUser = (UFunction*) UObject::GObjObjects()->Data[ 39672 ];

	UMcpUserManager_execParseUser_Parms ParseUser_Parms;
	memcpy ( &ParseUser_Parms.JsonPayload, &JsonPayload, 0xC );

	this->ProcessEvent ( pFnParseUser, &ParseUser_Parms, NULL );

	return ParseUser_Parms.ReturnValue;
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00020002] 
// Parameters infos:
// struct FString                 FacebookId                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 FacebookAuthToken              ( CPF_Parm | CPF_NeedCtorLink )

void UMcpUserManager::RegisterUserFacebook ( struct FString FacebookId, struct FString FacebookAuthToken )
{
	static UFunction* pFnRegisterUserFacebook = NULL;

	if ( ! pFnRegisterUserFacebook )
		pFnRegisterUserFacebook = (UFunction*) UObject::GObjObjects()->Data[ 39666 ];

	UMcpUserManager_execRegisterUserFacebook_Parms RegisterUserFacebook_Parms;
	memcpy ( &RegisterUserFacebook_Parms.FacebookId, &FacebookId, 0xC );
	memcpy ( &RegisterUserFacebook_Parms.FacebookAuthToken, &FacebookAuthToken, 0xC );

	this->ProcessEvent ( pFnRegisterUserFacebook, &RegisterUserFacebook_Parms, NULL );
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00020002] 
// Parameters infos:

void UMcpUserManager::RegisterUserGenerated ( )
{
	static UFunction* pFnRegisterUserGenerated = NULL;

	if ( ! pFnRegisterUserGenerated )
		pFnRegisterUserGenerated = (UFunction*) UObject::GObjObjects()->Data[ 39662 ];

	UMcpUserManager_execRegisterUserGenerated_Parms RegisterUserGenerated_Parms;

	this->ProcessEvent ( pFnRegisterUserGenerated, &RegisterUserGenerated_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UOnlineImageDownloaderWeb::DebugDraw ( class UCanvas* Canvas )
{
	static UFunction* pFnDebugDraw = NULL;

	if ( ! pFnDebugDraw )
		pFnDebugDraw = (UFunction*) UObject::GObjObjects()->Data[ 40580 ];

	UOnlineImageDownloaderWeb_execDebugDraw_Parms DebugDraw_Parms;
	DebugDraw_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDebugDraw, &DebugDraw_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UHttpRequestInterface*   OriginalRequest                ( CPF_Parm )
// class UHttpResponseInterface*  Response                       ( CPF_Parm )
// unsigned long                  bDidSucceed                    ( CPF_Parm )

void UOnlineImageDownloaderWeb::OnDownloadComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed )
{
	static UFunction* pFnOnDownloadComplete = NULL;

	if ( ! pFnOnDownloadComplete )
		pFnOnDownloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 40573 ];

	UOnlineImageDownloaderWeb_execOnDownloadComplete_Parms OnDownloadComplete_Parms;
	OnDownloadComplete_Parms.OriginalRequest = OriginalRequest;
	OnDownloadComplete_Parms.Response = Response;
	OnDownloadComplete_Parms.bDidSucceed = bDidSucceed;

	this->ProcessEvent ( pFnOnDownloadComplete, &OnDownloadComplete_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UOnlineImageDownloaderWeb::DownloadNextImage ( )
{
	static UFunction* pFnDownloadNextImage = NULL;

	if ( ! pFnDownloadNextImage )
		pFnDownloadNextImage = (UFunction*) UObject::GObjObjects()->Data[ 40560 ];

	UOnlineImageDownloaderWeb_execDownloadNextImage_Parms DownloadNextImage_Parms;

	this->ProcessEvent ( pFnDownloadNextImage, &DownloadNextImage_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
// [0x00020002] 
// Parameters infos:

void UOnlineImageDownloaderWeb::ClearPendingDownloads ( )
{
	static UFunction* pFnClearPendingDownloads = NULL;

	if ( ! pFnClearPendingDownloads )
		pFnClearPendingDownloads = (UFunction*) UObject::GObjObjects()->Data[ 40572 ];

	UOnlineImageDownloaderWeb_execClearPendingDownloads_Parms ClearPendingDownloads_Parms;

	this->ProcessEvent ( pFnClearPendingDownloads, &ClearPendingDownloads_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020002] 
// Parameters infos:

void UOnlineImageDownloaderWeb::ClearAllDownloads ( )
{
	static UFunction* pFnClearAllDownloads = NULL;

	if ( ! pFnClearAllDownloads )
		pFnClearAllDownloads = (UFunction*) UObject::GObjObjects()->Data[ 40569 ];

	UOnlineImageDownloaderWeb_execClearAllDownloads_Parms ClearAllDownloads_Parms;

	this->ProcessEvent ( pFnClearAllDownloads, &ClearAllDownloads_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020002] 
// Parameters infos:
// TArray< struct FString >       URLs                           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineImageDownloaderWeb::ClearDownloads ( TArray< struct FString > URLs )
{
	static UFunction* pFnClearDownloads = NULL;

	if ( ! pFnClearDownloads )
		pFnClearDownloads = (UFunction*) UObject::GObjObjects()->Data[ 40565 ];

	UOnlineImageDownloaderWeb_execClearDownloads_Parms ClearDownloads_Parms;
	memcpy ( &ClearDownloads_Parms.URLs, &URLs, 0xC );

	this->ProcessEvent ( pFnClearDownloads, &ClearDownloads_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineImageDownloaderWeb::GetNumPendingDownloads ( )
{
	static UFunction* pFnGetNumPendingDownloads = NULL;

	if ( ! pFnGetNumPendingDownloads )
		pFnGetNumPendingDownloads = (UFunction*) UObject::GObjObjects()->Data[ 40561 ];

	UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Parms GetNumPendingDownloads_Parms;

	this->ProcessEvent ( pFnGetNumPendingDownloads, &GetNumPendingDownloads_Parms, NULL );

	return GetNumPendingDownloads_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00024002] 
// Parameters infos:
// TArray< struct FString >       URLs                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bSRGB                          ( CPF_OptionalParm | CPF_Parm )

void UOnlineImageDownloaderWeb::RequestOnlineImages ( TArray< struct FString > URLs, unsigned long bSRGB )
{
	static UFunction* pFnRequestOnlineImages = NULL;

	if ( ! pFnRequestOnlineImages )
		pFnRequestOnlineImages = (UFunction*) UObject::GObjObjects()->Data[ 40554 ];

	UOnlineImageDownloaderWeb_execRequestOnlineImages_Parms RequestOnlineImages_Parms;
	memcpy ( &RequestOnlineImages_Parms.URLs, &URLs, 0xC );
	RequestOnlineImages_Parms.bSRGB = bSRGB;

	this->ProcessEvent ( pFnRequestOnlineImages, &RequestOnlineImages_Parms, NULL );
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020002] 
// Parameters infos:
// class UTexture*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

class UTexture* UOnlineImageDownloaderWeb::GetOnlineImageTexture ( struct FString URL )
{
	static UFunction* pFnGetOnlineImageTexture = NULL;

	if ( ! pFnGetOnlineImageTexture )
		pFnGetOnlineImageTexture = (UFunction*) UObject::GObjObjects()->Data[ 40550 ];

	UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Parms GetOnlineImageTexture_Parms;
	memcpy ( &GetOnlineImageTexture_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnGetOnlineImageTexture, &GetOnlineImageTexture_Parms, NULL );

	return GetOnlineImageTexture_Parms.ReturnValue;
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] 
// Parameters infos:
// struct FOnlineImageDownload    CachedEntry                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineImageDownloaderWeb::OnOnlineImageDownloaded ( struct FOnlineImageDownload CachedEntry )
{
	static UFunction* pFnOnOnlineImageDownloaded = NULL;

	if ( ! pFnOnOnlineImageDownloaded )
		pFnOnOnlineImageDownloaded = (UFunction*) UObject::GObjObjects()->Data[ 40547 ];

	UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Parms OnOnlineImageDownloaded_Parms;
	memcpy ( &OnOnlineImageDownloaded_Parms.CachedEntry, &CachedEntry, 0x1C );

	this->ProcessEvent ( pFnOnOnlineImageDownloaded, &OnOnlineImageDownloaded_Parms, NULL );
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWebConnection::IsHanging ( )
{
	static UFunction* pFnIsHanging = NULL;

	if ( ! pFnIsHanging )
		pFnIsHanging = (UFunction*) UObject::GObjObjects()->Data[ 41542 ];

	AWebConnection_execIsHanging_Parms IsHanging_Parms;

	this->ProcessEvent ( pFnIsHanging, &IsHanging_Parms, NULL );

	return IsHanging_Parms.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] 
// Parameters infos:

void AWebConnection::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 41541 ];

	AWebConnection_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] 
// Parameters infos:

void AWebConnection::CheckRawBytes ( )
{
	static UFunction* pFnCheckRawBytes = NULL;

	if ( ! pFnCheckRawBytes )
		pFnCheckRawBytes = (UFunction*) UObject::GObjObjects()->Data[ 41539 ];

	AWebConnection_execCheckRawBytes_Parms CheckRawBytes_Parms;

	this->ProcessEvent ( pFnCheckRawBytes, &CheckRawBytes_Parms, NULL );
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] 
// Parameters infos:

void AWebConnection::EndOfHeaders ( )
{
	static UFunction* pFnEndOfHeaders = NULL;

	if ( ! pFnEndOfHeaders )
		pFnEndOfHeaders = (UFunction*) UObject::GObjObjects()->Data[ 41537 ];

	AWebConnection_execEndOfHeaders_Parms EndOfHeaders_Parms;

	this->ProcessEvent ( pFnEndOfHeaders, &EndOfHeaders_Parms, NULL );
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] 
// Parameters infos:

void AWebConnection::CreateResponseObject ( )
{
	static UFunction* pFnCreateResponseObject = NULL;

	if ( ! pFnCreateResponseObject )
		pFnCreateResponseObject = (UFunction*) UObject::GObjObjects()->Data[ 41533 ];

	AWebConnection_execCreateResponseObject_Parms CreateResponseObject_Parms;

	this->ProcessEvent ( pFnCreateResponseObject, &CreateResponseObject_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessPost ( struct FString S )
{
	static UFunction* pFnProcessPost = NULL;

	if ( ! pFnProcessPost )
		pFnProcessPost = (UFunction*) UObject::GObjObjects()->Data[ 41530 ];

	AWebConnection_execProcessPost_Parms ProcessPost_Parms;
	memcpy ( &ProcessPost_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessPost, &ProcessPost_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessGet ( struct FString S )
{
	static UFunction* pFnProcessGet = NULL;

	if ( ! pFnProcessGet )
		pFnProcessGet = (UFunction*) UObject::GObjObjects()->Data[ 41522 ];

	AWebConnection_execProcessGet_Parms ProcessGet_Parms;
	memcpy ( &ProcessGet_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessGet, &ProcessGet_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessHead ( struct FString S )
{
	static UFunction* pFnProcessHead = NULL;

	if ( ! pFnProcessHead )
		pFnProcessHead = (UFunction*) UObject::GObjObjects()->Data[ 41520 ];

	AWebConnection_execProcessHead_Parms ProcessHead_Parms;
	memcpy ( &ProcessHead_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessHead, &ProcessHead_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ReceivedLine ( struct FString S )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = (UFunction*) UObject::GObjObjects()->Data[ 41518 ];

	AWebConnection_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::eventReceivedText ( struct FString Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = (UFunction*) UObject::GObjObjects()->Data[ 41514 ];

	AWebConnection_eventReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 41513 ];

	AWebConnection_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventClosed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 41512 ];

	AWebConnection_eventClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventAccepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = (UFunction*) UObject::GObjObjects()->Data[ 41510 ];

	AWebConnection_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif