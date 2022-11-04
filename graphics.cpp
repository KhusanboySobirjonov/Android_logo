#include <graphics.h>
#include <stdlib.h>

int main()
{
    // ish maydoni o'lchami
    initwindow(510, 540);

    // orqa fon
    setbkcolor(WHITE);
    cleardevice();

    // muallif
    setcolor(CYAN);
    settextstyle(8, 0, 1);
    outtextxy(5, 515, "Muallif : Khusanboy Sobirjonov");

    // yozuv
    setcolor(CYAN);
    settextstyle(9, 0, 3);
    outtextxy(120, 30, "C++ da tayyorlandi");

    // chiziqlar rangi
    setcolor(GREEN);

    // bosh qismi
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(250, 200, 100, 100);
    setfillstyle(SOLID_FILL, WHITE);
    bar(150, 200, 350, 205);

    // shoxlar
    // chap
    line(209, 108, 189, 75);
    line(209, 108, 190, 75);
    line(209, 108, 191, 75);
    line(209, 108, 192, 75);
    line(210, 108, 189, 75);
    line(210, 108, 190, 75);
    line(210, 108, 191, 75);
    line(210, 108, 192, 75);
    line(211, 108, 189, 75);
    line(211, 108, 190, 75);
    line(211, 108, 191, 75);
    line(211, 108, 192, 75);
    line(212, 108, 189, 75);
    line(212, 108, 190, 75);
    line(212, 108, 191, 75);
    line(212, 108, 192, 75);

    // o'ng
    line(291, 108, 311, 75);
    line(291, 108, 310, 75);
    line(291, 108, 309, 75);
    line(291, 108, 308, 75);
    line(290, 108, 311, 75);
    line(290, 108, 310, 75);
    line(290, 108, 309, 75);
    line(290, 108, 308, 75);
    line(289, 108, 311, 75);
    line(289, 108, 310, 75);
    line(289, 108, 309, 75);
    line(289, 108, 308, 75);
    line(288, 108, 311, 75);
    line(288, 108, 308, 75);
    line(288, 108, 309, 75);
    line(288, 108, 310, 75);

    // ko'zlar
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(203, 150, 7, 7);
    fillellipse(297, 150, 7, 7);

    // tanasi
    setfillstyle(SOLID_FILL, GREEN);
    bar(150, 205, 350, 370);
    bar(170, 350, 330, 390);
    fillellipse(170, 370, 20, 20);
    fillellipse(330, 370, 20, 20);

    // chap qo'li
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(122, 225, 23, 23);
    bar(99, 225, 145, 335);
    fillellipse(122, 335, 23, 23);

    // o'ng qo'li
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(378, 225, 23, 23);
    bar(355, 225, 401, 335);
    fillellipse(378, 335, 23, 23);

    // chap oyoq
    setfillstyle(SOLID_FILL, GREEN);
    bar(190, 390, 236, 440);
    fillellipse(213, 440, 23, 23);

    // o'ng oyoq
    setfillstyle(SOLID_FILL, GREEN);
    bar(264, 390, 310, 440);
    fillellipse(287, 440, 23, 23);

    // logo haqida
    settextstyle(10, 0, 4);
    outtextxy(180, 480, "Android");

    system("pause");
    closegraph();

    return 0;
}
