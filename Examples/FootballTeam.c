#include <stdio.h>
#include <stdlib.h>

struct football_team
{
    int established_year;
    char rank_in_league;
    char captain_name[20];
};
int main()
{
    struct football_team RealMadrid={.captain_name="Nacho"};;
    RealMadrid.established_year = 1902;
    RealMadrid.rank_in_league= 'S';
    //RealMadrid.captain_name = "Nacho";

    printf("Name: Real Madrid\n");
    printf("Established year: %d\n",RealMadrid.established_year);
    printf("Rank in league: %c\n",RealMadrid.rank_in_league);
    printf("Captain Name:%s ",RealMadrid.captain_name);
    return 0;
}
