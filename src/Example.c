#include "UnityTest.h"
// 1# Compila o UnityTest.C como uma Dll
// gcc -shared  -o src/modules/UnityTest.dll src/modules/UnityTest.c -Isrc/modules/UnityTest
// 2# Compila o example e linka com a dll
// gcc src/Example.c -o example -Isrc/modules/UnityTest -Lsrc/modules -lUnityTest
int main(){
    assert();
    return 0;
}