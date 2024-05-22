#include "UnityTest.h"
#include <stdio.h>
// gcc -c UnityTest.c -fpic -IUnityTest
// 1# Compila o UnityTest.C como uma Dll
// gcc UnityTest.o -shared -o UnityTest.dll
// 2# Compila o example e linka com a dll
// gcc src/Example.c -o example -Isrc/modules/UnityTest -Lsrc/modules -lUnityTest
// objeto do exemplo
// gcc -c .\Example.c -Imodules/UnityTest
// cria o executavel
// gcc -o example .\Example.o -L. -lUnityTest

int helloWorld(){
    printf("Hello, World!");
    return 0;
}

int main(){
    assert(helloWorld);
    return 0;
}

