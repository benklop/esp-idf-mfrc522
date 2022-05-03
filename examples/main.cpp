#include <stdio.h>

extern void dumpInfo();


extern "C" {
	void app_main();
}

void app_main() {
	while(1) {
        dumpInfo();
    }
}
