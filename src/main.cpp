//Minecraft Console Adventure Game v. 2.0 Alpha
//A command line adventure game based on the popular indie game "Minecraft".
//It is written in C++ and features graphics drawn entirely by the console.

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <istream>
#include <sstream>

using namespace std;

void draw_picture();

string line("                                                                ");

//Floor
bool stonefloor(false);
bool grassfloor(false);

//Time
bool day(false);
bool evening(false);
bool night(false);
bool cave(false);

//Sun
bool sun_left(false);
bool sun_mid(false);
bool sun_right(false);

//Moon
bool moon_left(false);
bool moon_mid(false);
bool moon_right(false);

//Tree
bool tree_right(false);
bool tree_middle(false);
bool tree_left(false);

//Player
bool player_right(false);
bool player_left(false);
bool player_middle(false);

//Skeleton
bool skeleton_right(false);
bool skeleton_middle(false);
bool skeleton_left(false);

//Zombie
bool zombie_right(false);
bool zombie_middle(false);
bool zombie_left(false);

//Creeper
bool creeper_left(false);
bool creeper_middle(false);
bool creeper_right(false);

//Sword
bool player_left_sword(false);
bool player_middle_sword(false);
bool player_right_sword(false);

//PickAxe
bool player_left_pickaxe(false);
bool player_middle_pickaxe(false);
bool player_right_pickaxe(false);
bool player_middle_stone_pickaxe(false);
bool player_right_stone_pickaxe(false);
bool player_left_stone_pickaxe(false);

//Fishing Rod
bool player_left_fishrod(false);
bool player_middle_fishrod(false);
bool player_right_fishrod(false);

//CobbleStone
bool cobblestone(false);

//WoodPile
bool wood(false);

//DirtPile
bool dirt(false);

//House
bool house(false);
bool stone_house(false);

//Enderman
bool ender_left(false);
bool ender_middle(false);
bool ender_right(false);

//Spider
bool spider_left(false);
bool spider_middle(false);
bool spider_right(false);

//Ocelot
bool ocelot_left(false);
bool ocelot_middle(false);
bool ocelot_right(false);

//Cave Spiders
bool cavespids_right(false);
bool cavespids_middle(false);
bool cavespids_left(false);

//Minecart Tracks
bool tracks(false);

//Ravine
bool ravine(false);

//Lava Lake
bool lava_lake(false);

//Lake
bool lake(false);

//Chests
bool chests_left(false);
bool chests_middle(false);
bool chests_right(false);



//Switch Wall
bool switch_wall_right(false);
bool switch_wall_middle(false);
bool switch_wall_left(false);

//Temple Overview
bool temple_overview(false);

//Cave and Jungle
bool cavexjungle_overview(false);

bool lavaxshaft(false);

bool half_ravine_bridge(false);

bool no_ravine_bridge(false);

bool player_middle_bread(false);
bool player_left_bread(false);
bool player_right_bread(false);

