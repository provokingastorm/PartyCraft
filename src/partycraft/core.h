// core.h

// Types
typedef unsigned char		bit;
typedef char				chr;
typedef signed char			int8;
typedef unsigned char		uint8;
typedef signed short		int16;
typedef unsigned short		uint16;
typedef int					int32;
typedef unsigned int		uint32;
typedef float				float32;
typedef double				float64;
typedef void*				ptr;

#if BUILD_MSVC
typedef __int64				int64;
typedef unsigned __int64	uint64;
#endif // BUILD_MSVC

#if BUILD_GCC
typedef signed long long	int64;
typedef unsigned long long	uint64;
#endif // BUILD_GCC

// EOF
