//   __                    .__              ________ .________ ________   ______  
//  |  | __  ____    ______|  |__   __ __  /  _____/ |   ____//   __   \ /  __  \ 
//  |  |/ /_/ __ \  /  ___/|  |  \ |  |  \/   __  \  |____  \ \____    / >      < 
//  |    < \  ___/  \___ \ |   Y  \|  |  /\  |__\  \ /       \   /    / /   --   \
//  |__|_ \ \___  >/____  >|___|  /|____/  \_____  //______  /  /____/  \______  /
//       \/     \/      \/      \/               \/        \/                  \/
 
#include<bits/stdc++.h>
#define range 100005
#define mod 1000000007
#define eps 1e-9
#define PI 3.14159265358979323846
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ALL(V) V.begin(), V.end()
#define _ <<" "<<
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>  
 
using namespace std;
 
typedef long long ll;
typedef vector <int> vi;
typedef vector<vi> vvi;
typedef pair <int, int> ii;
typedef pair<int, pair<int,int> > iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

class Movie {

private: 
    string movieName;
    int year;
    string genere;

public:
    Movie() {
        movieName = "default Movie Name";
        year = -1;
        genere = "default genere";
    }

    Movie(string mn, int y, string g) {
        movieName = mn;
        year = y;
        genere = g;
    }

    void getMovieDetails() {
        cout << "Movie :: " << movieName << endl;
        cout << "Released in Year :: " << year << endl;
        cout << "Genere :: " << genere << endl;
    }

    string getMovieName() {
        return movieName;
    }

    void setMovieName(string mn) {
        movieName = mn;
    }

    int getYear() {
        return year;
    }

    void setYear(int y) {
        year = y;
    }

    string getGenere() {
        return genere;
    }

    void setGenere(string g) {
        genere = g;
    }

};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Movie movie("Ram Teri Ganga Maili", 1985, "Drama, Musical, Romance");
    movie.getMovieDetails();
    cout << endl;
    movie.setMovieName("Ye Jawani Hai Diwani");
    movie.setYear(2000);
    movie.getMovieDetails();
    return 0;
}