#include <iostream>
#include <fstream>

using namespace std;

struct rgb
{
    int r;
    int g;
    int b;
};

void baltosUzdejimas(rgb xx[100][100])
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            xx[i][j].r = 255;
            xx[i][j].g = 255;
            xx[i][j].b = 255;
        }
    }
}

void spalvuUzdejimas(rgb xx[100][100], int x, int dx, int y, int dy, int r, int g, int b)
{
    for (int i = y; i < y + dy; y++)
    {
        for (int j = x; j < x + dx; x++)
        {
            xx[i][j].r = r;
            xx[i][j].g = g;
            xx[i][j].b = b;
        }
    }
}

int main()
{
    rgb xx[100][100];
    int kiek, x, y, dx, dy, r, g, b;
    baltosUzdejimas(xx);
    cout << xx[0][0].r << " " << xx[0][0].g << " " << xx[0][0].b << " " << endl;
    ifstream failas("u2017_2.txt");
    failas >> kiek;

    for (int a = 0; a < kiek; a++)
    {
        failas >> x >> y >> dx >> dy >> r >> g >> b;
        spalvuUzdejimas(xx, x, dx, y, dy, r, g, b);
    }

    return 0;
}
