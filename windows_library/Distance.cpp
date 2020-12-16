#define DICTANCE_EXPORT

#include "pch.h"
#include "Distance.h"
#include "cmath"
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <iostream>

long double toRadians(const long double& degree) {
    long double one_deg = (M_PI) / 180;
    return (one_deg * degree);
}

char Distance(long double lat1, long double long1, long double lat2, long double long2) {

    // Конвертировать широты и долготы от степени к радианам.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double ans = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlong / 2), 2);

    ans = 2 * asin(sqrt(ans));

    // Радиус Земли в Километры, R = 6371 
    long double R = 6371;
    // Рассчитать результат
    ans = ans * R;

    return char(ans);
}


