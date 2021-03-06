!!------------------------ ttrin_wrap.f90 --------------------------!!
!!------------------------ ttrin_wrap.f90 --------------------------!!
!!------------------------ ttrin_wrap.f90 --------------------------!!

!!!!!!!!!! DO NOT EDIT THIS FILE - it is machine generated !!!!!!!!!!

!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!

      module ttrin_wrap_module
      use ttrin_module
      implicit none
      public

      type :: ttrin_wrap_struct
        type(ttrin_struct),pointer :: obj
      end type ttrin_wrap_struct

      end module ttrin_wrap_module

!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!

      subroutine ttrin_wrap_create (fpoint)  
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(out)   :: fpoint
      type(ttrin_struct)     ,pointer       :: obj           ! local

      nullify (obj)               ! needed for intel compiler.
      call ttrin_create (obj)
      fpoint%obj => obj

      end subroutine ttrin_wrap_create

!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!

      subroutine ttrin_wrap_delete (fpoint)   
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(inout) :: fpoint
      type(ttrin_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call ttrin_delete (obj)
      fpoint%obj => obj

      end subroutine ttrin_wrap_delete

!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!

      subroutine ttrin_wrap_update (fpoint)     
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(inout) :: fpoint
      type(ttrin_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call ttrin_update (obj)

      end subroutine ttrin_wrap_update

!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!

      subroutine ttrin_wrap_wrapup (fpoint)      
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(inout) :: fpoint
      type(ttrin_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call ttrin_wrapup (obj)

      end subroutine ttrin_wrap_wrapup

!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!

      subroutine ttrin_wrap_oneset (fpoint,ntr,  &
                                   hd,tr,lenhd,lentr,num)
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd,lentr,num  ! argument
      integer               ,intent(inout) :: ntr              ! argument
      double precision      ,intent(inout) :: hd(lenhd,num)    ! argument
      real                  ,intent(inout) :: tr(lentr,num)    ! argument
      type(ttrin_struct)     ,pointer       :: obj              ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call ttrin (obj,ntr,hd,tr)                ! might be commented out.

      end subroutine ttrin_wrap_oneset

!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!

      subroutine ttrin_wrap_twosets (fpoint,ntr,                 &
                                    hd1,tr1,lenhd1,lentr1,num1, &
                                    hd2,tr2,lenhd2,lentr2,num2)
      use ttrin_wrap_module
      implicit none
      type(ttrin_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd1,lentr1,num1 ! argument
      integer               ,intent(in)    :: lenhd2,lentr2,num2 ! argument
      integer               ,intent(inout) :: ntr                ! argument
      double precision      ,intent(inout) :: hd1(lenhd1,num1)   ! argument
      real                  ,intent(inout) :: tr1(lentr1,num1)   ! argument
      double precision      ,intent(inout) :: hd2(lenhd2,num2)   ! argument
      real                  ,intent(inout) :: tr2(lentr2,num2)   ! argument
      type(ttrin_struct)     ,pointer       :: obj                ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
!!!!  call ttrin (obj,ntr,hd1,tr1,hd2,tr2)      ! might be commented out.

      end subroutine ttrin_wrap_twosets

!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!