int main()
{





	int day (1), bell(7), menu(1);
	string day1choices;
	bool will_draw (true);


	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);


	SetConsoleTextAttribute(hConsole,11);
    cout<<"Minecraft Console Adventure Game Version 2.0 Alpha by Osaze Shears\n\n";
    SetConsoleTextAttribute(hConsole,7);



	//day 1 variables

	int error(1), jtemple_error(1);
	char layer1, layer2, layer3, layer4, layer5, leavejtemple;
	char newgame, ringbell ((char)bell);
	string result, ocelot_name, jtemple_switches;

	//day 2 variables
	char activity;

	cout << "Can you survive in Minecraft? \n\n";
	SetConsoleTextAttribute(hConsole,290);
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000\n";
    cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000\n";
    cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000\n";
    cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000\n";
    cout<<"000000000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000000000\n";
    cout<<"000000000000";SetConsoleTextAttribute(hConsole,7);cout<<"      ";SetConsoleTextAttribute(hConsole,290);cout<<"000000000000\n";
    cout<<"00000000";SetConsoleTextAttribute(hConsole,7);cout<<"              ";SetConsoleTextAttribute(hConsole,290);cout<<"00000000\n";
    cout<<"00000000";SetConsoleTextAttribute(hConsole,7);cout<<"              ";SetConsoleTextAttribute(hConsole,290);cout<<"00000000\n";
    cout<<"00000000";SetConsoleTextAttribute(hConsole,7);cout<<"  ";SetConsoleTextAttribute(hConsole,290);cout<<"0000000000";SetConsoleTextAttribute(hConsole,7);cout<<"  ";SetConsoleTextAttribute(hConsole,290);cout<<"00000000\n";
    cout<<"00000000";SetConsoleTextAttribute(hConsole,7);cout<<"  ";SetConsoleTextAttribute(hConsole,290);cout<<"0000000000";SetConsoleTextAttribute(hConsole,7);cout<<"  ";SetConsoleTextAttribute(hConsole,290);cout<<"00000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n";
    cout<<"000000000000000000000000000000\n\n";
    SetConsoleTextAttribute(hConsole, 7);


	while (menu == 1)
	{
	cout<<"Would you like to start a new game, load a previous one or quit? \n New <n>, Load <l> or Quit <q>? \n";
	cin>>newgame;
	switch(newgame){
	case 'n':
	//day 1
	while (day == 1)
	{
    error = 1;	//Determines if a valid response is given, lets the user try again if invalid
	SetConsoleTextAttribute(hConsole,2);
	cout << "Day " << day << "\n";
	SetConsoleTextAttribute(hConsole,7);


	if (will_draw==true){

		player_left=true;
		grassfloor=true;
		sun_left=true;
		day=true;
		tree_middle=true;
		draw_picture();


	}
	while (error==1){

	cout << "You wake up and find a tree. What do you do? \n Chop <c> or Leave <l>? \n";
	cin >> layer1;
	switch (layer1){
	case 'c':
		//chopped tree

			if (will_draw==true){
				player_middle=true;
				sun_left=true;
				day=true;
				grassfloor=true;
				draw_picture();

			}
		while (error==1){
		cout << "You obtain some wood and create wooden planks. \n What tool do you want to make? \n Pickaxe <p> or Sword <s>? \n";
		cin >> layer2;
		switch(layer2){
		case 'p':
			//chopped tree, made pickaxe

					if (will_draw==true){
						player_left=true;
						player_left_pickaxe=true;
						cave=true;
						stonefloor=true;
						draw_picture();

					}
			while (error==1){
			cout << "You make a pickaxe and head off to the nearby mountain. \n What material do you collect? \n Dirt <d> or Cobblestone <c>? \n";
			cin >> layer3;
			switch(layer3){
			case 'c':
				//chopped tree, made pickaxe, mined cobble

					if (will_draw==true){
						player_left=true;
						player_left_pickaxe=true;
						evening=true;
						grassfloor=true;
						sun_right=true;
						draw_picture();

					}
				while (error==1){
				cout << "You gather some cobble and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made pickaxe, mined cobble, made house

						if (will_draw==true){
						player_middle=true;
						player_middle_pickaxe=true;
						house=true;
						stone_house=true;
						night=true;
						moon_left=true;
						grassfloor=true;

						draw_picture();
						}
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch(layer5){
					case 'd':
						//chopped tree, made pickaxe, mined cobble, made house, slept downstairs

						if (will_draw==true){


							house=true;
							stone_house=true;
							night=true;
							moon_mid=true;
							grassfloor=true;

							draw_picture();
						}


						SetConsoleTextAttribute(hConsole,9);
						cout << "You survived the first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
                        day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'u':
						//chopped tree, made pickaxe, mined cobble, made house, slept upstairs

						if (will_draw==true){

						house=true;
						stone_house=true;
						night=true;
						moon_mid=true;
						grassfloor=true;

						draw_picture();
						}

						SetConsoleTextAttribute(hConsole,9);
						cout << "You survived your first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
                    default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
                        break;
						}
						}
					break;
				case 'n':
					//chopped tree, made pickaxe, mined cobble, no house


						if (will_draw==true){
							tree_right=true;
							player_left_pickaxe=true;
							player_left=true;
							skeleton_middle=true;
							grassfloor=true;
							moon_left=true;
							night=true;
							draw_picture();


						}

					while (error==1){
					cout << "You walk through the night, looking for more supplies. \n A skeleton appears and starts to fire at you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
					case 'f':
						//chopped tree, made pickaxe, mined cobble, no house, fought skeleton
						if (will_draw=true){
							skeleton_left=true;
							night=true;
							grassfloor=true;
							moon_mid=true;
							tree_right=true;
							draw_picture();
						}

						SetConsoleTextAttribute(hConsole,4);
						cout << "You try to fight, but unfortunately the skeleton is able to block your pickaxe \n and  finish you off with a blow to the chest. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'r':
						//chopped tree, made pickaxe, mined cobble, no house, fled skeleton
						if (will_draw=true){
							skeleton_left=true;
							night=true;
							grassfloor=true;
							moon_mid=true;
							tree_right=true;
							draw_picture();
						}
						SetConsoleTextAttribute(hConsole,4);
						cout << "You try to run, but unfortunately the skeleton gets \n a headshot on you with one finishing blow. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
					}
					break;
				default:
					SetConsoleTextAttribute(hConsole,4);
					cout<<"Invalid Response\n";
					SetConsoleTextAttribute(hConsole,7);
					break;
				}
				}
				break;
			case 'd':
				//chopped tree, made pickaxe, collected dirt

					if (will_draw==true){
						player_middle_pickaxe=true;
						player_middle=true;
						sun_right=true;
						evening=true;
						tree_left=true;
						grassfloor=true;
						draw_picture();
					}

				while (error==1){


				cout << "You gather some dirt and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made pickaxe, collected dirt, made house

						if (will_draw==true){
							player_middle=true;
							player_middle_pickaxe=true;
							house=true;
							moon_left=true;
							night=true;
							grassfloor=true;
							draw_picture();

						}
					while (error==1){

					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch(layer5){
					case 'd':
						//chopped tree, made pickaxe, collected dirt, made house, slept downstairs
						if (will_draw=true){
							night=true;
							moon_mid=true;
							grassfloor=true;
							zombie_middle=true;
							house=true;
							draw_picture();

						}

						SetConsoleTextAttribute(hConsole,4);
						cout << "A zombie awakens you in your sleep. \n You grab your pickaxe and try to kill it \n but unfortunately the zombie doesn't die and starts to munch on your limbs. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'u':
						//chopped tree, made pickaxe, collected dirt, made house, slept upstairs
						if (will_draw=true){
							night=true;
							moon_mid=true;
							grassfloor=true;
							house=true;
							draw_picture();

						}


						SetConsoleTextAttribute(hConsole,9);
						cout << "You survived your first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
						}
					break;
				case 'n':
					//chopped tree, made pickaxe, collected dirt, no house

						if (will_draw==true){
							creeper_middle=true;
							tree_right=true;
							player_left=true;
							player_left_pickaxe=true;
							moon_left=true;
							night=true;
							grassfloor=true;
							draw_picture();
						}
					while (error==1){
					cout << "You walk through the night, looking for more supplies. \n A creeper appears and quickly moves towards you. How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch (layer5){
					case 'f':
					//chopped tree, made pickaxe, collected dirt, no house, fought creeper

						if (will_draw=true){
							ravine=true;
							tree_right=true;
							grassfloor=true;
							night=true;
							moon_mid=true;
							draw_picture();
						}

						SetConsoleTextAttribute(hConsole,4);
						cout << "The creeper gets close enough for you to hit \n but this triggers its explosive reaction. You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'r':
					//chopped tree, made pickaxe, collected dirt, no house, fled creeper

						if (will_draw==true){

							creeper_right=true;
							player_left=true;
							player_left_pickaxe=true;
							moon_mid=true;
							night=true;
							grassfloor=true;
							draw_picture();
						}

						SetConsoleTextAttribute(hConsole,9);
						cout << "You manage to get away from the creeper safely. \n You barely surivived the night. \n";
						SetConsoleTextAttribute(hConsole,7);
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						day = 2;
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
						}
					break;
				default:
					SetConsoleTextAttribute(hConsole,4);
					cout<<"Invalid Response\n";
					SetConsoleTextAttribute(hConsole,7);
					break;
					}
					}
				break;
			default:
				SetConsoleTextAttribute(hConsole,4);
				cout<<"Invalid Response\n";
				SetConsoleTextAttribute(hConsole,7);
				break;
				}
				}
			break;
		case 's':
			//chopped tree, made sword

			if (will_draw==true){
				player_left=true;
				player_left_sword=true;
				sun_mid=true;
				grassfloor=true;
				day=true;
				tree_right=true;
				tree_middle=true;
				draw_picture();


			}
			while (error==1){
			cout << "You make a sword and head off to the nearby forest. \n What material do you collect? \n Dirt <d> or Wood <w>? \n";
			cin >> layer3;
			switch(layer3){
			case 'w':
				//chopped tree, made sword, collected wood
				if (will_draw==true){
					evening=true;
					wood=true;
					player_left=true;
					player_left_sword=true;
					grassfloor=true;
					sun_right=true;
					draw_picture();

				}
				while (error==1){
				cout << "You gather some wood and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made sword, collected wood, made house
					if (will_draw==true){
						player_middle=true;
						player_middle_sword=true;
						house=true;
						night=true;
						moon_left=true;
						grassfloor=true;
						draw_picture();

					}
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch (layer5){
					case 'd':
						//chopped tree, made sword, collected wood, made house, slept downstairs
						if (will_draw==true){
						house=true;
						night=true;
						moon_mid=true;
						grassfloor=true;
						draw_picture();

						}

						SetConsoleTextAttribute(hConsole,9);
						cout << "You survived the first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'u':
						//chopped tree, made sword, collected wood, made house, slept upstairs
						if (will_draw==true){
						house=true;
						night=true;
						moon_mid=true;
						grassfloor=true;
						draw_picture();

						}

						SetConsoleTextAttribute(hConsole,9);
						cout << "You survived your first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
						}
					break;
				case 'n':
					//chopped tree, made sword, collected wood, no house
					if (will_draw==true){

						player_middle=true;
						player_middle_sword=true;
						zombie_right=true;
						tree_left=true;
						night=true;
						moon_left=true;
						grassfloor=true;
						draw_picture();
					}

					while (error==1){
					cout << "You walk through the woods at night, looking for more supplies. \n A zombie appears and starts to run towards you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
					case 'f':
						//chopped tree, made sword, collected wood, no house, fought zombie
						if (will_draw==true){
							player_right=true;
							player_right_sword=true;
							tree_left=true;
							moon_mid=true;
							night=true;
							grassfloor=true;
							draw_picture();
						}

						SetConsoleTextAttribute(hConsole,9);
						cout << "You defeat the zombie and barely survive the first night! \n";
						SetConsoleTextAttribute(hConsole,7);
						day = 2;
						day1choices.push_back(layer1);
                        day1choices.push_back(layer2);
                        day1choices.push_back(layer3);
                        day1choices.push_back(layer4);
                        day1choices.push_back(layer5);
						cout << "Your day code is 2" << day1choices << "\n";
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'r':
						//chopped tree, made sword, collected wood, no house, fled zombie

						if (will_draw==true){
							zombie_middle=true;
							tree_left=true;
							moon_mid=true;
							night=true;
							grassfloor=true;
							draw_picture();
						}

						SetConsoleTextAttribute(hConsole,4);
						cout << "You try to run, but unfortunately the zombie gets\n close enough to you to eat your limbs off. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
						}
					break;
				default:
					SetConsoleTextAttribute(hConsole,4);
					cout<<"Invalid Response\n";
					SetConsoleTextAttribute(hConsole,7);
					break;
				}
				}
				break;
			case 'd':
				//chopped tree, made sword, collected dirt

				if (will_draw==true){
					player_middle=true;
					player_middle_sword=true;
					sun_right=true;
					evening=true;
					grassfloor=true;
					tree_left=true;
					tree_right=true;
					draw_picture();
				}
				while (error == 1){
				cout << "You gather some dirt and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch (layer4){
					case 'y':
					//chopped tree, made sword, collected dirt, made house
					if (will_draw==true){
						house=true;
						tree_left=true;
						tree_right=true;
						player_middle=true;
						player_middle_sword=true;
						grassfloor=true;
						night=true;
						moon_left=true;
						draw_picture();
					}


					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
						switch(layer5){
							case 'd':
							//chopped tree, made sword, collected dirt, made house, slept downstairs
							if (will_draw=true){
								house=true;
								tree_left=true;
								tree_right=true;
								player_left=true;
								player_left_sword=true;
								grassfloor=true;
								night=true;
								moon_left=true;
								draw_picture();
							}
								SetConsoleTextAttribute(hConsole,9);
								cout << "A zombie awakens you in your sleep, you manage \n to grab your sword and slay it before you die. \n You barely surivive the night. \n";
								SetConsoleTextAttribute(hConsole,7);
								day = 2;
								day1choices.push_back(layer1);
                                day1choices.push_back(layer2);
                                day1choices.push_back(layer3);
                                day1choices.push_back(layer4);
                                day1choices.push_back(layer5);
                                cout << "Your day code is 2" << day1choices << "\n";
								cout<<ringbell;
								error = 0;
								system ("pause");
								break;
							case 'u':
							//chopped tree, made sword, collected dirt, made house, slept upstairs
							if (will_draw=true){
								house=true;
								tree_left=true;
								tree_right=true;

								grassfloor=true;
								night=true;
								moon_left=true;
								draw_picture();
							}

								SetConsoleTextAttribute(hConsole,9);
								cout << "You survived your first night! \n";
								SetConsoleTextAttribute(hConsole,7);
								day = 2;
								day1choices.push_back(layer1);
                                day1choices.push_back(layer2);
                                day1choices.push_back(layer3);
                                day1choices.push_back(layer4);
                                day1choices.push_back(layer5);
                                cout << "Your day code is 2" << day1choices << "\n";
								cout<<ringbell;
								error = 0;
								system ("pause");
								break;
							default:
								SetConsoleTextAttribute(hConsole,4);
								cout<<"Invalid Response\n";
								SetConsoleTextAttribute(hConsole,7);
								break;
							}
							}
					break;
					case 'n':
					//chopped tree, made sword, collected dirt, no house
					if (will_draw==true){
						player_left_sword=true;
						player_left=true;
						night=true;
						moon_left=true;
						grassfloor=true;
						zombie_middle=true;
						draw_picture();

					}
					while (error==1){
					cout << "You walk through the woods at night, looking for more supplies. \n A zombie appears and starts to run towards you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
						case 'f':
							//chopped tree, made sword, collected dirt, no house, fought zombie
							if (will_draw==true){
								player_middle=true;
								player_middle_sword=true;
								night=true;
								moon_mid=true;
								grassfloor=true;
								draw_picture();
							}


							SetConsoleTextAttribute(hConsole,9);
							cout << "You defeat the zombie and barely survive the first night! \n";
							SetConsoleTextAttribute(hConsole,7);
							day = 2;
							day1choices.push_back(layer1);
                            day1choices.push_back(layer2);
                            day1choices.push_back(layer3);
                            day1choices.push_back(layer4);
                            day1choices.push_back(layer5);
                            cout << "Your day code is 2" << day1choices << "\n";
							cout<<ringbell;
							error = 0;
							system ("pause");
							break;
					case 'r':
							//chopped tree, made sword, collected dirt, no house, fled zombie
							if (will_draw==true){
								zombie_left=true;
								night=true;
								moon_mid=true;
								grassfloor=true;
								draw_picture();
							}
							SetConsoleTextAttribute(hConsole,4);
							cout << "You try to run, but unfortunately the zombie gets \n close enough to you to eat your limbs off. \n You have died. \n";
							SetConsoleTextAttribute(hConsole,7);
							cout<<ringbell;
							error = 0;
							system ("pause");
							break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
					}
					}
					break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
						}
						}
				break;
			default:
				SetConsoleTextAttribute(hConsole,4);
				cout<<"Invalid Response\n";
				SetConsoleTextAttribute(hConsole,7);
				break;
	}
	}
			break;
		default:
			SetConsoleTextAttribute(hConsole,4);
			cout<<"Invalid Response\n";
			SetConsoleTextAttribute(hConsole,7);
			break;
	}
	}
		break;
	case 'l':
		//left tree
		if (will_draw=true){
			cavexjungle_overview=true;
			day=true;
			sun_mid=true;
			player_middle=true;
			grassfloor=true;
			draw_picture();

		}
		while (error==1){
		cout<<"You leave the tree and head out past the horizon. \n You come upon a cave and a jungle. \n Which one do you explore? \n Cave <c> or Jungle <j>? \n";
		cin >>layer2;
		switch(layer2){
			case 'c':
				//left tree, went in cave
				if (will_draw==true){
					cave=true;
					stonefloor=true;
					player_middle=true;
					lavaxshaft=true;
					draw_picture();
				}
				while (error==1){
				cout<<"You proceed into the cave. After walking for a while, \n you come upon a fork in the path. Which way do you go? \n Abandoned Mineshaft <a> or Lava Lake <l>? \n";
				cin>>layer3;
				switch(layer3){
					case 'a':
						//left tree, went in cave, followed abandoned mineshaft
						if (will_draw==true){
							ravine=true;
							player_left=true;
							stonefloor=true;
							cave=true;
							draw_picture();

						}
						while(error==1){
						cout<<"After following the mineshaft for a few hours, \n you come upon an awesome ravine! \n Do you go around it by following the minecart tracks, \n or go across it by crossing the bridge? \n Tracks <t> or Bridge <b>? \n";
						cin>>layer4;
						switch(layer4){
							case 't':
								//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine

								if (will_draw==true){
									tracks=true;
									cave=true;
									stonefloor=true;
									player_middle=true;
									cavespids_right=true;
									draw_picture();
								}

								while(error==1){
								cout<<"You eventually make it all the way around the ravine \n and sit down to take a rest. \n A few minutes later some cave spiders decide \n to come over and invite you to dinner! \n You're the main course! \n Stomp on them <s> or Run <r>? \n";
								cin>>layer5;
								switch(layer5){
								case 's':
									//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine, stomped on spiders

									if (will_draw==true){
										tracks=true;
										cavespids_middle=true;
										stonefloor=true;
										cave=true;
										draw_picture();
									}

									SetConsoleTextAttribute(hConsole,4);
									cout << "You smash each spider quickly as they try to ambush you. \n Unfortunately your body becomes weak due to their poison. \n As you were preparing for another stomp, a horde attacks you from above. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
									break;
								case 'r':
									//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine, ran from spiders

									if (will_draw==true){
										tracks=true;
										cavespids_left=true;
										stonefloor=true;
										cave=true;
										draw_picture();
									}

									SetConsoleTextAttribute(hConsole,4);
									cout << "You run from the horde as fast as you can, but \n the spiders keep getting closer and closer. \n You cut a corner and immideately run into a mess of spider webs. \n You try to get out, but the spiders have you right where they want you. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
									break;
								default:
									SetConsoleTextAttribute(hConsole,4);
									cout<<"Invalid Response\n";
									SetConsoleTextAttribute(hConsole,7);
								}
								}
								break;
							case 'b':
								//left tree, went in cave, followed abandoned mineshaft, took bridge across ravine
								if (will_draw==true){
									ravine=true;
									half_ravine_bridge=true;
									player_middle=true;
									cave=true;
									stonefloor=true;
									draw_picture();

								}


								while(error==1){
								cout<<"You start walking across the bridge slow and steady. \n Suddenly, you hear a loud cracking noise \n and the bridge instantly splits in half! \n Do you Jump to the other side <j> or head Back <b>? \n";
								cin>>layer5;
								switch(layer5){
								case 'j':
									//left tree, went in cave, followed abandoned mineshaft, took bridge across ravine, jumped across gap

									if (will_draw==true){
									ravine=true;
									no_ravine_bridge=true;
									player_right=true;
									cave=true;
									stonefloor=true;
									draw_picture();

									}

									SetConsoleTextAttribute(hConsole,9);
									cout << "You courageously jump to the other side, stick the landing, \n and look back as the other half falls deep into the ravine. \n You find a good place to rest and regain your strength. \n You have survived the night! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
									break;
								case 'b':
									//left tree, went in cave, followed abandoned mineshaft, took bridge across ravine, did not jump across gap

									if (will_draw==true){
									ravine=true;
									no_ravine_bridge=true;
									cave=true;
									stonefloor=true;
									draw_picture();

									}


									SetConsoleTextAttribute(hConsole,4);
									cout << "You slowly climb back up and start walking back to the start of the bridge. \n Once again, you hear the bridge's noises and right when you're two feet away, \n the bridge collapses and you plummet straight into the ravine. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
									break;
								default:
									SetConsoleTextAttribute(hConsole,4);
									cout<<"Invalid Response\n";
									SetConsoleTextAttribute(hConsole,7);
									break;
								}
								}
								break;
							default:
								SetConsoleTextAttribute(hConsole,4);
								cout<<"Invalid Response\n";
								SetConsoleTextAttribute(hConsole,7);
								break;
						}
						}
						break;
					case 'l':
						//left tree, went in cave, followed lava lake
						if (will_draw==true){
							player_middle=true;
							lava_lake=true;
							stonefloor=true;
							cave=true;

							draw_picture();

						}
						while(error==1){
						cout<<"You start to hop on the stones in the lava lake to get across \n You get to a wall with a thin ledge. \n Do you Sidestep against the wall <s> or turn Back <b>? \n";
						cin>>layer4;
						switch(layer4){
						case 's':
							//left tree, went in cave, followed lava lake, sidestepped
							if (will_draw==true){
								player_right=true;
								stonefloor=true;
								cave=true;

								chests_left=true;
								draw_picture();
							}


							while(error==1){
							cout<<"You successfully get to the end of the lake \n and come upon two chests. Which one do you open? \n Right <r> or Left <l>? \n";
							cin>>layer5;
							switch(layer5){
							case 'r':
								//left tree, went in cave, followed lava lake, sidestepped, right chest(stone pickaxe)
								if (will_draw==true){
									player_middle=true;
									player_middle_pickaxe=true;
									player_middle_stone_pickaxe=true;
									stonefloor=true;
									cave=true;
									chests_left=true;
									draw_picture();
								}

								SetConsoleTextAttribute(hConsole,9);
									cout << "You open the chest on the right and find \n a stone pickaxe! You use this to mine out a room \n to sleep in. \n You have survived the night! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
								break;
							case 'l':
								//left tree, went in cave, followed lava lake, sidestepped, left chest(bread)
								if (will_draw==true){
									stonefloor=true;
									cave=true;
									chests_left=true;
									player_middle=true;
									player_middle_bread=true;
									draw_picture();
								}
								SetConsoleTextAttribute(hConsole,9);
									cout << "You open the chest on the left and find \n a loaf of bread! You save it for later and \n find a good place to rest at. \n You have survived the night! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
								break;
							default:
								SetConsoleTextAttribute(hConsole,4);
								cout<<"Invalid Response\n";
								SetConsoleTextAttribute(hConsole,7);
								break;
							}
							}
							break;
						case 'b':
							//left tree, went in cave, followed lava lake, went back
							if (will_draw==true){
								player_middle=true;
								lava_lake=true;
								creeper_right=true;
								stonefloor=true;
								cave=true;
								draw_picture();
							}

							while(error==1){
							cout<<"You head back to the start of the lava lake \n and are greeted by a creeper! \n He quickly approaches you for a nice big hug! \n Do you turn around and Sidestep against the wall <s> or Push it in the lava <p>? \n";
							cin>>layer5;
							switch(layer5){
							case 's':
								//left tree, went in cave, followed lava lake, went back, sidestepped

								if (will_draw==true){
									player_left=true;
									lava_lake=true;
									stonefloor=true;
									cave=true;
									draw_picture();
								}

								SetConsoleTextAttribute(hConsole,9);
									cout << "You quickly run from the creeper and \n start to sidestepped the wall. \n He stays close behind you. \n You jump to the other side of the lake and almost fall in. \n Lucky for you, the creeper doesn't make it. \n You barely survived the night! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
								break;
							case'p':
								//left tree, went in cave, followed lava lake, went back, pushed creeper
								if (will_draw==true){
									lava_lake=true;
									stonefloor=true;
									cave=true;
									draw_picture();
								}

								SetConsoleTextAttribute(hConsole,4);
									cout << "You build up your strength and \n shove the creeper into the lava. \n The creeper starts to die slowly, but unfortunately explodes before it does. \n The blast pushes you right into the lava. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
								break;
							default:
								SetConsoleTextAttribute(hConsole,4);
								cout<<"Invalid Response\n";
								SetConsoleTextAttribute(hConsole,7);
								break;
							}
							}
							break;
						default:
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Invalid Response\n";
							SetConsoleTextAttribute(hConsole,7);
							break;
						}
						}
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
				}
				}
				break;
			case 'j':
				//left tree, went in jungle
				if (will_draw==true){
					day=true;
					sun_mid=true;
					tree_right=true;
					tree_left=true;
					tree_middle=true;
					player_middle=true;
					grassfloor=true;
					draw_picture();
				}
				while(error==1){
				cout<<"You enter the jungle and run through the bushes and the trees. \n You climb some vines to get on top of a \n taller tree and spot a lake and a temple. \n Do you go towards the Lake <l> or the Temple <t>? \n";
				cin>>layer3;
				switch(layer3){
				case 'l':
					//left tree, went in jungle, went towards lake
					if (will_draw==true){
						day=true;
						sun_mid=true;

						player_left=true;
						lake=true;
						grassfloor=true;

						draw_picture();

					}
					while(error==1){
					cout<<"You go towards the lake and find a fishing rod at the shore. \n Do you Fish <f> or Relax <r>? \n";
					cin>>layer4;
					switch(layer4){
					case 'f':
						//left tree, went in jungle, went towards lake, went fishing
						if (will_draw==true){
							player_left=true;
							player_left_fishrod=true;
							ocelot_middle=true;
							grassfloor=true;
							tree_right=true;
							sun_right=true;
							evening=true;
							draw_picture();
						}
						while(error==1){
						cout<<"You cast your rod out, and after a few hours, \n you manage to catch five fish. \n Soon after you begin to eat, an ocelot slowly walks towards you. \n Do you share some of your fish? Yes <y> or No <n>? \n";
						cin>>layer5;
						switch(layer5){
						case 'y':
							//left tree, went in jungle, went towards lake, went fishing, fed ocelot
							if (will_draw==true){
								player_left=true;
								player_left_fishrod=true;
								ocelot_middle=true;
								grassfloor=true;
								tree_right=true;
								sun_right=true;
								evening=true;
								draw_picture();

							}
							SetConsoleTextAttribute(hConsole,9);
									cout << "You feed the ocelot and it recoginzes you as its owner. \n What do you name it? \n";
									SetConsoleTextAttribute(hConsole,7);
									cin>>ocelot_name;
									SetConsoleTextAttribute(hConsole,9);
									cout<<"You have survived the night with your new friend "<< ocelot_name <<"! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
							break;
						case 'n':
						//left tree, went in jungle, went towards lake, went fishing, shooed ocelot
						if (will_draw==true){
								player_left=true;
								player_left_fishrod=true;

								grassfloor=true;
								tree_right=true;
								sun_right=true;
								evening=true;
								draw_picture();

							}
						SetConsoleTextAttribute(hConsole,9);
									cout << "You shoo away the ocelot and continue to eat \n your fish in peace. \n You have survived the night! \n";
									SetConsoleTextAttribute(hConsole,7);
									day = 2;
									day1choices.push_back(layer1);
									day1choices.push_back(layer2);
									day1choices.push_back(layer3);
									day1choices.push_back(layer4);
									day1choices.push_back(layer5);
									cout << "Your day code is 2" << day1choices << "\n";
									cout<<ringbell;
									error = 0;
									system ("pause");
							break;
						default:
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Invalid Response\n";
							SetConsoleTextAttribute(hConsole,7);
							break;
						}
						}
						break;
					case 'r':
						//left tree, went in jungle, went towards lake, relaxed
						if (will_draw==true){
							sun_right=true;
							evening=true;
							grassfloor=true;
							spider_right=true;
							player_middle=true;
							player_middle_fishrod=true;
							tree_left=true;
							draw_picture();

						}
						while(error==1){
						cout<<"You relax beside the lake a while and get a good tan. \n As it starts to get dark, a spider crawls towards you slowly. \n You scramble up and grab your fishing rod. \n Do you fight it <f> or run away <r>? \n";
						cin>>layer5;
						switch(layer5){
						case 'f':
							//left tree, went in jungle, went towards lake, relaxed, fought spider
							if (will_draw==true){
							sun_right=true;
							evening=true;
							grassfloor=true;
							spider_middle=true;
							tree_left=true;
							draw_picture();
							}
								SetConsoleTextAttribute(hConsole,4);
									cout << "You take a swing at the spider, but it's too fast for you to hit. \n It eventually jumps at you and you fall. \n As its webs are being wrapped around you, you suffocate. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
							break;
						case 'r':
							//left tree, went in jungle, went towards lake, relaxed, fled spider
							if (will_draw==true){
							sun_right=true;
							evening=true;
							grassfloor=true;
							spider_middle=true;
							tree_left=true;
							tree_right=true;
							tree_middle=true;
							draw_picture();
							}
								SetConsoleTextAttribute(hConsole,4);
									cout << "You try to run from the spider, but it knows its way around \n this jungle at night much better than you do. \n It suddenly lands on your head and you are instantly dinner. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
							break;
						default:
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Invalid Response\n";
							SetConsoleTextAttribute(hConsole,7);
							break;
						}
						}
						break;
					}
					}
					break;
				case 't':
					//left tree, went in jungle, went towards temple
					if (will_draw=true){
						player_left=true;
						temple_overview=true;
						sun_right=true;
						evening=true;
						grassfloor=true;
						draw_picture();

					}
					while(error==1){
					cout<<"You go towards and stand at the entrance of the jungle temple. \n You have a strong sense that it's booby trapped, \n but you could really use any materials inside of it. \n Do you Enter <e> or Leave <l>? \n";
					cin>>layer4;
					switch(layer4){
					case 'e':
						//left tree, went in jungle, went towards temple, entered temple
						if (will_draw==true){
							player_middle=true;
							switch_wall_middle=true;
							stonefloor=true;
							cave=true;
							draw_picture();
						}
						while(error==1){
						cout<<"You enter the temple and are shot at with arrows by a dispenser. \n You safely disarm it and watch your step for any tripwire. \n You finally come upon a wall puzzle with three switches. \n 010 (Where 0 is down and 1 is up.) \n Enter in the correct combination or leave <l>. \n";
						cin>>jtemple_switches;
						if(jtemple_switches=="101"){
							//left tree, went in jungle, went towards temple, entered temple, entered correct combination
							if (will_draw==true){
								tree_left=true;
								tree_middle=true;
								tree_right=true;
								night=true;
								moon_mid=true;
								grassfloor=true;
								draw_picture();
							}

							layer5='c';
							SetConsoleTextAttribute(hConsole,9);
							cout << "You enter in the correct code and a hidden passage opens in the wall, \n giving you access to a secret chest! \n Inside of the chest are a bow and a sword! \n You take your weapons and find a good tree to sleep in. \n You have survived the night! \n";
							SetConsoleTextAttribute(hConsole,7);
							day = 2;
							day1choices.push_back(layer1);
							day1choices.push_back(layer2);
							day1choices.push_back(layer3);
							day1choices.push_back(layer4);
							day1choices.push_back(layer5);
							cout << "Your day code is 2" << day1choices << "\n";
							cout<<ringbell;
							error = 0;
							system ("pause");}
						else{

							if (jtemple_switches!="l"){
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Incorrect Code!\n";
							SetConsoleTextAttribute(hConsole,7);
							}

							jtemple_error=1;
							while (jtemple_error==1){
							cout<<"Leave Jungle Temple? Yes <y> or No <n>";
							cin>>leavejtemple;
							switch(leavejtemple){
							case 'n':
								jtemple_error=0;
								break;
							case 'y':
								//left tree, went in jungle, went towards temple, left temple

								if (will_draw==true){
									tree_left=true;
									grassfloor=true;
									player_right=true;
									ender_middle=true;
									night=true;
									moon_mid=true;
									draw_picture();
								}

								while(error==1){
								cout<<"You leave the temple and think about where to go next. \n As soon as you look up, an enderman is looking right back at you. \n Do you keep Staring <s> or Run <r>?";
								cin>>layer5;
								switch(layer5){
						case 's':
							//left tree, went in jungle, went towards temple, left temple, stared down enderman
							if (will_draw==true){
									tree_left=true;
									player_right=true;
									grassfloor=true;
									day=true;
									sun_left=true;
									draw_picture();
								}
							SetConsoleTextAttribute(hConsole,9);
							cout << "You continue to stare through the night until daytime arrives. \n The enderman then teleports away. \n You barely survived the night! \n";
							SetConsoleTextAttribute(hConsole,7);
							day = 2;
							day1choices.push_back(layer1);
							day1choices.push_back(layer2);
							day1choices.push_back(layer3);
							day1choices.push_back(layer4);
							day1choices.push_back(layer5);
							cout << "Your day code is 2" << day1choices << "\n";
							cout<<ringbell;
							error = 0;
							jtemple_error=0;
							system ("pause");
							break;
						case 'r':
							//left tree, went in jungle, went towards temple, left temple, ran from enderman
							if (will_draw==true){
									tree_left=true;
									grassfloor=true;

									ender_right=true;
									night=true;
									moon_mid=true;
									draw_picture();
								}
							SetConsoleTextAttribute(hConsole,4);
							cout << "You run as fast as you can away from the enderman, \n but it keeps teleporting closer and closer to you \n every time you turn around. \n It then teleports in front of you and kills you with two hits. \n You have died. \n";
							SetConsoleTextAttribute(hConsole,7);
							cout<<ringbell;
							error = 0;
							jtemple_error=0;
							system ("pause");
							break;
						default:
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Invalid Response\n";
							SetConsoleTextAttribute(hConsole,7);
							break;
						}
						}

								break;
							default:
								SetConsoleTextAttribute(hConsole,4);
								cout<<"Invalid Response\n";
								SetConsoleTextAttribute(hConsole,7);
								break;
							}
							}
						}
						}
						break;
					case 'l':
						//left tree, went in jungle, went towards temple, left temple
						if (will_draw==true){
									tree_left=true;
									grassfloor=true;
									player_right=true;
									ender_middle=true;
									night=true;
									moon_mid=true;
									draw_picture();
								}

						while(error==1){
						cout<<"You leave the temple and think about where to go next. \n As soon as you look up, an enderman is looking right back at you. \n Do you keep Staring <s> or Run <r>?";
						cin>>layer5;
						switch(layer5){
						case 's':
							//left tree, went in jungle, went towards temple, left temple, stared down enderman

							if (will_draw==true){
									tree_left=true;
									player_right=true;
									grassfloor=true;
									day=true;
									sun_left=true;
									draw_picture();
								}

							SetConsoleTextAttribute(hConsole,9);
							cout << "You continue to stare through the night until daytime arrives. \n The enderman then teleports away. \n You barely survived the night! \n";
							SetConsoleTextAttribute(hConsole,7);
							day = 2;
							day1choices.push_back(layer1);
							day1choices.push_back(layer2);
							day1choices.push_back(layer3);
							day1choices.push_back(layer4);
							day1choices.push_back(layer5);
							cout << "Your day code is 2" << day1choices << "\n";
							cout<<ringbell;
							error = 0;
							system ("pause");
							break;
						case 'r':
							//left tree, went in jungle, went towards temple, left temple, ran from enderman

							if (will_draw==true){
									tree_left=true;
									grassfloor=true;

									ender_middle=right;
									night=true;
									moon_mid=true;
									draw_picture();
							}

							SetConsoleTextAttribute(hConsole,4);
							cout << "You run as fast as you can away from the enderman, \n but it keeps teleporting closer and closer to you \n every time you turn around. \n It then teleports in front of you and kills you with two hits. \n You have died. \n";
							SetConsoleTextAttribute(hConsole,7);
							cout<<ringbell;
							error = 0;
							system ("pause");
							break;
						default:
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Invalid Response\n";
							SetConsoleTextAttribute(hConsole,7);
							break;
						}
						}
						break;
					default:
						SetConsoleTextAttribute(hConsole,4);
						cout<<"Invalid Response\n";
						SetConsoleTextAttribute(hConsole,7);
						break;
					}
					}
					break;
				default:
					SetConsoleTextAttribute(hConsole,4);
					cout<<"Invalid Response\n";
					SetConsoleTextAttribute(hConsole,7);
					break;
				}
				}
				break;
			default:
				SetConsoleTextAttribute(hConsole,4);
				cout<<"Invalid Response\n";
				SetConsoleTextAttribute(hConsole,7);
				break;
		}
		}
		break;
	default:
		SetConsoleTextAttribute(hConsole,4);
		cout<<"Invalid Response\n";
		SetConsoleTextAttribute(hConsole,7);
		break;
	}
}
	}

	//day 2
	while (day == 2)
	{
		SetConsoleTextAttribute(hConsole,11);
    	cout<<"Day 2 is Coming Soon...\n\n";
    	SetConsoleTextAttribute(hConsole,7);
    	day=1;
    /*error = 1;
	SetConsoleTextAttribute(hConsole,2);
	cout << "Day " << day << "\n";
	SetConsoleTextAttribute(hConsole,7);
	cout << "You wake up the next day, the sun is shining bright. \n What are you going to do today? \n Mine (m) or Hunt (h)? \n";
	cin >> activity;
	switch (activity){
        default:
		SetConsoleTextAttribute(hConsole,4);
		cout<<"Invalid Response\n";
		SetConsoleTextAttribute(hConsole,7);
        break;
	}*/
	}
    break;
	case 'l':
		SetConsoleTextAttribute(hConsole,11);
    	cout<<"Load Feature is Coming Soon...\n\n";
    	SetConsoleTextAttribute(hConsole,7);
        /*cout<<"Enter your gamecode! \n";
        cin>>day1choices;
		//Gamecodes
		if (day1choices=="2cpcyu"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='p';
			layer3='c';
			layer4='y';
			layer5='u';
			system("pause");
			}
		else if (day1choices=="2cpcyd"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='p';
			layer3='c';
			layer4='y';
			layer5='d';
			system("pause");
			}
		else if (day1choices=="2cpdyu"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='p';
			layer3='d';
			layer4='y';
			layer5='u';
			system("pause");
			}
		else if (day1choices=="2cpdnr"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='p';
			layer3='d';
			layer4='n';
			layer5='r';
			system("pause");
			}
		else if (day1choices=="2cswyu"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='w';
			layer4='y';
			layer5='u';
			system("pause");
			}
		else if (day1choices=="2cswyd"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='w';
			layer4='y';
			layer5='d';
			system("pause");
			}
		else if (day1choices=="2cswnf"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='w';
			layer4='n';
			layer5='f';
			system("pause");
			}
		else if (day1choices=="2csdyu"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='d';
			layer4='y';
			layer5='u';
			system("pause");
			}
		else if (day1choices=="2csdyd"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='d';
			layer4='y';
			layer5='d';
			system("pause");
			}
		else if (day1choices=="2csdnf"){
			cout<<"Code verified! \n";
			day=2;
			layer1='c';
			layer2='s';
			layer3='d';
			layer4='n';
			layer5='f';
			system("pause");
			}
		else if (day1choices=="2lcabj"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='c';
			layer3='a';
			layer4='b';
			layer5='j';
			system("pause");
			}
		else if (day1choices=="2lclsr"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='c';
			layer3='l';
			layer4='s';
			layer5='r';
			system("pause");
			}
		else if (day1choices=="2lclsl"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='c';
			layer3='l';
			layer4='s';
			layer5='l';
			system("pause");
			}
		else if (day1choices=="2lclbs"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='c';
			layer3='l';
			layer4='b';
			layer5='s';
			system("pause");
			}
		else if (day1choices=="2ljlfy"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='l';
			layer4='f';
			layer5='y';
			cout<<"Enter ocelot's name: \n";
			cin>>ocelot_name;
			system("pause");
			}
		else if (day1choices=="2ljlfn"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='l';
			layer4='f';
			layer5='n';
			system("pause");
			}
		else if (day1choices=="2ljtec"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='t';
			layer4='e';
			layer5='c';
			system("pause");
			}
		else if (day1choices=="2ljtes"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='t';
			layer4='e';
			layer5='s';
			system("pause");
			}
		else if (day1choices=="2ljtls"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='t';
			layer4='l';
			layer5='s';
			system("pause");
			}*/
		break;
	case 'q':
		menu = 0;
		break;
	default:
		cout<<"Answer choice not recognized, please try again. \n";
        break;
	}
	}
