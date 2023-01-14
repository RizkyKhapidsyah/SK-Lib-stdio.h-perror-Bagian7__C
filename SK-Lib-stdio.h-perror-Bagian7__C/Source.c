#pragma warning(disable:4996)

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <share.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void)
{
    int  fh;

    if (_sopen_s(&fh, "NOSUCHF.ILE", _O_RDONLY, _SH_DENYNO, 0) != 0) {
        perror("perror says open failed");
        printf("strerror says open failed: %s\n", strerror(errno));
        printf(_strerror("_strerror says open failed")); 
    } else {
        printf("open succeeded on input file\n");
        _close(fh);
    }

    _getch();
    return 0;
}