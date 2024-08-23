//	t@CผFSceneManager.h
//	Tv		 Fฤถท้V[ฬว
//	์ฌา	 Fษกๅๅ
//	XVL^	 F2024/01/05	13:49	ItoDaigo	์ฌ
//ธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถฒ

// =-=-= CN[hK[h =-=-=
#ifndef _____SCENE_MANAGER_H_____
#define _____SCENE_MANAGER_H_____

// =-=-= CN[h =-=-=
#include "SceneBase.h"
#include "SingletonsMng.hxx"

/// @brief ฤถท้V[๐ว
/// @brief ฅฃฅฃฅฃ VOgลท ฅฃฅฃฅฃ
class SceneManager final :public Singleton<SceneManager>
{
	friend class Singleton<SceneManager>;
public:
	bool Init();
	void Update();
	void Draw();
	void UnInit();

	SceneBase* GetScene();

	template<typename SceneType>
	void ChangeScene()
	{
		if (m_NowScene != nullptr)
		{
			m_NextScene = new SceneType;
			return;
		}
		m_NowScene = new SceneType;
		m_NowScene->Init();
	}

	template<typename SceneType>
	void SetLoadScene()
	{
		if (m_LoadScene) { delete m_LoadScene; m_LoadScene = nullptr; }
		m_LoadScene = new SceneType;
	}

private:
	SceneManager();
	~SceneManager();
	SceneBase* m_NowScene;
	SceneBase* m_NextScene;
	SceneBase* m_LoadScene;
};

#endif // !_____SCENE_MANAGER_H_____