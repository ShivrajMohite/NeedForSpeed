#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, T;
	cout<<"\t\t\t__          __  _    \n";
	cout<<"\t\t\t\\\ \\\        / / | |                         \n";
	cout<<"\t\t\t \\\ \\\  /\\\  / /__| | ___ ___  _ __ ___   ___ \n";
	cout<<"\t\t\t  \\\ \\\/  \\\/ / _ \\\ |/ __/ _ \\\| '_ ` _ \\\ / _ \\\ \n";
	cout<<"\t\t\t   \\\  /\\\  /  __/ | (_| (_) | | | | | |  __/\n";
	cout<<"\t\t\t    \\\/  \\\/ \\\___|_|\\\___\\\___/|_| |_| |_|\\\___| \n";
	cout<<"\n";
	cout<<"\n";
        cout<<"\t\t\t                    ********    *******\n";
        cout<<"\t\t\t                    ********    *******\n";
        cout<<"\t\t\t                       **       *|   |*\n";
        cout<<"\t\t\t                       **       *|   |*\n";
        cout<<"\t\t\t                       **       *|   |*\n";
        cout<<"\t\t\t                       **       *******\n     ";
        cout<<"\t\t\t                       **       *******\n     ";
        cout<<"\n";
        cout<<"\n";
        cout<<"\t\t\t     ******        ****    ***********    ***********                                                            \n";
        cout<<"\t\t\t     **** **       ****    ***********    ***********                                                      \n";
        cout<<"\t\t\t     ****  **      ****    ****           ****                                           \n";
        cout<<"\t\t\t     ****   **     ****    ***********    ****                   \n";
        cout<<"\t\t\t     ****    **    ****    ***********    ***********                      \n";
        cout<<"\t\t\t     ****     **   ****    ****           ***********                \n";
        cout<<"\t\t\t     ****      **  ****    ****                  ****                        \n";
        cout<<"\t\t\t     ****       ** ****    ****                  ****                 \n";
        cout<<"\t\t\t     ****        ******    ****           ***********                                           \n";
        cout<<"\t\t\t     ****         *****    ****           ***********\n";


        cout<<"\t\t\t\t\t             _______\n";
        cout<<"\t\t\t\t\t            //  ||\\\ \\\  \n";
        cout<<"\t\t\t\t\t      _____//___||_\\\ \\\___\n";
        cout<<"\t\t\t\t\t     )  _          _    \\\ \n";
        cout<<"\t\t\t\t\t     |_/ \\\________/ \\\___|   \n";
       cout<<"\t\t\t\t\t    ___\\\_/________\\\_/______   \n";

        cout<<"\n";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t  ******  Presented by  ******\n";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t   1. Shivraj Babasaheb Mohite";
        cout<<"\n";
        cout<<" \t\t\t\t\t\t\t\t\t\t   2. Vikas Krishnat Aswale";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t   3. Sarvesh Suresh Gawas";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t   4. Ranjeet Rajendra Thorat";
        cout<<"\n";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t  Under The Guidence of";
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t   Asst.Prof.Jadhav P. S. ";
        cout<<"\n";
        cout<<"\n";
        cout<<"\t\t\t\t\t****ENTER THE INPUTS HERE****\n";
        cout<<"******ENTER 1)NUMBER OF SECTIONS AND 2)TIME REQUIRED TO TRAVEL THE ALL SECTIONS 3)Type Exit to exit from code *******\n";
 while (cin >> N >> T)
  {

    double mn = -1e6, mx = 1e6;

    vector<double> D(N), S(N);

    for (int i = 0; i < N; i++)
    {

      cin >> D[i] >> S[i];

      mn = max(mn, -S[i]);

    }

    while (mx-mn > 1e-6)
    {

      double c = (mx+mn)/2, t = 0.0;

      for (int i = 0; i < N; i++) t += D[i] / (S[i] + c);

      if (t > T) mn = c; else mx = c;

    }


    cout<<"Speedometer reading is  :"<<" "<<(" %.6lf\n", (mx+mn)/2);


  }

}