return 0;
}

void draw_picture()
{
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);

    for (int y=0;y<24;y++){
    for (int x=0;x<64;x++){

        if (night==true){
            SetConsoleTextAttribute(hConsole,17);
        }
        else if (evening==true){
            SetConsoleTextAttribute(hConsole,68);
        }
        else if (day==true){
            SetConsoleTextAttribute(hConsole,187);
        }
        else if (cave==true){
            SetConsoleTextAttribute(hConsole,119);
        }
        else{
            SetConsoleTextAttribute(hConsole,187);
        }


        if (sun_left==true && x<8 && y<8){
            SetConsoleTextAttribute(hConsole,238);
        }
        else if (sun_mid==true && x>25 && x<39 && y<8){
            SetConsoleTextAttribute(hConsole,238);
        }
        else if (sun_right==true && x>55 && y<8){
            SetConsoleTextAttribute(hConsole,238);
        }
        else if (moon_left==true && x<8 && y<8){
            SetConsoleTextAttribute(hConsole,255);
        }
        else if (moon_mid==true && x>25 && x<39 && y<8){
            SetConsoleTextAttribute(hConsole,255);
        }
        else if (moon_right==true && x>55 && y<8){
            SetConsoleTextAttribute(hConsole,255);
        }


        if (house==true && x>=21 && x<=42 && y>=10 && y<=19){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (stone_house==true && x>=21 && x<=42 && y>=10 && y<=19){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=21+8 && x<=42-8 && y>=15 && y<=19){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (house==true && x>=22 && x<=41 && y==9){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=23 && x<=40 && y==8){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=24 && x<=39 && y==7){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=26 && x<=37 && y==6){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=28 && x<=35 && y==5){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (house==true && x>=30 && x<=33 && y==4){
            SetConsoleTextAttribute(hConsole,136);
        }

        if (temple_overview==true && x>=21 && x<=42 && y>=10 && y<=19){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (temple_overview==true && x>=21+8 && x<=42-8 && y>14 && y<19){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (temple_overview==true && x%2==0 && x>21 && x<42 && y>14 && y<19){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (temple_overview==true && x%2!=0 && x>21 && x<42 && y>=10 && y<=13){

            SetConsoleTextAttribute(hConsole,34);

            if ((x==23||x==27||x==31||x==35||x==39)&& y >= 12){
                SetConsoleTextAttribute(hConsole,102);
            }

        }

        if (cavexjungle_overview==true){

            if (x>=11+2 && x<=21+2 && y>=8 && y<13){
                SetConsoleTextAttribute(hConsole,34);
            }



            if (x>=3-2 && x<=13-2 && y>=8 && y<13){

                SetConsoleTextAttribute(hConsole,34);
            }

            if (x>=7 && x<=17 && y>=8 && y<13){
                SetConsoleTextAttribute(hConsole,34);
            }

            if ((x>=10 && x<=14 && y>=13 && y<20)||
                (x>=14+2 && x<=18+2 && y>=13 && y<20)||
                (x>=6-2 && x<=10-2 && y>=13 && y<20)){

                SetConsoleTextAttribute(hConsole,102);

            }

            if (x>=63-21 && x<=63 && y>=10 && y<=19){
                SetConsoleTextAttribute(hConsole,136);
            }
            if (x>=44 && x< 50 && y>=13 && y<=19){

                SetConsoleTextAttribute(hConsole,7);
            }



        }



        if (tree_left==true && x>=7 && x<=17 && y>=8 && y<13){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (tree_left==true && x>=10 && x<=14 && y>=13 && y<20){
            SetConsoleTextAttribute(hConsole,102);
        }

        if (tree_middle==true && x>=47-21 && x<=57-21 && y>=8 && y<13){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (tree_middle==true && x>=50-21 && x<=54-21 && y>=13 && y<20){
            SetConsoleTextAttribute(hConsole,102);
        }

        if (tree_right==true && x>=47 && x<=57 && y>=8 && y<13){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (tree_right==true && x>=50 && x<=54 && y>=13 && y<20){
            SetConsoleTextAttribute(hConsole,102);
        }


        if (cobblestone==true && x>=2 && x<=5 && y>=16 && y<=19){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (wood==true && x>=2 && x<=5 && y>=16 && y<=19){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (dirt==true && x>=2 && x<=5 && y>=16 && y<=19){
            SetConsoleTextAttribute(hConsole,102);
        }


        if (switch_wall_right==true && x>=15+42 && x<=21+42 && y>=13 && y<16){
            if ((x==16+42&&y==14)||(x==20+42&&y==14)){
                SetConsoleTextAttribute(hConsole,7);
            }
            else if (x==18+42&&y==14){
                SetConsoleTextAttribute(hConsole,255);
            }
            else{
                SetConsoleTextAttribute(hConsole,136);
            }


        }

        if (switch_wall_middle==true && x>=15+21 && x<=21+21 && y>=13 && y<16){
            if ((x==16+21&&y==14)||(x==20+21&&y==14)){
                SetConsoleTextAttribute(hConsole,7);
            }
            else if (x==18+21&&y==14){
                SetConsoleTextAttribute(hConsole,255);
            }
            else{
                SetConsoleTextAttribute(hConsole,136);
            }


        }

        if (switch_wall_left==true && x>=15 && x<=21 && y>=13 && y<16){
            if ((x==16&&y==14)||(x==20&&y==14)){
                SetConsoleTextAttribute(hConsole,7);
            }
            else if (x==18&&y==14){
                SetConsoleTextAttribute(hConsole,255);
            }
            else{
                SetConsoleTextAttribute(hConsole,136);
            }


        }




        if (chests_right == true  && ((x>=10+42 && x<=13+42 && y>=18 && y<20)||(x>=16+42 && x<=19+42 && y>=18 && y<20))){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (chests_middle == true  && ((x>=10+21 && x<=13+21 && y>=18 && y<20)||(x>=16+21 && x<=19+21 && y>=18 && y<20))){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (chests_left == true  && ((x>=10-5 && x<=13-5 && y>=18 && y<20)||(x>=16-5 && x<=19-5 && y>=18 && y<20))){
            SetConsoleTextAttribute(hConsole,102);
        }


        if (player_left==true && x>=11 && x<=12 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_left==true && x>=10 && x<=13 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_left==true && ((x>=11 && x<=12 && y>=16 && y<=17)||(x==10 && y>=16 && y<17)||(x==13 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (player_left==true && x>=11 && x<=12 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }

        if (player_middle==true && x>=11+21 && x<=12+21 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_middle==true && x>=10+21 && x<=13+21 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_middle==true && ((x>=11+21 && x<=12+21 && y>=16 && y<=17)||(x==10+21 && y>=16 && y<17)||(x==13+21 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (player_middle==true && x>=11+21 && x<=12+21 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }

        if (player_right==true && x>=11+42 && x<=12+42 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_right==true && x>=10+42 && x<=13+42 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_right==true && ((x>=11+42 && x<=12+42 && y>=16 && y<=17)||(x==10+42 && y>=16 && y<17)||(x==13+42 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (player_right==true && x>=11+42 && x<=12+42 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }

        if (skeleton_right==true&&
                                        ((x>=11+42 && x<=12+42 && y>=15 && y<16)||
                                         (x>=10+42 && x<=13+42 && y>=16 && y<=17 && x!= 11+42 && x!= 12+42)||
                                         (x==11+42 && y==16)||
                                         (x==12+42 && y==17)||
                                         (x>=11+42 && x<=12+42 && y>=18 && y<=19)
                                         )){
                                            SetConsoleTextAttribute(hConsole,255);
        }
        if (skeleton_middle==true&&
                                        ((x>=11+21 && x<=12+21 && y>=15 && y<16)||
                                         (x>=10+21 && x<=13+21 && y>=16 && y<=17 && x!= 11+21 && x!= 12+21)||
                                         (x==11+21 && y==16)||
                                         (x==12+21 && y==17)||
                                         (x>=11+21 && x<=12+21 && y>=18 && y<=19)
                                         )){
                                            SetConsoleTextAttribute(hConsole,255);
        }
        if (skeleton_left==true&&
                                        ((x>=11 && x<=12 && y>=15 && y<16)||
                                         (x>=10 && x<=13 && y>=16 && y<=17 && x!= 11 && x!= 12)||
                                         (x==11 && y==16)||
                                         (x==12 && y==17)||
                                         (x>=11 && x<=12 && y>=18 && y<=19)
                                         )){
                                            SetConsoleTextAttribute(hConsole,255);
        }

        if (zombie_right==true && x>=11+42 && x<=12+42 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_right==true && x>=10+42 && x<=13+42 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_right==true && ((x>=11+42 && x<=12+42 && y>=16 && y<=17)||(x==10+42 && y>=16 && y<17)||(x==13+42 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (zombie_right==true && x>=11+42 && x<=12+42 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }

        if (zombie_middle==true && x>=11+21 && x<=12+21 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_middle==true && x>=10+21 && x<=13+21 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_middle==true && ((x>=11+21 && x<=12+21 && y>=16 && y<=17)||(x==10+21 && y>=16 && y<17)||(x==13+21 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (zombie_middle==true && x>=11+21 && x<=12+21 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }

        if (zombie_left==true && x>=11 && x<=12 && y>=15 && y<16){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_left==true && x>=10 && x<=13 && y>=16 && y<=17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (zombie_left==true && ((x>=11 && x<=12 && y>=16 && y<=17)||(x==10 && y>=16 && y<17)||(x==13 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,51);
        }
        if (zombie_left==true && x>=11 && x<=12 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,85);
        }


        if (ender_left==true && x>=11 && x<=12 && y>=12 && y<16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_left==true && x>=10 && x<=13 && y>=13 && y<=16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_left==true && ((x>=11 && x<=12 && y>=16 && y<=17)||(x==10 && y>=16 && y<17)||(x==13 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_left==true && x>=11 && x<=12 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,7);
        }

        if (ender_middle==true && x>=11+21 && x<=12+21 && y>=12 && y<16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_middle==true && x>=10+21 && x<=13+21 && y>=13 && y<=16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_middle==true && ((x>=11+21 && x<=12+21 && y>=16 && y<=17)||(x==10+21 && y>=16 && y<17)||(x==13+21 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_middle==true && x>=11+21 && x<=12+21 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,7);
        }

        if (ender_right==true && x>=11+42 && x<=12+42 && y>=12 && y<16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_right==true && x>=10+42 && x<=13+42 && y>=13 && y<=16){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_right==true && ((x>=11+42 && x<=12+42 && y>=16 && y<=17)||(x==10+42 && y>=16 && y<17)||(x==13+42 && y>=16 && y<17))){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ender_right==true && x>=11+42 && x<=12+42 && y>=18 && y<=19){
            SetConsoleTextAttribute(hConsole,7);
        }


        if (spider_right==true && x>=5+42 && x<=12+42 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (spider_right==true && (x==6+42 || x==8+42 ||x==10+42 || x==12+42) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (spider_middle==true && x>=5+21 && x<=12+21 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (spider_middle==true && (x==6+21 || x==8+21 ||x==10+21 || x==12+21) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (spider_left==true && x>=5 && x<=12 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (spider_left==true && (x==6 || x==8 ||x==10 || x==12) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,7);
        }

        if (ocelot_right==true && x>=5+42 && x<=12+42 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,238);
        }
        if (ocelot_right==true && x>=13+42 && x<=16+42 && y==17){
            SetConsoleTextAttribute(hConsole,238);
        }
        if ((ocelot_right==true && x==9+42 && y==17)||(ocelot_right==true && x==11+42 && y==17)||(ocelot_right==true && x==7+42 && y==17)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ocelot_right==true && (x==6+42 || x==8+42 ||x==10+42 || x==12+42) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,238);
        }

        if (ocelot_middle==true && x>=5+21 && x<=12+21 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,238);
        }
        if (ocelot_middle==true && x>=13+21 && x<=16+21 && y==17){
            SetConsoleTextAttribute(hConsole,238);
        }
        if ((ocelot_middle==true && x==9+21 && y==17)||(ocelot_right==true && x==11+21 && y==17)||(ocelot_right==true && x==7+21 && y==17)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ocelot_middle==true && (x==6+21 || x==8+21 ||x==10+21 || x==12+21) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,238);
        }

        if (ocelot_left==true && x>=5 && x<=12 && (y==17 || y==18)){
            SetConsoleTextAttribute(hConsole,238);
        }
        if (ocelot_left==true && x>=13 && x<=16 && y==17){
            SetConsoleTextAttribute(hConsole,238);
        }
        if ((ocelot_left==true && x==9 && y==17)||(ocelot_right==true && x==11 && y==17)||(ocelot_right==true && x==7 && y==17)){
            SetConsoleTextAttribute(hConsole,7);
        }
        if (ocelot_left==true && (x==6 || x==8 ||x==10 || x==12) && y>=18 && y<20){
            SetConsoleTextAttribute(hConsole,238);
        }






        if (creeper_left==true && x>=10 && x<=13 && y>=15 && y<17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_left==true && x>=11 && x<=12 && y>=17 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_left==true && x>=10 && x<=13 && y>=19 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_middle==true && x>=10+21 && x<=13+21 && y>=15 && y<17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_middle==true && x>=11+21 && x<=12+21 && y>=17 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_middle==true && x>=10+21 && x<=13+21 && y>=19 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }

        if (creeper_right==true && x>=10+42 && x<=13+42 && y>=15 && y<17){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_right==true && x>=11+42 && x<=12+42 && y>=17 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }
        if (creeper_right==true && x>=10+42 && x<=13+42 && y>=19 && y<20){
            SetConsoleTextAttribute(hConsole,34);
        }


        if (player_left_sword == true && x>=13 && x<=16 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_middle_sword == true && x>=13+21 && x<=16+21 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_right_sword == true && x>=13+42 && x<=16+42 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }

        if (player_left_bread == true && x>=13 && x<=14 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_middle_bread == true && x>=13+21 && x<=14+21 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_right_bread == true && x>=13+42 && x<=14+42 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }


        if ((player_left_pickaxe == true && x>=13 && x<=16 && y==17)||(player_left_pickaxe == true && x==16 && y>=16 && y<=18)){
            SetConsoleTextAttribute(hConsole,102);
            if (player_left_stone_pickaxe == true && x==16 && y>=16 && y<=18){
            	SetConsoleTextAttribute(hConsole,136);
            }
        }
        if ((player_middle_pickaxe == true && x>=13+21 && x<=16+21 && y==17)||(player_middle_pickaxe == true && x==16+21 && y>=16 && y<=18)){
            SetConsoleTextAttribute(hConsole,102);
            if (player_middle_stone_pickaxe == true && x==16+21 && y>=16 && y<=18){
            	SetConsoleTextAttribute(hConsole,136);
            }
        }
        if ((player_right_pickaxe == true && x>=13+42 && x<=16+42 && y==17)||(player_right_pickaxe == true && x==16+42 && y>=16 && y<=18)){
            SetConsoleTextAttribute(hConsole,102);
            if (player_right_stone_pickaxe == true && x==16+42 && y>=16 && y<=18){
            	SetConsoleTextAttribute(hConsole,136);
            }
        }


        if (player_left_fishrod==true && x==16 && y>=17 && y<=18){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_left_fishrod == true && x>=13 && x<=16 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_middle_fishrod==true && x==16+21 && y>=17 && y<=18){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_middle_fishrod == true && x>=13+21 && x<=16+21 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }
        if (player_right_fishrod==true && x==16+42 && y>=17 && y<=18){
            SetConsoleTextAttribute(hConsole,255);
        }
        if (player_right_fishrod == true && x>=13+42 && x<=16+42 && y==17){
            SetConsoleTextAttribute(hConsole,102);
        }





        if (cavespids_right==true && ((x==9+42 && y==18)||(x==11+42 && y==18)||(x==7+42 && y==18))){
            SetConsoleTextAttribute(hConsole,153);
        }
        if (cavespids_right==true && ((x==8+42)||(x==10+42)||(x==6+42)||(x==12+42))&& y==19){
            SetConsoleTextAttribute(hConsole,153);
        }
        if (cavespids_middle==true && ((x==9+21 && y==18)||(x==11+21 && y==18)||(x==7+21 && y==18))){
            SetConsoleTextAttribute(hConsole,153);
        }
        if (cavespids_middle==true && ((x==8+21)||(x==10+21)||(x==6+21)||(x==12+21))&& y==19){
            SetConsoleTextAttribute(hConsole,153);
        }
        if (cavespids_left==true && ((x==9 && y==18)||(x==11 && y==18)||(x==7 && y==18))){
            SetConsoleTextAttribute(hConsole,153);
        }
        if (cavespids_left==true && ((x==8)||(x==10)||(x==6)||(x==12))&& y==19){
            SetConsoleTextAttribute(hConsole,153);
        }

        if (grassfloor == true && (y==20||y==21)){
            SetConsoleTextAttribute(hConsole,170);
        }
        if (grassfloor == true && (y==22||y==23)){
            SetConsoleTextAttribute(hConsole,102);
        }


        if (stonefloor == true && (y==20||y==21)){
            SetConsoleTextAttribute(hConsole,136);
        }
        if (stonefloor == true && (y==22||y==23)){
            SetConsoleTextAttribute(hConsole,136);
        }

        if (tracks==true && x%2 == 0 && y==20){
            SetConsoleTextAttribute(hConsole,7);
        }

        if (ravine==true && x>=16 && x<=48 && y>=20){
            SetConsoleTextAttribute(hConsole,7);

            if (y==20&&half_ravine_bridge==false&&no_ravine_bridge==false){
            	SetConsoleTextAttribute(hConsole,102);
            }
            else if (no_ravine_bridge==false&&half_ravine_bridge==true&&y==20&&(x>32+8||x<32+4)){
            	SetConsoleTextAttribute(hConsole,102);

            }


        }

        if (lava_lake==true && x>=16 && x<=48 && y>=20){
            SetConsoleTextAttribute(hConsole,204);

            if (y==20&&((x>=18&&x<=27)||(x>=30&&x<=35)||x==39||(x>40&&x<47))){
        		SetConsoleTextAttribute(hConsole,136);
        	}

        }
        if (lake==true && x>=16 && x<=48 && y>=20){
            SetConsoleTextAttribute(hConsole,17);
        }


        if (lavaxshaft==true){
        	if (x>=0 && x<16 && y>=20){
        		SetConsoleTextAttribute(hConsole,204);
        	}
        	if (x>=48 && x%2 == 0 && y==20){
        		SetConsoleTextAttribute(hConsole,7);
        	}

		}

        cout<<line[x];

        SetConsoleTextAttribute(hConsole,7);
    }
    cout<<endl;
    }

    SetConsoleTextAttribute(hConsole,7);
     stonefloor=false;
 grassfloor=false;
 day=false;
 evening=false;
 night=false;
 cave=false;
 sun_left=false;
 sun_mid=false;
 sun_right=false;
 moon_left=false;
 moon_mid=false;
 moon_right=false;
 tree_right=false;
 tree_middle=false;
 tree_left=false;
 player_right=false;
 player_left=false;
 player_middle=false;
 skeleton_right=false;
 skeleton_middle=false;
 skeleton_left=false;
 zombie_right=false;
 zombie_middle=false;
 zombie_left=false;
 creeper_left=false;
 creeper_middle=false;
 creeper_right=false;
 player_left_sword=false;
 player_middle_sword=false;
 player_right_sword=false;
 player_left_pickaxe=false;
 player_middle_pickaxe=false;
 player_right_pickaxe=false;
player_left_fishrod=false;
player_middle_fishrod=false;
player_right_fishrod=false;
cobblestone=false;
wood=false;
dirt=false;
house=false;
ender_left=false;
ender_middle=false;
ender_right=false;
spider_left=false;
spider_middle=false;
spider_right=false;
ocelot_left=false;
ocelot_middle=false;
ocelot_right=false;
cavespids_right=false;
cavespids_middle=false;
cavespids_left=false;
tracks=false;
ravine=false;
lava_lake=false;
lake=false;
chests_left=false;
chests_middle=false;
chests_right=false;
switch_wall_right=false;
switch_wall_middle=false;
switch_wall_left=false;
temple_overview=false;
cavexjungle_overview=false;
stone_house=false;
lavaxshaft=false;
half_ravine_bridge=false;
no_ravine_bridge=false;
player_middle_bread=false;
player_left_bread=false;
player_right_bread=false;
player_middle_stone_pickaxe=false;
player_right_stone_pickaxe=false;
player_left_stone_pickaxe=false;
}
