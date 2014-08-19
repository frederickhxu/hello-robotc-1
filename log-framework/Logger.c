#ifndef LOGGER_C
#define LOGGER_C
#pragma systemFile
#include "Logger.h"

TFileHandle handle;
TFileIOResult result;

void Logger_Start(string logFileName, int logFileSize, TFileHandle logFileHandle, TFileIOResult logIOResult){
	handle = logFileHandle;
	result = logIOResult;
	string name = logFileName;
	int size = logFileSize;

	OpenWrite(handle, result, name, size);
	//WriteString(handle, result, "derp");
}

void Logger_WriteString(TFileHandle logFileHandle, TFileIOResult logIOResult, string logInput){
	//TFileHandle handle = logFileHandle;
	//TFileIOResult result = logIOResult;
	string phrase = logInput;

	WriteString(handle, result, phrase);
}

void Logger_Close(TFileHandle logFileHandle, TFileIOResult logIOResult){
	//TFileHandle handle = logFileHandle;
	//TFileIOResult result = logIOResult;

	Close(handle, result);
}

/*void logInit(string fileName, int fileSize){
	TFileHandle fh;
	TFileIOResult result;
	string _tmp;

	StringFormat(_tmp, "%d", nSysTime);
	strcat(fileName, _tmp);
	//Delete(fileName, result);
	fileName = "lol";
	OpenWrite(fh, result, fileName, fileSize);
	nxtDisplayCenteredTextLine(2, fileName);

	WriteString(fh, result, "muffin\n");
	Close(fh, result);
}
*/

#endif // LOGGER_C
