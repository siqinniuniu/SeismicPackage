//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisFkfilt.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define fkfilt_wrap_create             fkfilt_wrap_create_
#define fkfilt_wrap_delete             fkfilt_wrap_delete_
#define fkfilt_wrap_update             fkfilt_wrap_update_
#define fkfilt_wrap_wrapup             fkfilt_wrap_wrapup_
#define fkfilt_wrap_oneset             fkfilt_wrap_oneset_
#define fkfilt_wrap_twosets            fkfilt_wrap_twosets_
#elif NEED_CAPITALS
#define fkfilt_wrap_create             FKFILT_WRAP_CREATE
#define fkfilt_wrap_delete             FKFILT_WRAP_DELETE
#define fkfilt_wrap_update             FKFILT_WRAP_UPDATE
#define fkfilt_wrap_wrapup             FKFILT_WRAP_WRAPUP
#define fkfilt_wrap_oneset             FKFILT_WRAP_ONESET
#define fkfilt_wrap_twosets            FKFILT_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   fkfilt_wrap_create;
    CpseisBase::ModuleDestroy  fkfilt_wrap_delete;
    CpseisBase::ModuleUpdate   fkfilt_wrap_update;
    CpseisBase::ModuleWrapup   fkfilt_wrap_wrapup;
    CpseisBase::ModuleOneset   fkfilt_wrap_oneset;
    CpseisBase::ModuleTwosets  fkfilt_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisFkfilt::CpseisFkfilt() : CpseisBase ("FKFILT",
                                       fkfilt_wrap_create,
                                       fkfilt_wrap_delete,
                                       fkfilt_wrap_update,
                                       fkfilt_wrap_wrapup,
                                       fkfilt_wrap_oneset,
                                       fkfilt_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
