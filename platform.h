#ifndef __PLATFORM__
#define __PLATFORM__

#if defined __GNUC__
#define GNUC 1
#elif defined _MSC_VER_
#define VC 1
#endif

#endif
