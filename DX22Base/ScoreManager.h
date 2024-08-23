//	t@C¼FScoreManager.h
//	Tv		 FXRAÌÇ
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/01/05	13:49	ItoDaigo	ì¬
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

// =-=-= CN[hK[h =-=-=
#ifndef _____SCORE_MANAGER_H_____
#define _____SCORE_MANAGER_H_____

#include "SingletonsMng.hxx"

/// @brief lðÛµ±¯é
/// @brief ¥£¥£¥£ VOgÅ· ¥£¥£¥£
class ScoreManager :public Singleton<ScoreManager>
{
	friend class Singleton<ScoreManager>;
public:
	bool Init();
	int increase();
	int GetScore();
private:
	ScoreManager() : Singleton(UPDATE_ORDER::NO_UPDATE), m_Score(0)
	{}
	~ScoreManager() {}
	int m_Score;

};

#endif // !_____SCORE_MANAGER_H_____