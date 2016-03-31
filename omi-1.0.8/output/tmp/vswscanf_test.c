#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>
extern int vswscanf(const wchar_t*, const wchar_t*, va_list);
static void scan(const wchar_t* str, const wchar_t* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    vswscanf(str, fmt, args);
    va_end(args);
}
int main()
{
    const wchar_t *str = L"37";
    const wchar_t *fmt = L"%d";
    int n;
    scan(str, fmt, &n);
    return 0;
}
