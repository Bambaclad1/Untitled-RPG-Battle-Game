#pragma once
#include "Enemy.h"
class Battlesystem
{
public:
	int turn = 0;
	bool enemyTurn = true;

	void Story();

	void Init();
	void Battle();

	void Attack(Enemy& enemy);
	void Punch(Enemy& enemy);
	void Kick(Enemy& enemy);
	void Spit(Enemy& enemy);

	int RandomizerAtt(int damage);
	int RandomizerKick(int damage);

	void DealDamageEnemy();

private:
	int currentPlayerHP;
	int currentPlayerMP;
	int currentEnemyHP;
	int currentEnemyMP;
};
