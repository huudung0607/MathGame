﻿
#define GREMORY__________ main
typedef int __________RIAS;

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>	
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <sstream>
#include <iomanip>
#include <queue>
#include <stack>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Bieuthuc.h"
#include "BieuthucCong.h"
#include "BieuthucTru.h"
#include "BieuthucNhan.h"
#include "Dethi.h"
#include "Fraction.h"
#include "BieuthucPS.h"
#include "BieuthucPT.h"
using namespace std;


//--:-----------------==---:::----:::::-----::::::-::--==:::----::::::---:---::::-----::
//--:==--------==---==+=---:::----::::::----::::::::::--==-::---:::::::---:---:::::-----
//--:==--------=======+-:--::::---::-::::----::::::::::---*=::--:::::::::--:---:::::----
//--:-+-------===++=+=+-:--:::::--::=:::::---:::=-::::::-=#*=::--:::::::::--::--:::::---
//----+-------==+++=+=+::--:::::::::==:::::---::-==:::::-=##*=::-::::::::::--::--:::::--
//----+--------=+++++==::--:::::::::-==:::::--:::=+=::::-=###*=::-::::::::::--::--:::::-
//----==-------+++-++==::--::::::::::===:::::--::-=+-:::==*+-::-:::::::::::::-:::-:::::-
//----=+-----:-+++=++=-::--::::-:::::-==-::::::-::==#:::=--.-+=-.:::::::::::::-:::-:::::
//-----+-----:-=+=-+=--:::-::::-=:::::-++=-:::::-::===::-:.+%*%++-::::::::::::::::::::::
//-----==----::-+=-=+--::::-:::-=::::::=##==-:::::::==::-.:-#:*%%-:::::::::::::::::-::::
//------=----::-==-===-:::-::::-==#+::::=###+=-::::::=-:-:*:.::%%*:=::::::::::::::::::::
//:-----==---:::-=---=-:::--::::==##*::::+####*==-::::::=-:..::=%#=#::::::::::::::::::::
//:-----------:::--:---::::--:::-=*###*:::+#######*==-:::=::.:=:#%##-::::-::::::::::::::
//:-----:-----:::------::::==+:::==#####*::=##########++=+*-=+=.####+::::---::::::::::::
//:------------:::-----::::-=+#::==*#######+:+########=+####=..:*####::::::--:::::::::::
//-=--::-:-----::::--:--::::-=*#+:+=#################=#+#############+::::::::::::::::::
//----:::-:-----::::--:--::::=**#*-++**+*####**#####+#*##############*::::::::::::::::::
//---::::-------:::::--:-::::-=*#*+++=..:--=-=+#############*=+#######:::::::::::::--:::
//--:::::--:-----:.:::----::::-=***-.:*######################*+#######:::::::::.::::::::
//-:::::::--:-----::::----:::::-=+-:*#########################*######+::::::::::::::::::
//-::::::----:-----:::::---:::::-:+**###****#**######################=::::::::::::::::::
//::::::----:::-----:::::----::::-=****#**+*########################*:...:::::..:.:....:
//::::::--::::::-----:::::-----::::-+***#####################*-#####-................:::
//:::::--:-::::::---::::::::-----:::-=+****################+---=###*............:....:::
//::-:-:---::::=*----::::::::-----=*=:=++*****#########+=-==-=+=###:.................:::
//:-:-:---:::::-*+:---:::::::::----=****=*******############*==###=:......:.............
//::::-:-:::::.:+*=----::::::::::----*************###############+-:..:.:...............
//:::-:=-:::::::-*+-::--:::::.:::::----+************#*###########--:..::...........::...
//:--:--:::::::::=++--:--::::::.:::::::--==***************######+:-::::............::...
//:-:--:::::=::::.:++--:--:::::::::::::::------==+++****+++=--::::-::::::..........:::..
//::--:....:=:::..:::=+++:::::::::::.::::::--=====-:::::::::::::::::.:::::::........::..


