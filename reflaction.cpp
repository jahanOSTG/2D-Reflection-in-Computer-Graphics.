#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
     setbkcolor(WHITE);  // Set background color to white
    cleardevice(); 

    // Original rectangle
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;

    // Reflection choice (along X-axis, Y-axis, or origin)
    int choice;
    cout << "Enter reflection choice:\n1. Reflect along X-axis\n2. Reflect along Y-axis\n3. Reflect along the origin\n";
    cin >> choice;

    // Original shape
    setcolor(BLACK);
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 10, "Original graph");

    // Reflection
    setcolor(RED);
    if (choice == 1) {
        // Reflecting along the X-axis (invert Y-coordinates)
        rectangle(x1, -y1 + getmaxy(), x2, -y2 + getmaxy());
        outtextxy(x1, -y1 + getmaxy() - 10, "Reflection along X-axis");
    }
    else if (choice == 2) {
        // Reflecting along the Y-axis (invert X-coordinates)
        rectangle(-x1 + getmaxx(), y1, -x2 + getmaxx(), y2);
        outtextxy(-x1 + getmaxx(), y1 - 10, "Reflection along Y-axis");
    }
    else if (choice == 3) {
        // Reflecting along the origin (invert both X and Y coordinates)
        rectangle(-x1 + getmaxx(), -y1 + getmaxy(), -x2 + getmaxx(), -y2 + getmaxy());
        outtextxy(-x1 + getmaxx(), -y1 + getmaxy() - 10, "Reflection along Origin");
    }

    getch();
    closegraph();
    return 0;
}

