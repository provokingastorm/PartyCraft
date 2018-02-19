include(Platform/HP-UX-HP)
__hpux_compiler_hp(CXX)

set(CMAKE_SHARED_LIBRARY_CREATE_CXX_FLAGS "+Z -Wl,-E,+nodefaultrpath -b -L/usr/lib")

set(CMAKE_CXX_CREATE_PREPROCESSED_SOURCE "<CMAKE_CXX_COMPILER> <DEFINES> <FLAGS> -E <SOURCE> > <PREPROCESSED_SOURCE>")
set(CMAKE_CXX_CREATE_ASSEMBLY_SOURCE
  "<CMAKE_CXX_COMPILER> <DEFINES> <FLAGS> -S <SOURCE>"
  "mv `basename \"<SOURCE>\" | sed 's/\\.[^./]*$$//'`.s <ASSEMBLY_SOURCE>"
  "rm -f `basename \"<SOURCE>\" | sed 's/\\.[^./]*$$//'`.o"
  )

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-g")
set(CMAKE_CXX_FLAGS_MINSIZEREL_INIT "+O3 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "+O2 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT "-g")
