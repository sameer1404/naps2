// NAPS2.WIA.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


HRESULT CreateWiaDeviceManager(IWiaDevMgr2 **ppWiaDevMgr) //Vista or later
{
	//
	// Validate arguments
	//
	if (NULL == ppWiaDevMgr)
	{
		return E_INVALIDARG;
	}

	//
	// Initialize out variables
	//
	*ppWiaDevMgr = NULL;

	//
	// Create an instance of the device manager
	//

	//Vista or later:
	HRESULT hr = CoCreateInstance(CLSID_WiaDevMgr2, NULL, CLSCTX_LOCAL_SERVER, IID_IWiaDevMgr2, (void**)ppWiaDevMgr);

	//
	// Return the result of creating the device manager
	//
	return hr;
}