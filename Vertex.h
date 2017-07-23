#ifndef __VERTEX_H_
#define __VERTEX_H_

#include <iostream>
#include <iomanip>
#include "DS.h"

#define INFINITY 0
#define MAX_VERTEX_NUM 20

using namespace std;

typedef int VRType;
typedef int InfoType;
typedef char VerTexType;

typedef struct ArcCell
{
    VRType adj;
    InfoType *info;

} ArcCell, AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct
{
    VerTexType vexs[MAX_VERTEX_NUM];
    AdjMatrix arcs;
    int vexnum, arcnum;

} MGraph;

void CreateGraph(MGraph &G);
int LocateVex(MGraph G,VerTexType u);
void PrintGraph(MGraph G);

#endif