__________RIAS GREMORY__________()
{
	
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		srand(time(NULL));
		int n1, n2, n3, LEVEL;
		cout << "Nhap so cau + , - , * kem theo level mong muon : ";
		cin >> n1 >> n2 >> n3 >> LEVEL;
		Dethi dt(n1, n2, n3, LEVEL);
		cout << "De thi : " << endl;
		dt.xuat();
		int mark = dt.danhgia();
		cout << "So cau dung : " << mark << "/" << n1 + n2 + n3 << endl;
		cout << endl;
		int level = 1;
		int cnt = 0;
		int right = 0;
		int socau = 0;
		cout << "Level 1 -> 3 : Easy" << endl;
		cout << "Level 4 : Normal " << endl;
		cout << "Level 5+ : Hard " << endl;
		cout << "Dung 3 cau : tang 1 level ";
		cout << endl;
		while (true)
		{	
			cout << "---Nhan 0 de thoat---" << endl;
			cout << endl;
			while (level >= 1 && level <= 3)
			{	
				socau++;
				cout << "Level : " << level << endl;
				cout << "Diem hien tai : " << cnt << endl;
				cout << "So cau : " << socau << endl;
				cout << endl;
				Bieuthuc bt(level);
				cout << bt;
				float traloi;
				cin >> traloi;
				if (traloi == 0 && bt.giatri() != 0)
				{
					break;
				}
				if (bt.kiemtra(traloi))
				{
					cout << "YES" << endl;
					cout << endl;
					cnt++;
					right++;
				}
				else
				{
					cout << "NO" << endl;
					cout << endl;
					right--;
				}
				if (right == -3)
				{
					cout << "Giam do kho " << endl;
					cout << endl;
					level--;
					right = 0;
				}
				if (right == 3)
				{
					cout << "Tang do kho " << endl;
					cout << endl;
					level++;
					right = 0;
				}
			}
			while (level == 4)
			{
				socau++;
				cout << "Level : " << level << endl;
				cout << "Diem hien tai : " << cnt << endl;
				cout << "So cau : " << socau << endl;
				Bieuthuc bt(level);
				cout << bt;
				float traloi;
				cin >> traloi;
				if (traloi == 0 && bt.giatri() != 0)
				{
					break;
				}
				if (bt.kiemtra(traloi))
				{
					cout << "YES" << endl;
					cout << endl;
					cnt++;
					right++;
				}
				else
				{
					cout << "NO" << endl;
					cout << endl;
					right--;
				}
				if (right == -3)
				{
					cout << "Giam do kho " << endl;
					cout << endl;
					level--;
					right = 0;
				}
				if (right == 3)
				{
					cout << "Tang do kho " << endl;
					cout << endl;
					level++;
					right = 0;
				}
			}
			while (level >= 5)
			{
				socau++;
				cout << "Level : " << level << "+" << endl;
				cout << "Diem hien tai : " << cnt << endl;
				cout << "So cau : " << socau << endl;
				Bieuthuc bt(level);
				cout << bt;
				float traloi;
				cin >> traloi;
				if (traloi == 0 && bt.giatri() != 0)
				{
					break;
				}
				if (bt.kiemtra(traloi))
				{
					cout << "YES" << endl;
					cout << endl;
					cnt++;
				}
				else
				{
					cout << "NO" << endl;
					right--;
					cout << endl;
				}
				socau++;
				cout << "Level : " << level << "+" << endl;
				cout << "Diem hien tai : " << cnt << endl;
				cout << "So cau : " << socau << endl;
				BieuthucPS ps(level);
				cout << ps;
				Fraction res;
				cin >> res;
				if (ps.kiemtra(res))
				{
					cout << "YES" << endl;
					cout << endl;
					cnt++;
				}
				else
				{
					cout << "NO" << endl;
					cout << endl;
					right--;
				}
				socau++;
				cout << "Level : " << level << "+" << endl;
				cout << "Diem hien tai : " << cnt << endl;
				cout << "So cau : " << socau << endl;
				BieuthucPT pt(level);
				cout << pt;
				float ans;
				cin >> ans;
				if (ans == 0 && pt.giatri() != 0)
				{
					break;
				}
				if (pt.kiemtra(ans))
				{
					cout << "YES" << endl;
					cout << endl;
					cnt++;
				}
				else
				{
					cout << "NO" << endl;
					right--;
					cout << endl;
				}
				if (right == -3)
				{
					level = 4;
					break;
				}
			}
		}
}

