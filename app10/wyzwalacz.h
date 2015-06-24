#ifndef WYZWALACZ_H
#define WYZWALACZ_H


class wyzwalacz
{
public:
    wyzwalacz();
    int getWyzwolonaLiczba() const { return wyzwolonaLiczba; }
    void setWyzwolonaLiczba(int nowaWartosc) { wyzwolonaLiczba = nowaWartosc; }

private:
    int wyzwolonaLiczba;
};

#endif // WYZWALACZ_H
