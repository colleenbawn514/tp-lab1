#pragma once

#ifdef DICTANCE_EXPORT
#define DICTANCE_API __declspec(dllexport)
#else
#define DICTANCE_API __declspec(dllimport)
#endif

extern "C" DICTANCE_API char Distance(long double lat1, long double long1, long double lat2, long double long2);