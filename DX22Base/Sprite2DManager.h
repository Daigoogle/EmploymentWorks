//	t@C¼FSprite2DManager.h
//	Tv		 F2D½ÊIuWFNgÌÇ
//	ì¬Ò	 FÉ¡åå
//	XVL^	 F2024/02/18	00:52	RgÇÁ
//¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶¸¶²

// =-=-= CN[hK[h =-=-=
#ifndef _____SPRITE_2D_MANAGER_H_____
#define _____SPRITE_2D_MANAGER_H_____

// =-=-= CN[h =-=-=
#include "Sprite2DComponent.h"
#include "MeshBuffer.h"
#include <memory>
#include <queue>
#include "SingletonsMng.hxx"

/// @brief 2D½ÊIuWFNgÌÇ
/// @brief ¥£¥£¥£ VOgÅ· ¥£¥£¥£
class Sprite2DManager final :public Singleton<Sprite2DManager>
{
	friend Singleton<Sprite2DManager>;
public:
	bool	Init(void);
	void	Draw(void);
	void	UnInit(void);
	void	AddQueue(Sprite2DComponent*);

	//_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	//	SetWindowSize
	//	ÖTvFEBhETCYðÝè
	//	NXFCSprite2DManager
	//	ø@FÈµ
	//	ÔèlFÈµ
	//_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	void	SetWindowSize();

private:
	Sprite2DManager();	//RXgN^
	~Sprite2DManager();	//fXgN^

	std::unique_ptr<MeshBuffer>		m_meshBuffer;
	std::queue<Sprite2DComponent*>	m_queue;
	fVec2 m_windowSize;
	static const float				NEAR_CLIP;
	static const float				FAR_CLIP;
};

#endif // !_____SPRITE_2D_MANAGER_H_____