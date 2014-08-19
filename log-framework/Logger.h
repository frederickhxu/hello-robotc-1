#ifndef LOGGER_H
#define LOGGER_H
#pragma systemFile

void Logger_Start(string logFileName, int logFileSize, TFileHandle logFileHandle, TFileIOResult logIOResult);

void Logger_WriteString(TFileHandle logFileHandle, TFileIOResult logIOResult, string logInput);

void Logger_Close(TFileHandle logFileHandle, TFileIOResult logIOResult);

#include "Logger.c"
#endif // LOGGER_H
