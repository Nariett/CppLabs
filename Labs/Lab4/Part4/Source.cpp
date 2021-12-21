#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int y, p;
	cout << "Enter the year of opening" << endl;
	cin >> y;
	if (y > 1978)
	{
		p = 1;
	}
	else
	{
		if (y >= 1974)
		{
			p = 2;
		}
		else
		{
			if (y >= 1877)
			{
				p = 3;
			}
			else
			{
				if (y >= 1851)
				{
					p = 4;
				}
				else
				{
					if (y >= 1846)
					{
						p = 5;
					}
					else
					{
						if (y >= 1787)
						{
							p = 6;
						}
						else
						{
							if (y >= 1684)
							{
								p = 7;
							}
							else
							{
								if (y >= 1787)
								{
									p = 8;
								}
								else
								{
									if (y >= 1672)
									{
										p = 9;
									}
									else
									{
										if (y >= 1671)
										{
											p = 10;
										}
										else
										{
											if (y >= 1655)
											{
												p = 11;
											}
											else
											{
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "In" << y << " the following satelites were known" << endl;
	switch (p)
	{
	case 1:
	{
		cout << "Chiron Pluto" << endl;
	}
	case 2:
	{
		cout << "Leda Jupiter" << endl;
	}case 3:
	{
		cout << "Deimos Mars" << endl;
		cout << "Phobos Mars" << endl;
	}
	case 4:
	{
		cout << "Ariel Uranus" << endl;
		cout << "Umbriel Uranus" << endl;
	}
	case 5:
	{
		cout << "Triton Neptune" << endl;
	}
	case 6:
	{
		cout << "Oberon Uranus" << endl;
		cout << "Titania Uranus" << endl;
	}
	case 7:
	{
		cout << "Dione Saturn" << endl;
		cout << "Taphia Saturn" << endl;
	}
	case 8:
	{
		cout << "Rhea Saturn" << endl;
	}
	case 9:
	{
		cout << "Iapetus Saturn" << endl;
	}
	case 10:
	{
		cout << "Titan Saturn" << endl;
	}
	case 11:
	{
		cout << "Ganymede Jupiter" << endl;
		cout << "Europa Jupiter" << endl;
		cout << "Io Jupiter" << endl;
		cout << "Callisto Jupiter" << endl;
	}
	}
	return 0;
}