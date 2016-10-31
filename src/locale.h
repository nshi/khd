#ifndef KHD_LOCALE_H
#define KHD_LOCALE_H

#include <stdlib.h>

struct hotkey;
bool KeycodeFromChar(char Key, hotkey *Hotkey);
bool ButtonFromString(const char *Key, hotkey *Hotkey);
bool LayoutIndependentKeycode(char *Key, hotkey *Hotkey);
bool StringsAreEqual(const char *A, const char *B);
bool StringHasPrefix(const char *A, const char *Prefix, size_t n);

#endif
