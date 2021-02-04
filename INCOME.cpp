#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<string>
using namespace std;
void title()
{
	system("color B");
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t";
	cout<<"\n";
	cout<<"\t\t        -------------------------------------\n";
	cout<<"\t\t       |           INCOME STATEMENT         |\n";
	cout<<"\t\t        -------------------------------------\n";
	cout<<"\n\n";
	cout<<"\t\t";
}
void frontpage()
{
	  
	  
	cout<<"INCOME STATEMENT PREPARED BY:";
	cout<<"  Muhammad Aaliyan Hafeez\n";
	cout<<endl;
	cout<<"\t\t\tPress Enter to Continue....\n\n\n";
	getch();
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\tLOADING";
	for(int process=0;process<5;process++)
	{
		sleep(1);
		cout<<".";
		system("cls");
	}
}
int main()
{
	title();
	frontpage();
	 int sales;
    int cost;
    int grossProfit;
    int aE;
    int aDe;
    int operatingIncome;
    int oI;
    int rI;
    int c;
    int nOi;
    int netIncome;
    cout << "\t\tCOMPANY NAME ABC" << endl;
    cout << "\t\t Income Statement" << endl;
    cout << "\t\t Year Ended ?????" << endl;
    cout << "\tParticular                       Amount" << endl;
    cout << "\tSales                           ";
    cin >> sales;
    cout << "\tCost of Goods Sold              ";
    cin >> cost;
    grossProfit = sales - cost;
    cout << "\tGross Profit                    " << grossProfit;
    cout << endl;
    cout << "\tOpearting Expenses              " << endl;
    cout << "\tAdvertising Expenses            ";
    cin >> aE;
    cout << "\tAdministrative Expenses         ";
    cin >> aDe;
    operatingIncome = aE + aDe;
    cout << "\tTotal Operating Expenses        " << operatingIncome << endl;
    oI = grossProfit - operatingIncome;
    cout << "\tOperating Income                " << oI;
    cout << "\n\tNon Operating Items             ";
    cout << "\n\tRevenue From Interest           ";
    cin >> rI;
    cout << "\tCost/Loss           ";
    cin >> c;
    nOi = rI - c;
    cout << "\tTotal Non Opearting Items       " << nOi;
    netIncome = oI + nOi;
    cout << "\n\tNet Income                      " << netIncome;
    return 0;
}
