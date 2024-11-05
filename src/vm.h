#pragma once
#define clox_vm_h

#include "chunk.h"

typedef struct {
	Chunk* chunk;
} VM;

void initVM();
void freeVM();
