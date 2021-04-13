

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 21:14:07 2038
 */
/* Compiler settings for CallerAllocatedLib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CallerAllocatedLib_h__
#define __CallerAllocatedLib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IStuff_FWD_DEFINED__
#define __IStuff_FWD_DEFINED__
typedef interface IStuff IStuff;

#endif 	/* __IStuff_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStuff_INTERFACE_DEFINED__
#define __IStuff_INTERFACE_DEFINED__

/* interface IStuff */
/* [object][custom][unique][version][uuid] */ 


EXTERN_C const IID IID_IStuff;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E559D616-4C46-4434-9DF7-E9D7C91F3BA5")
    IStuff : public IUnknown
    {
    public:
        virtual HRESULT __stdcall GetShortTest( 
            /* [in] */ long i,
            /* [in] */ BOOL b,
            /* [string][out] */ TCHAR shortText[ 10 ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStuffVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStuff * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStuff * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStuff * This);
        
        HRESULT ( __stdcall *GetShortTest )( 
            IStuff * This,
            /* [in] */ long i,
            /* [in] */ BOOL b,
            /* [string][out] */ TCHAR shortText[ 10 ]);
        
        END_INTERFACE
    } IStuffVtbl;

    interface IStuff
    {
        CONST_VTBL struct IStuffVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStuff_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStuff_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStuff_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStuff_GetShortTest(This,i,b,shortText)	\
    ( (This)->lpVtbl -> GetShortTest(This,i,b,shortText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStuff_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


