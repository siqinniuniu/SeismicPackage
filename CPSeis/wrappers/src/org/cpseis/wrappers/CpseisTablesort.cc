//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisTablesort.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define tablesort_wrap_create             tablesort_wrap_create_
#define tablesort_wrap_delete             tablesort_wrap_delete_
#define tablesort_wrap_update             tablesort_wrap_update_
#define tablesort_wrap_wrapup             tablesort_wrap_wrapup_
#define tablesort_wrap_oneset             tablesort_wrap_oneset_
#define tablesort_wrap_twosets            tablesort_wrap_twosets_
#elif NEED_CAPITALS
#define tablesort_wrap_create             TABLESORT_WRAP_CREATE
#define tablesort_wrap_delete             TABLESORT_WRAP_DELETE
#define tablesort_wrap_update             TABLESORT_WRAP_UPDATE
#define tablesort_wrap_wrapup             TABLESORT_WRAP_WRAPUP
#define tablesort_wrap_oneset             TABLESORT_WRAP_ONESET
#define tablesort_wrap_twosets            TABLESORT_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   tablesort_wrap_create;
    CpseisBase::ModuleDestroy  tablesort_wrap_delete;
    CpseisBase::ModuleUpdate   tablesort_wrap_update;
    CpseisBase::ModuleWrapup   tablesort_wrap_wrapup;
    CpseisBase::ModuleOneset   tablesort_wrap_oneset;
    CpseisBase::ModuleTwosets  tablesort_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisTablesort::CpseisTablesort() : CpseisBase ("TABLESORT",
                                       tablesort_wrap_create,
                                       tablesort_wrap_delete,
                                       tablesort_wrap_update,
                                       tablesort_wrap_wrapup,
                                       tablesort_wrap_oneset,
                                       tablesort_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
