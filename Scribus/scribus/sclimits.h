/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#ifndef SCLIMITS_H
#define SCLIMITS_H

#if defined(_MSC_VER)
#if !defined(_USE_MATH_DEFINES)
	#define _USE_MATH_DEFINES
#endif
#define NOMINMAX
#endif

#include <limits>

#ifdef _WIN32
#ifdef min
	#undef min
#endif
#ifdef max
	#undef max
#endif
#endif

#endif
