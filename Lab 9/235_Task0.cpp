#include <bits/stdc++.h>
#include <msoftcon.h>
#include<ctime>
using namespace std;
#define endl '\n'
#define ll long long

const int cpf = 5;
const int maxHorses = 7;
class Track;

class Horse
{
private:
    const Track *t;
    const int horse_no;
    float finish_time;
    float distance;
public:
    Horse(const int n, const Track *pt): horse_no(n), t(pt), distance(0.0)
    {

    }
    ~Horse()
    {

    }
    void display_horse(const float elapsed_time);
};

class Track
{
private:
    Horse *h[maxHorses];
    int total_horses;
    int horse_count;
    const float track_length;
    float elapsed_time;
public:
    Track(int tlen, int nh);
    ~Track();
    void display_track();
    void run();
    float get_track_len()const;
};

void Horse::display_horse(const float elapsed_time)
{
    set_cursor_pos(1+int(distance*cpf), 2+horse_no*2);
    set_color(static_cast<color>(cBLUE+horse_no));
    char horse_char = '0' + static_cast<char>(horse_no);
    putch(' ');
    putch('\xDB');
    putch(horse_char);
    putch('\xDB');
    if(distance < t->get_track_len()+1.0/cpf)
    {
        if(rand()%3)
            distance+=0.2F;
        finish_time = elapsed_time;
    }
    else
    {
        int mn = int(finish_time)/60;
        int sec = int(finish_time) - mn*60;
        cout<<"Time = "<<mn<<" : "<<sec<<"\n";
    }
}

Track::Track(int tlen, int nh):track_length(tlen), total_horses(nh), horse_count(0), elapsed_time(0.0)
{
    init_graphics();
    total_horses = (total_horses>maxHorses) ? maxHorses : total_horses;
    for(int i=0; i<total_horses; i++)
        h[i] = new Horse(horse_count++, this);
    time_t rtime;
    srand(static_cast<unsigned>(time(&rtime)));
    display_track();
}

Track::~Track()
{
    for(int i=0; i<total_horses; i++)
        delete h[i];
}

void Track::display_track()
{
    clear_screen();
    for(int i=0; i<=track_length; i++)
    {
        for(int j=1; j<=total_horses*2+1; j++)
        {
            set_cursor_pos(i*cpf, j);
            if(i==0 || i==track_length)
                cout<<'\xDE';
            else
                cout<<'\xB3';
        }
    }
}

void Track::run()
{
    while(!kbhit())
    {
        elapsed_time+=1.75;
        for(int i=0; i<total_horses; i++)
            h[i]->display_horse(elapsed_time);
        wait(500);
    }
    getch();
    cout<<"\n";
}

float Track::get_track_len()const
{
    return track_length;
}

int main()
{
    float length;
    int total;
    cout<<"Enter track length (furlong; 1-12): ";
    cin>>length;
    cout<<"Enter number of horses (1-7): ";
    cin>>total;
    Track tr(length, total);
    tr.run();
    return 0;
}
