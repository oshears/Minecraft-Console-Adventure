//Minecraft Adventure v3.0
//Change Log:
//Day 1 COMPLETED (leave tree option now has more features), added pet ocelot, added jungle temple switch puzzle,
//all variables now have common names, creeper face at start, menu (with option to load game or quit),
//more gamecodes to accompany new leave tree options, introducing the error loop (ability to answer question again if invalid input is given),
//and BELLS!

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <istream>
#include <sstream>

using namespace std;

int main()
{
	int day (1), bell(7), menu(1);
	string day1choices;
	HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

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
	while (error==1){
	cout << "You wake up and find a tree. What do you do? \n Chop <c> or Leave <l>? \n";
	cin >> layer1;
	switch (layer1){
	case 'c':
		//chopped tree
		while (error==1){
		cout << "You obtain some wood and create wooden planks. \n What tool do you want to make? \n Pickaxe <p> or Sword <s>? \n";
		cin >> layer2;
		switch(layer2){
		case 'p':
			//chopped tree, made pickaxe
			while (error==1){
			cout << "You make a pickaxe and head off to the nearby mountain. \n What material do you collect? \n Dirt <d> or Cobblestone <c>? \n";
			cin >> layer3;
			switch(layer3){
			case 'c':
				//chopped tree, made pickaxe, mined cobble
				while (error==1){
				cout << "You gather some cobble and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made pickaxe, mined cobble, made house
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch(layer5){
					case 'd':
						//chopped tree, made pickaxe, mined cobble, made house, slept downstairs
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
					while (error==1){
					cout << "You walk through the night, looking for more supplies. \n A skeleton appears and starts to fire at you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
					case 'f':
						//chopped tree, made pickaxe, mined cobble, no house, fought skeleton
						SetConsoleTextAttribute(hConsole,4);
						cout << "You try to fight, but unfortunately the skeleton is able to block your pickaxe and \n finish you off with a blow to the chest. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'r':
						//chopped tree, made pickaxe, mined cobble, no house, fled skeleton
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
				while (error==1){
				cout << "You gather some dirt and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made pickaxe, collected dirt, made house
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch(layer5){
					case 'd':
						//chopped tree, made pickaxe, collected dirt, made house, slept downstairs
						SetConsoleTextAttribute(hConsole,4);
						cout << "A zombie awakens you in your sleep. \n You grab your pickaxe and try to kill it \n but unfortunately the zombie doesn't die and starts to munch on your limbs. \n You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'u':
						//chopped tree, made pickaxe, collected dirt, made house, slept upstairs
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
					while (error==1){
					cout << "You walk through the night, looking for more supplies. \n A creeper appears and quickly moves towards you. How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch (layer5){
					case 'f':
					//chopped tree, made pickaxe, collected dirt, no house, fought creeper
						SetConsoleTextAttribute(hConsole,4);
						cout << "The creeper gets close enough to you to hit \n but this triggers its explosive reaction. You have died. \n";
						SetConsoleTextAttribute(hConsole,7);
						cout<<ringbell;
						error = 0;
						system ("pause");
						break;
					case 'r':
					//chopped tree, made pickaxe, collected dirt, no house, fled creeper
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
			while (error==1){
			cout << "You make a sword and head off to the nearby forest. \n What material do you collect? \n Dirt <d> or Wood <w>? \n";
			cin >> layer3;
			switch(layer3){
			case 'w':
				//chopped tree, made sword, collected wood
				while (error==1){
				cout << "You gather some wood and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch(layer4){
				case 'y':
					//chopped tree, made sword, collected wood, made house
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
					switch (layer5){
					case 'd':
						//chopped tree, made sword, collected wood, made house, slept downstairs
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
					while (error==1){
					cout << "You walk through the woods at night, looking for more supplies. \n A zombie appears and starts to run towards you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
					case 'f':
						//chopped tree, made sword, collected wood, no house, fought zombie
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
				while (error == 1){
				cout << "You gather some dirt and notice the sun is starting to set. \n Do you make a house? \n Yes <y> or No <n>? \n";
				cin >> layer4;
				switch (layer4){
					case 'y':
					//chopped tree, made sword, collected dirt, made house
					while (error==1){
					cout << "You make a house and are starting to feel sleepy. \n Where do you lay down at? \n Downstairs <d> or Upstairs <u>? \n";
					cin >> layer5;
						switch(layer5){
							case 'd':
							//chopped tree, made sword, collected dirt, made house, slept downstairs
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
					while (error==1){
					cout << "You walk through the woods at night, looking for more supplies. \n A zombie appears and starts to run towards you \n How do you respond? \n Run away <r> or Fight Back <f>? \n";
					cin >> layer5;
					switch(layer5){
						case 'f':
							//chopped tree, made sword, collected dirt, no house, fought zombie
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
		while (error==1){
		cout<<"You leave the tree and head out past the horizon. \n You come upon a cave and a jungle. \n Which one do you explore? \n Cave <c> or Jungle <j>? \n";
		cin >>layer2;
		switch(layer2){
			case 'c':
				//left tree, went in cave
				while (error==1){
				cout<<"You proceed into the cave. After walking for a while, \n you come upon a fork in the path. Which way do you go? \n Abandoned Mineshaft <a> or Lava Lake <l>? \n";
				cin>>layer3;
				switch(layer3){
					case 'a':
						//left tree, went in cave, followed abandoned mineshaft
						while(error==1){
						cout<<"After following the mineshaft for a few hours, \n you come upon an awesome ravine! \n Do you go around it by following the minecart tracks, \n or go across it by crossing the bridge? \n Tracks <t> or Bridge <b>? \n";
						cin>>layer4;
						switch(layer4){
							case 't':
								//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine
								while(error==1){
								cout<<"You eventually make it all the way around the ravine \n and sit down to take a rest. \n A few minutes later some cave spiders decide \n to come over and invite you to dinner! \n You're the main course! \n Stomp on them <s> or Run <r>? \n";
								cin>>layer5;
								switch(layer5){
								case 's':
									//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine, stomped on spiders
									SetConsoleTextAttribute(hConsole,4);
									cout << "You smash each spider quickly as they try to ambush you. \n Unfortunately your body becomes weak due to their poisons. \n As you were preparing for another stomp, a horde attacks you from above. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
									break;
								case 'r':
									//left tree, went in cave, followed abandoned mineshaft, followed tracks around ravine, ran from spiders
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
								while(error==1){
								cout<<"You start walking across the bridge slow and steady. \n Suddenly, you hear a loud cracking noise \n and the bridge instantly splits in half! \n Do you Jump to the other side <j> or head Back <b>? \n";
								cin>>layer5;
								switch(layer5){
								case 'j':
									//left tree, went in cave, followed abandoned mineshaft, took bridge across ravine, jumped across gap
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
						while(error==1){
						cout<<"You start to hop on the stones in the lava lake to get across \n You get to a wall with a thin ledge. \n Do you Sidestep against the wall <s> or turn Back <b>? \n";
						cin>>layer4;
						switch(layer4){
						case 's':
							//left tree, went in cave, followed lava lake, sidestepped
							while(error==1){
							cout<<"You successfully get to the end of the lake \n and come upon two chests. Which one do you open? \n Right <r> or Left <l>? \n";
							cin>>layer5;
							switch(layer5){
							case 'r':
								//left tree, went in cave, followed lava lake, sidestepped, right chest(stone pickaxe)
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
							while(error==1){
							cout<<"You head back to the start of the lava lake \n and are greeted by a creeper! \n He quickly approaches you for a nice big hug! \n Do you turn around and Sidestep against the wall <s> or Push it in the lava <p>? \n";
							cin>>layer5;
							switch(layer5){
							case 's':
								//left tree, went in cave, followed lava lake, went back, sidestepped
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
				while(error==1){
				cout<<"You enter the jungle and run through the bushes and the trees. \n You climb some vines to get on top of a \n taller tree and spot a lake and a temple. \n Do you go towards the Lake <l> or the Temple <t>? \n";
				cin>>layer3;
				switch(layer3){
				case 'l':
					//left tree, went in jungle, went towards lake
					while(error==1){
					cout<<"You go towards the lake and find a fishing rod at the shore. \n Do you Fish <f> or Relax <r>? \n";
					cin>>layer4;
					switch(layer4){
					case 'f':
						//left tree, went in jungle, went towards lake, went fishing
						while(error==1){
						cout<<"You cast your rod out, and after a few hours, \n you manage to catch five fish. \n Soon after you begin to eat, an ocelot slowly walks towards you. \n Do you share some of your fish? Yes <y> or No <n>? \n";
						cin>>layer5;
						switch(layer5){
						case 'y':
							//left tree, went in jungle, went towards lake, went fishing, fed ocelot
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
						while(error==1){
						cout<<"You relax beside the lake a while and get a good tan. \n As starts to get dark, a spider crawls towards you slowly. \n You scramble up and grab your fishing rod. \n Do you attack it <a> or run away <r>? \n";
						cin>>layer5;
						switch(layer5){
						case 'f':
							//left tree, went in jungle, went towards lake, relaxed, fought spider
								SetConsoleTextAttribute(hConsole,4);
									cout << "You take a swing at the spider, but it's too fast for you to hit. \n It eventually jumps at you and you fall. \n As its webs are being wrapped around you, you suffocate. \n You have died. \n";
									SetConsoleTextAttribute(hConsole,7);
									cout<<ringbell;
									error = 0;
									system ("pause");
							break;
						case 'r':
							//left tree, went in jungle, went towards lake, relaxed, fled spider
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
					while(error==1){
					cout<<"You go towards and stand at the entrance of the jungle temple. \n You have a strong sense that it's booby trapped, \n but you could really use any materials inside of it. \n Do you Enter <e> or Leave <l>? \n";
					cin>>layer4;
					switch(layer4){
					case 'e':
						//left tree, went in jungle, went towards temple, entered temple
						while(error==1){
						cout<<"You enter the temple and are shot at with arrows by a dispenser. \n You safely disarm it and watch your step for any tripwire. \n You finally come upon a wall puzzle with three switches. \n 010 (Where 0 is down and 1 is up.) \n Enter in the correct combination or leave <l>. \n";
						cin>>jtemple_switches;
						if(jtemple_switches=="101"){
							//left tree, went in jungle, went towards temple, entered temple, entered correct combination
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
							SetConsoleTextAttribute(hConsole,4);
							cout<<"Incorrect Code!\n";
							SetConsoleTextAttribute(hConsole,7);
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

								while(error==1){
								cout<<"You leave the temple and think about where to go next. \n As soon as you look up, and enderman is looking right back at you. \n Do you keep Staring <s> or Run <r>?";
								cin>>layer5;
								switch(layer5){
						case 's':
							//left tree, went in jungle, went towards temple, left temple, stared down enderman
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
						while(error==1){
						cout<<"You leave the temple and think about where to go next. \n As soon as you look up, and enderman is looking right back at you. \n Do you keep Staring <s> or Run <r>?";
						cin>>layer5;
						switch(layer5){
						case 's':
							//left tree, went in jungle, went towards temple, left temple, stared down enderman
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
    error = 1;
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
	}
	}
    break;
	case 'l':
        cout<<"Enter your gamecode! \n";
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
		else if (day1choices=="2ljtes"){
			cout<<"Code verified! \n";
			day=2;
			layer1='l';
			layer2='j';
			layer3='t';
			layer4='l';
			layer5='s';
			system("pause");
			}
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
