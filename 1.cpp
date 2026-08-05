#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "这是一个猜数字游戏，请输入两个1-100之间的数字" << endl;
    cout << "让它们的和等于你要猜的数字" << endl;
    cout << "请输入'yes'开始游戏" << endl;
    string l;
    cin >> l;
    if (l == "yes")
    {
        cout << "请输入两个整数" << endl;
        cout << "这个数是两个5的和" << endl;
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c = a + b;
        switch (c)
        {
        case 10:
            cout << "你找到答案了" << endl;
            break;
        default:
            cout << "你没有找到答案,还有2次机会" << endl;
            int d;
            cin >> d;
            int e;
            cin >> e;
            int f = d + e;
            switch (f)
            {
            case 10:
                cout << "你找到答案了" << endl;
                break;
            default:
                cout << "你没有找到答案,还有1次机会" << endl;
                int g;
                cin >> g;
                int h;
                cin >> h;
                int i = g + h;
                switch (i)
                {
                case 10:
                    cout << "你找到答案了" << endl;
                    break;
                default:
                    cout << "你没有找到答案，你输了" << endl;
                    break;
                }
            }
            break;
        }
    }
    system("pause");
    return 0;
}
