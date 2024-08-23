//	t@CผFCubeManager.h
//	Tv		 Fง๛ฬฬว
//	์ฌา	 Fษกๅๅ
//	XVL^	 F2024/02/09	03:07	์ฌ	
//ธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถฒ

// =-=-= CN[hK[h =-=-=
#ifndef _____CUBE_MANAGER_H_____
#define _____CUBE_MANAGER_H_____

// =-=-= CN[h =-=-=
#include <queue>
#include "CameraBase.h"
#include "MeshBuffer.h"
#include "CubeComponent.h"
#include "SingletonsMng.hxx"

/// @brief ง๛ฬฬว
/// @brief ฅฃฅฃฅฃ VOgลท ฅฃฅฃฅฃ
class CubeManager :public Singleton<CubeManager>
{
	friend Singleton<CubeManager>;
private:
	struct Vertex
	{
		float pos[3];
		float uv[2];
	};
public:
	bool Init();
	void Draw();
	void UnInit();
	void AddQueue(CubeComponent*);

private:
	CubeManager();
	~CubeManager();

	std::unique_ptr<MeshBuffer> m_MeshBuffer;
	std::queue<CubeComponent*> m_queue;
};

#endif // !_____CUBE_MANAGER_H_____