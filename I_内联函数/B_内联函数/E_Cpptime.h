//
// Created by 何时夕 on 2017/12/24.
//

#ifndef THINKING_IN_C_CPPTIME_H
#define THINKING_IN_C_CPPTIME_H
#include <ctime>
#include <cstring>
using namespace std;
class Time {
    time_t t;
    tm local;
    char asciiRep[26];
    unsigned char lflag , aflag;
    void updateLocal() {
        if(!lflag) {
            local = *localtime(&t);
            lflag++;
        }
    }

    void updateAscii() {
        if(!aflag) {
            updateLocal();
            strcpy(asciiRep , asctime(&local));
            aflag++;
        }
    }

public:
    Time() {
        mark();
    }
    void mark() {
        lflag = aflag = 0;
        time(&t);
    }
    const char *ascii() {
        updateAscii();
        return asciiRep;
    }
    int delta(Time *dt) const {
        return int(difftime(t , dt->t));
    }
    int daylightSavings() {
        updateLocal();
        return local.tm_isdst;
    }
    int dayOfYear() {
        updateLocal();
        return local.tm_yday;
    }
    int dayOfWeek() {
        updateLocal();
        return local.tm_wday;
    }
    int since1900() {
        updateLocal();
        return local.tm_year;
    }
    int month() {
        updateLocal();
        return local.tm_mon;
    }
    int dayOfMonth() {
        updateLocal();
        return local.tm_mday;
    }
    int hour() {
        updateLocal();
        return local.tm_hour;
    }
    int minute() {
        updateLocal();
        return local.tm_min;
    }
    int second() {
        updateLocal();
        return local.tm_sec;
    }
};
/**
 * 使用内联函数是为了减小开销，如果内联函数体过大会消耗更多内存。
 * 像我们在上面的 ascii()方法之后 都是类内联函数。这时候会有点不划算，
 * 因为updateLocal也会跟着被调用的函数展开，这样就无端的展开了很多重复的函数体。
 */
#endif //THINKING_IN_C_CPPTIME_H
