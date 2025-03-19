#include <iostream>

using namespace std;
class sll
{
public:
    int data;
    sll *next;
    sll(int data)
    {
        this->data = data;
        next = NULL;
    }
    sll(){};
};
class dll
{
    int x;
    dll *prv;
    sll *nxt;

    dll(int x1)
    {
        x = x1;
        nxt = NULL;
        prv = nullptr;
    }

    void create(int d)
    {
        dll *dllh = nullptr, *tmp = nullptr, *t1 = nullptr;

        if (dllh == nullptr)
        {
            tmp = new dll(d);
            dllh = tmp;
        }
        else
        {
            t1 = dllh;

            while (t1 != nullptr) // dll traverse
            {
                t1 = t1->prv;
                t1->prv = tmp;
            }

            t1 = dllh;
            sll *t2 = nullptr, *t3 = nullptr;
            int l, x;
            cin >> l;
            for (int i = 0; i <= l; i++)
            {
                cin >> x;
                t2 = new sll(x);

                if (t1->nxt == nullptr)
                {
                    t1->nxt = t2;
                }
                else
                {
                    t3 = t2->next;

                    while (t3->next != nullptr)
                    {
                        t3 = t3->next;
                        t3->next = t2;
                    }
                }
            }
        }
    }
};
