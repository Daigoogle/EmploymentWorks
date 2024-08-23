//	t@CผFSprite3DManager.h
//	Tv		 F3DฬฝสIuWFNgฬว
//	์ฌา	 Fษกๅๅ
//	XVL^	 F2024/02/17	21:40	Rgวม
//ธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถธถฒ

// =-=-= CN[hK[h =-=-=
#ifndef _____SPRITE_3D_MANAGER_H_____
#define _____SPRITE_3D_MANAGER_H_____

// =-=-= CN[h =-=-=
#include "MeshBuffer.h"
#include "CameraBase.h"
#include <queue>
#include <memory>
#include "Sprite3DComponent.h"
#include "SingletonsMng.hxx"

/// @brief 3D๓ิใฬฝสIuWFNg๐ว
/// @brief ฅฃฅฃฅฃ VOgลท ฅฃฅฃฅฃ
class Sprite3DManager :public Singleton<Sprite3DManager>
{
	friend Singleton<Sprite3DManager>;
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
	void AddQueue(Sprite3DComponent*);
private:
	Sprite3DManager();
	~Sprite3DManager();
	std::unique_ptr<MeshBuffer> m_MeshBuffer;
	std::queue<Sprite3DComponent*> m_queue;

};

#endif // !_____SPRITE_3D_MANAGER_H_____