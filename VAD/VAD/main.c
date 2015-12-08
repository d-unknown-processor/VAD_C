//
//  main.c
//  VAD
//
//  Created by Kuragin Dmitriy on 15/10/15.
//  Copyright © 2015 Kuragin Dmitriy. All rights reserved.
//

#include <stdio.h>

#include "VAD.h"

int main(int argc, const char * argv[]) {
    
    
    
    for (int i = 0; i < 1000; i++) {
        VADRef vad = createVAD();
        
        
        
        for (int j = 0; j < 1000; j++) {
            short tmp[] = {1, 2, 3, 4};
            
            processVADFrame(vad, (const short *)&tmp, 4);
        }
        
        destroyVAD(vad);
    }
    
    printf("Hello, World!\n");
    
    return 0;
}
