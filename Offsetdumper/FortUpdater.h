#pragma once
#include <Windows.h>
#include <iostream>
#include <string>

static const void* game_rbx_jmp;

class FortUpdater
{
public:
	bool Init(uintptr_t UObjectArray, uintptr_t GetNameByIndex);
	DWORD FindOffset(const char* Class, const char* var);

private:
	uintptr_t UObjectArray = NULL;
	uintptr_t GetNameByIndex = NULL;
	DWORD ObjectsCount = 0;

	void cFixName(char* Name);
	void FreeObjName(uintptr_t Address);
	char* fGetObjectName(uintptr_t Object);
	char* fGetNameByIndex(int Index);
};