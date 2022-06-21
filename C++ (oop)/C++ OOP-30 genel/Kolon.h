#ifndef KOLON_H
#define KOLON_H

#pragma once

class Kolon
{

private:
int *data;
int boyut;
public:
    Kolon(int=1);
    Kolon(const Kolon&);
    void set(int ,int);
    const int* getData()const;
    int getBoyut();
    void setBoyut(int);
    void print()const;

    Kolon topla(const Kolon&)const;

    Kolon carpma(const Kolon&)const;

    double ortHesapla()const;
    ~Kolon();

private:

};

#endif