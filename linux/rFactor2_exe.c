#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#define BUF_SIZE 0x40000

int main(int argc, char** argv) {
    printf("HELLO!\n");
    int n_mappings = 4;
    HANDLE maph[n_mappings];
    const TCHAR* mappings[] = {
        TEXT("$rFactor2SMMP_Telemetry$"),
        TEXT("$rFactor2SMMP_Scoring$"),
        TEXT("$rFactor2SMMP_Extended$"),
        TEXT("$rFactor2SMMP_PitInfo$"),
    };
    
    for (int i=0; i < n_mappings; i++) {		
    	maph[i] = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, BUF_SIZE, mappings[i]);
    	if (maph[i] == NULL)
    	{
        	printf("Could not create file mapping object (%ld).\n", GetLastError());
        	return 1;
   		}
	}
	
    Sleep(10000);
	for (int i=0; i < n_mappings; i++) {
			if (maph[i] != NULL) CloseHandle( maph[i] );
	}
	
    return 0;
}
