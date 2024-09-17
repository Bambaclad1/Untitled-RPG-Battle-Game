#pragma once
#include "Enemy.h"
class Battlesystem
{
public:
	int turn = 0;
	bool enemyTurn = true;
	bool EnemyDied = false;
	bool PlayerDied = false;
	bool isDefending = false;

	void Story();

	void Init();
	void Battle();

	void Attack(Enemy& enemy);
	void Punch(Enemy& enemy);
	void Kick(Enemy& enemy);

	void DealDamageToEnemy(Enemy& enemy, int dmg);

	void Defend();

	int RandomizerAtt(int damage);
	int RandomizerKick(int damage);

	void Enemyturn(Player& player);
	void DealDamageToPlayer(Player& player, int dmg);
private:
	int currentPlayerHP;
	int currentPlayerMP;
	int currentEnemyHP;
	int currentEnemyMP;
};
