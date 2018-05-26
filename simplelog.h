// Simple Logger
// Created by Kiritow (github.com/kiritow)

#ifndef _kiritow_logger_simplelog_h
#define _kiritow_logger_simplelog_h

// 0 None (Silent)
// 1 Error
// 2 Error, Warning
// 3 Error, Warning, Info
// 4 Error, Warning, Info, Debug

#ifndef CONFIG_LOG_LEVEL
#define CONFIG_LOG_LEVEL 4
#endif

#if (CONFIG_LOG_LEVEL==0)
#define dprintf(fmt,...)
#else
#define dprintf(fmt,...) printf(fmt,##__VA_ARGS__)
#endif

#endif // End of _kiritow_logger_simplelog_h