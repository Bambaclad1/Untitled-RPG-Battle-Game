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
	void EndingInit();
	void Battle();

	void Attack(Enemy& enemy);
	void Punch(Enemy& enemy);
	void Kick(Enemy& enemy);

	void DealDamageToEnemy(Enemy& enemy, int dmg);
	void DealMagicDamageToEnemy(Enemy& enemy, int dmg);

	void Defend();

	void Skill(Enemy& enemy, Player& player);

	void Firaga(Enemy& enemy);

	int RandomizerAtt(int damage);
	int RandomizerKick(int damage);

	void Enemyturn(Player& player);
	void DealDamageToPlayer(Player& player, int dmg);

	int prevPlayerHP;
	int prevPlayerMP;
private:
};
