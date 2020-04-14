#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < n; i++)
#define repr(i, n) for(ll i = n; i >= 0; i--)
#define inf LLONG_MAX
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


int main()
{
    double deg, dis; cin >> deg >> dis; deg /= 10, dis /= 60;
    ll wp = 0;
    if (dis < 0.25) {
        wp = 0;
    } else if (dis < 1.55) {
        wp = 1;
    } else if (dis < 3.35) {
        wp = 2;
    } else if (dis < 5.45) {
        wp = 3;
    } else if (dis < 7.95) {
        wp = 4;
    } else if (dis < 10.75) {
        wp = 5;
    } else if (dis < 13.85) {
        wp = 6;
    } else if (dis < 17.15) {
        wp = 7;
    } else if (dis < 20.75) {
        wp = 8;
    } else if (dis < 24.45) {
        wp = 9;
    } else if (dis < 28.45) {
        wp = 10;
    } else if (dis < 32.65) {
        wp = 11;
    } else {
        wp = 12;
    }

    string wd = "";
    if (11.25 <= deg && deg < 33.75) {
        wd = "NNE";
    } else if (33.75 <= deg && deg < 56.25) {
        wd = "NE";
    } else if (56.25 <= deg && deg < 78.75) {
        wd = "ENE";
    } else if (78.75 <= deg && deg < 101.25) {
        wd = "E";
    } else if (101.25 <= deg && deg < 123.75) {
        wd = "ESE";
    } else if (123.75 <= deg && deg < 146.25) {
        wd = "SE";
    } else if (146.25 <= deg && deg < 168.75) {
        wd = "SSE";
    } else if (168.75 <= deg && deg < 191.25) {
        wd = "S";
    } else if (191.25 <= deg && deg < 213.75) {
        wd = "SSW";
    } else if (213.75 <= deg && deg < 236.25) {
        wd = "SW";
    } else if (236.25 <= deg && deg < 258.75) {
        wd = "WSW";
    } else if (258.75 <= deg && deg < 281.25) {
        wd = "W";
    } else if (281.25 <= deg && deg < 303.75) {
        wd = "WNW";
    } else if (303.75 <= deg && deg < 326.25) {
        wd = "NW";
    } else if (326.25 <= deg && deg < 348.75) {
        wd = "NNW";
    } else {
        wd = "N";
    }

    if (wp == 0) {
        cout << "C 0" << endl;
    } else {
        cout << wd << " " << wp << endl;
    }

    return 0;
}