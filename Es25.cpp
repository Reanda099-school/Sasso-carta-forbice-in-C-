#include <iostream>
#include <time.h>
//#include <conio.h>
using namespace std;

int main()
{
    int ng, clock, g1, g2, counterG2, counterG1, counter0;

    srand(time(0));

    cout << "Inserire numero giocatori (1 per giocare contro il computer, 2 per giocare contro un altro giocatore)" << endl;
    cin  >> ng;

    switch(ng)
    {
        default:
            return 0;
        case 1:
            {
                cout << "Inserire numero partite" << endl;
                cin  >> clock;

                while(clock > 0)
                {
                    cout << "Inserire un numero compreso tra 0 e 2 (0 = sasso; 1 = carta; 2 = forbice)" << endl;
                    cin  >> g1;

                    g2 = rand() % 2;

                    switch(g1)
                    {
                        default:
                        {
                            cout << "inserire un numero compreso tra 0 e 2 (0 = sasso; 1 = carta; 2 = forbice)" << endl;
                            cin  >> g1;
                        }
                        case 0:
                        {
                            switch(g2)
                            {
                                case 0:
                                {
                                    cout << "Pareggio" << endl;
                                    counter0 ++;
                                    break;
                                }

                                case 1:
                                {
                                    cout << "Hai perso" << endl;
                                    counterG2 ++;
                                    break;
                                }

                                case 2:
                                {
                                    cout << "Hai vinto" << endl;
                                    counterG1 ++;
                                    break;
                                }
                            }
                            break;
                        }
                        case 1:
                        {
                            switch(g2)
                            {
                                case 0:
                                {
                                    cout << "Hai vinto" << endl;
                                    counterG1 ++;
                                    break;
                                }

                                case 1:
                                {
                                    cout << "Pareggio" << endl;
                                    counter0 ++;
                                    break;
                                }

                                case 2:
                                {
                                    cout << "Hai perso" << endl;
                                    counterG2 ++;
                                    break;
                                }
                            }
                            break;
                        }
                        case 2:
                        {
                            switch(g2)
                            {
                                case 0:
                                {
                                    cout << "Hai perso" << endl;
                                    counterG1 ++;
                                    break;
                                }

                                case 1:
                                {
                                    cout << "Hai vinto" << endl;
                                    counter0 ++;
                                    break;
                                }

                                case 2:
                                {
                                    cout << "Pareggio" << endl;
                                    counterG2 ++;
                                    break;
                                }
                            }
                            break;
                        }
                }
                clock--;
            }
            counterG1 = (counterG1 * 100) / clock;
            cout << "Il numero di vittorie del giocatore 1 in percentuale vale" << counterG1 << endl;

            counterG2 = (counterG2 * 100) / clock;
            cout << "Il numero di vittorie del giocatore 2 in percentuale vale" << counterG2 << endl;

            counter0  = (counter0 * 100) / clock;
            cout << "Il numero di pareggi in percentuale vale" << counter0 << endl;
            break;
        }
        case 2:
        {
            cout << "Inserire numero partite" << endl;
            cin  >> clock;

            while(clock > 0)
            {
                cout << "Inserire un numero compreso tra 0 e 2 (0 = sasso; 1 = carta; 2 = forbice)" << endl;
                cin  >> g1;

                system("cls");

                cout << "Inserire un numero compreso tra 0 e 2 (0 = sasso; 1 = carta; 2 = forbice)"<< endl;
                cin  >> g2;

                system("clear");

                switch(g1)
                {
                    default:
                    {
                        cout << "inserire un numero compreso tra 0 e 2" << endl;
                        cin  >> g1;
                        system("clear");
                    }
                    case 0:
                    {
                        switch(g2)
                        {
                            default:
                            {
                                cout << "Inserire un numero compreso tra 0 e 2" << endl;
                                cin  >> g2;
                                system("cls");
                            }
                            case 0:
                            {
                                cout << "Pareggio" << endl;
                                counter0 ++;
                                break;
                            }

                            case 1:
                            {
                                cout << "Vince il giocatore 2" << endl;
                                counterG2 ++;
                                break;
                            }

                            case 2:
                            {
                                cout << "Vince il giocatore 1" << endl;
                                counterG1 ++;
                                break;
                            }
                        }
                        break;
                    }
                    case 1:
                    {
                        switch(g2)
                        {
                            case 0:
                            {
                                cout << "Vince il giocatore 1" << endl;
                                counterG1 ++;
                                break;
                            }

                            case 1:
                            {
                                cout << "Pareggio" << endl;
                                counter0 ++;
                                break;
                            }

                            case 2:
                            {
                                cout << "Vince il giocatore 2" << endl;
                                counterG2 ++;
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        switch(g2)
                        {
                            case 0:
                            {
                                cout << "Vince il giocatore 2" << endl;
                                counterG1 ++;
                                break;
                            }

                            case 1:
                            {
                                cout << "Vince il giocatore 1" << endl;
                                counter0 ++;
                                break;
                            }

                            case 2:
                            {
                                cout << "Pareggio" << endl;
                                counterG2 ++;
                                break;
                            }
                        }
                        break;
                    }
                }
                clock--;
            }
            counterG1 = (counterG1 * 100) / clock;
            cout << "Il numero di vittorie del giocatore 1 in percentuale vale" << counterG1 << endl;

            counterG2 = (counterG2 * 100) / clock;
            cout << "Il numero di vittorie del giocatore 2 in percentuale vale" << counterG2 << endl;

            counter0  = (counter0 * 100) / clock;
            cout << "Il numero di pareggi in percentuale vale" << counter0 << endl;
            break;
        }

    }
    return 0;
}