//----------:------:::::::+=-:---:::#+-------::--+-----=::----:::::----::::::---------
//---:-----:-------::-=::**-:---:::+#+------:::--#-----+::---=#:::::---:::::::--------
//--:-----::--:---:::+-:+#*--+--:::*#+:-----:-::-#----**-:---+#-::::---::::::--------=
//-::-----::--:--:::-*--#%*:++--::-*##------:--:-#----##-:---*#+:-=:---::::::------===
//-::----::---:--:::#+:#%@+:#+:-::-###=-----:+-:+*:--+%%-:--=##*::+----::::::---======
//::-----::--::-:::=*===+@*-#+::::=###=--=---*--*=:-=#@%----*###-:+=:--::::::-========
//::-----::--::-:::*#+*%@#--#+::::=##+-===--=#-=#::-+%@%---=##%#-:+#:--:::::--========
//::-----::--:::::-##*#@@@#-#=-:::=##+===---%+:##::=%@@#---###@%-:*#--::::::-=======-=
//::-----::--:::::=%###@@%%=#%-:::=##===---##=+%=:-#%@@#--+##%@%=-*#=::::::-=======--=
//::-----:::::::::--...-#@@%=%*-:--#===---#%*-+-::=+*##+--+=-=*%=-#%=::::---=======--=
//::--:--:::::::-:-:#@#@*-:=*%%----+==--=#*#-#%*:#%@@@@--%##%@@%=-+*=:::---========--=
//:::-:--:::::::+-=%@@++%*...=%#---==--=%%@=%@@:#@%@@@=-#%#%@@@%-+%%=-::--========-:--
//:::::--:::::::-*=%@@#===: .-+%*----=#%@@*%@@-*%%%%%*:%@%%@@@@#-%%%--:--=========-:--
//::::::--:::::::**#@@@+=+-..=#@@=--*%@@%%%@@+%@%%+......:-==*%**%%#-:-==========-----
//:::=:::-:::::::-##@@@@*#*+++%%=-+-=@@%@@@@#%%#%@@%+@#==:.:--::-=*=--===========*%%+-
//:::*::::-::::::-=%@@@%%=+#**%=*@%%=*@@@@@@@@@@@@@@--*%-...----=:*--============##%#=
//:::#=:::::::::::-+%@@@%%###%%@@@@@%*#@@@@@@@@@@@@@*-++=..:#--++%+-==-=========*%%##=
//:::+*-::::::-:----+%@@@@@@@@@@@@@@@%@%@@@@@@@@@@@@@*##*+=+*=%%%#==============#%%##=
//:::++--:::::----=++=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#*-+***++%@@*==============*%%%%#=
//:::=--:::::-:---==@%*#@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@%%%@@@%+===============#%###+-
//-::---=**:--------%@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*%+==============*###+=--
//----=**#%+--------=@@@@@@@@@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*===========--=-=%#=::--=
//----+*#%%------===-#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+==-========----==+-::::--=
//+=--=###=------==--=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+==-=======---:-===-:::::::--
//+++=-**==-------=-::-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%====-=======-:::-===-:::::::::-
//+++++=+==-----+=--:::-#@@@@@@@@%@@@@@@@@@@@@@@@@@@%+-+#+======--::::-===-:::::::---:
//**++*===----=#*=--:::::+@@@@@@@@@@@@%%%%%%@@@@@@%==#%#======--:::::-===--:::::::-==-
//%%*#====--=**#+---::::::-#@@@@@@@@%%@@@@@@@@@@@*+%%@+====--:::::::-====-::::::---===
//##*======+++*#+---:::::::--#@@@@@@@@@@@@@@@@@#+@%@%===--:::::::::-===--:----:----===
//*+===+#@%***#%=--::::::---:-=@@@@@@@@@@@@@@@+%@@@+=---::----::--====-:-----::----===
//===*#@#%%#@#%#-=-:::-------*##+@@@@@@@@@@@%*@@%*=-::--------=====--::------:----====
//###%#@#%%#@#%+==--::-----+@@##--*@@@@@@@@%+*=---=============-------------:-----====
//###%#%#%%#@##==--------+%#@%##---=%%%#*+------------------------=---------:------===
//@@@@@@@@%#@#===-------#%@@@@@@@@@@@@@%*=--------------------===----------:-------===
