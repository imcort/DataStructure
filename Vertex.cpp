#include "Vertex.h"

void CreateGraph(MGraph &G)
{
    VRType weigh;
    VRType i = 0, j = 0, k = 0;
    VerTexType vex1, vex2;

    cout << "Input the number for vex and arc:" << endl;
    cin >> G.vexnum >> G.arcnum;
    cout << endl;

    cout << "Input " << G.vexnum << " char for vertices:";
    for (i = 0; i < G.vexnum; i++)
        cin >> G.vexs[i];

    for (i = 0; i < G.vexnum; i++)
        for (j = 0; j < G.vexnum; j++)
            G.arcs[i][j].adj = INFINITY;
    cout << endl;

    cout << "Input " << G.arcnum << " arcs(char char weigh):" << endl;
    for (k = 0; k < G.arcnum; k++)
    {
        cout << k << ':';
        cin >> vex1;
        cin >> vex2;
        cin >> weigh;
        i = LocateVex(G, vex1);
        j = LocateVex(G, vex2);
        G.arcs[i][j].adj = weigh;
        G.arcs[j][i].adj = weigh;
    }
    cout << endl;
}

int LocateVex(MGraph G, VerTexType u)
{
    for (int i = 0; i < G.vexnum; i++)
        if (u == G.vexs[i])
            return i;
    return -1;
}

void PrintGraph(MGraph G)
{
    cout << "  ";
    for (char i = 0; i < G.vexnum; i++)
        cout << G.vexs[i] << ' ';
    cout << endl;
    for (int i = 0; i < G.vexnum; i++)
    {
        cout << G.vexs[i] << ' ';
        for (int j = 0; j < G.vexnum; j++)
            cout << G.arcs[i][j].adj << ' ';
        cout << endl;
    }
}
