//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisGstk.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define gstk_wrap_create             gstk_wrap_create_
#define gstk_wrap_delete             gstk_wrap_delete_
#define gstk_wrap_update             gstk_wrap_update_
#define gstk_wrap_wrapup             gstk_wrap_wrapup_
#define gstk_wrap_oneset             gstk_wrap_oneset_
#define gstk_wrap_twosets            gstk_wrap_twosets_
#elif NEED_CAPITALS
#define gstk_wrap_create             GSTK_WRAP_CREATE
#define gstk_wrap_delete             GSTK_WRAP_DELETE
#define gstk_wrap_update             GSTK_WRAP_UPDATE
#define gstk_wrap_wrapup             GSTK_WRAP_WRAPUP
#define gstk_wrap_oneset             GSTK_WRAP_ONESET
#define gstk_wrap_twosets            GSTK_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   gstk_wrap_create;
    CpseisBase::ModuleDestroy  gstk_wrap_delete;
    CpseisBase::ModuleUpdate   gstk_wrap_update;
    CpseisBase::ModuleWrapup   gstk_wrap_wrapup;
    CpseisBase::ModuleOneset   gstk_wrap_oneset;
    CpseisBase::ModuleTwosets  gstk_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisGstk::CpseisGstk() : CpseisBase ("GSTK",
                                       gstk_wrap_create,
                                       gstk_wrap_delete,
                                       gstk_wrap_update,
                                       gstk_wrap_wrapup,
                                       gstk_wrap_oneset,
                                       gstk_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
