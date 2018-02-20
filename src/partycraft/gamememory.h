// gamememory.h
#include "core.h"

struct GameMemory
{
	uint64 GlobalStorageSize;
	uint64 TransientStorageSize;

	void* GlobalStorage;
	void* TransientStorage;

	bool IsInitialized;
};

// EOF
