
#include "main.h"

void mission1()
{
    const char pass[9][26] = {
    "*************************",
    "** . . . . . . . . . . **",
    "** .** . ************. **",
    "** .** . . . . . . **. **",
    "** .** . ******* . **. **",
    "** .** . . . . . . **. **",
    "** .************ . **. **",
    "** . . . . . . . . . . **",
    "*************************"
    };
    map = Map({ 9, 26 }, (const MapUint*)pass);

    player = Player({ 1, 2 }, map);

    enemys.resize(1);

    vector<MoveDir> route[4];
    route[0] = vector<MoveDir>(10, Right);
    route[1] = vector<MoveDir>(2, Up);
    route[2] = vector<MoveDir>(10, Left);
    route[3] = vector<MoveDir>(2, Down);
    for (int i = 1; i < 4; i++)
        route[0].insert(route[0].end(), route[i].begin(), route[i].end());
    enemys[0] = new Enemy({ 5, 7 }, map, route[0]);

}

void mission2()
{
    const char pass[11][36] = {
    "***********************************",
    "**                               **",
    "**   . *   *************   * .   **",
    "**   . *   . . . . . .**   * .   **",
    "**  ****   . . . . . .**   ****  **",
    "**   . .   *************   . .   **",
    "**  ****   **. . . . . .   ****  **",
    "**   . *   **. . . . . .   * .   **",
    "**   . *   *************   * .   **",
    "**                               **",
    "***********************************"
    };
    map = Map({ 11, 36 }, (const MapUint*)pass);
    
    player = Player({ 1, 2 }, map);

    enemys.resize(4);

    vector<MoveDir> route0{ Left, Left, Left, Left, Left, Left,
        Up, Up, Right, Right, Up, Up, Right, Right, Right, Right,
        Down, Down, Down, Down };
    enemys[0] = new Enemy({ 5, 9 }, map, route0);

    vector<MoveDir> route1{ Down, Down, Down, Down, Right, Right, 
        Right, Right, Right, Right, Up, Up, Left, Left, Up, Up,
        Left, Left, Left, Left};
    enemys[1] = new Enemy({ 1, 25 }, map, route1);

    vector<MoveDir> route2{ Right, Right, Right, Right, 
        Up, Up, Up, Up, Left, Left, Left, Left, Left, Left,
        Down, Down, Right, Right, Down, Down };
    enemys[2] = new Enemy({ 9, 5 }, map, route2);

    vector<MoveDir> route3{ Left, Left, Left, Left, Up, Up, Up, Up, 
        Right, Right, Right, Right, Right, Right, Down, Down, 
        Left, Left, Down , Down };
    enemys[3] = new Enemy({ 9, 29 }, map, route3);

}

void mission3()
{
	const char pass[16][42] = {
	"*****************************************",
	"**   . . . . . .      *  . . . . . .   **",
	"**   . ******  .      *  .  ****** .   **",
	"**   . **  . . .      *  . . . .** .   **",
	"**   . **  .*******   *******  .** .   **",
	"**   . . . .**             **  . . .   **",
	"**************             **          **",
	"**                *****                **",
	"**                *****                **",
	"**          **             **************",
	"**   . . .  **             **  . . .   **",
	"**   . **.  *******   *******  .** .   **",
	"**   . **. . . .  *      . . . .** .   **",
	"**   . ******  .  *      .  ****** .   **",
	"**   . . . . . .  *      . . . . . .   **",
	"*****************************************"
	};
	map = Map({ 16, 42 }, (const MapUint*)pass);

	player = Player({ 1, 2 }, map);

	enemys.resize(6);

	vector<MoveDir> route0{ Right, Right, Right, Right, Right, Right, Up, Up, 
		Right, Right, Right, Right, Up, Up, Left, Left, Left, Left, Left,
		Left, Left, Left, Left, Left, Down, Down, Down, Down};
	enemys[0] = new Enemy({ 5, 5 }, map, route0);

	vector<MoveDir> route1{ Left, Left, Left, Left, Left, Left, Left, Left, 
		Left, Left, Down, Down, Right, Right, Right, Right, Right, Right, 
		Down, Down, Right, Right, Right, Right, Up, Up,  Up, Up };
	enemys[1] = new Enemy({ 1, 36 }, map, route1);

	vector<MoveDir> route2{ Down, Down, Down, Down, Right, Right, Right, Right, 
		Right, Right, Right, Right, Right, Right, Up, Up, Left, Left, Left, Left, 
		Left, Left, Up, Up, Left, Left, Left, Left };
	enemys[2] = new Enemy({ 10, 5 }, map, route2);

	vector<MoveDir> route3{ Down, Down, Right, Right, Right, Right, Right, Right,
		Right, Right, Right, Right, Up, Up, Up, Up, Left, Left, Left, Left, 
		Down, Down, Left, Left, Left, Left, Left, Left };
	enemys[3] = new Enemy({ 12, 24 }, map, route3);

	vector<MoveDir> route4{ Up, Up, Up, Up, Left, Left, Left, Left, Left,
		Left, Left, Left, Left, Down, Down, Down, Down, 
		Right, Right, Right, Right, Right, Right, Right, Right, Right };
	enemys[4] = new Boss({ 9, 25 }, map, route4);

	vector<MoveDir> route5{ Down, Down, Down, Down, Right, Right, Right, Right, 
		Right, Right, Right, Right, Right, Up, Up, Up, Up, Left, Left, Left, 
		Left, Left, Left, Left, Left, Left };
	enemys[5] = new Boss({ 5, 15 }, map, route5);
}
