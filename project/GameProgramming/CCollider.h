#ifndef CCOLLIDER_H
#define CCOLLIDER_H
//キャラクタクラスのインクルード
#include "CCharacter.h"
//トランスフォームクラスのインクルード
#include "CTransform.h"
#include "CXCharacter.h"
/*
コライダクラス
衝突判定データ
*/
class CCollider : public CTransform, public CTask {
public:
	enum ETag
	{
		EBODY,		//本体
		ESEARCH,	//サーチ用
		EENEMY_ATTACK_RANGE,	//敵攻撃範囲
		EENEMY_ATTACK,			//敵攻撃判定
		EPLAYER_ATTACK,		//プレイヤー攻撃用
		ESWORD,		//剣
		ESHIELD,	//盾
	};
	ETag mTag;
	//コライダタイプ
	enum EType {
		ESPHERE,//球コライダ
		ETRIANGLE,//三角コライダ
		ELINE, //線分コライダ
	};
	EType mType;//コライダタイプ
	//頂点
	CVector mV[3];

	CCharacter *mpParent;//親
	CMatrix *mpMatrix;//親行列
	float mRadius;	//半径

	//デフォルトコンストラクタ
	CCollider();

	//コンストラクタ
	//CCollider(親, 行列, 位置, 半径)
	CCollider(CCharacter *parent, CMatrix *matrix, CVector position, float radius);
	//描画
	void Render();
	~CCollider();
	//衝突判定
	//Collision(コライダ1, コライダ2)
	//retrun:true（衝突している）false(衝突していない)
	static bool Collision(CCollider *m, CCollider *o);
	//CollisionTriangleLine(三角コライダ, 線分コライダ, 調整値)
	//retrun:true（衝突している）false(衝突していない)
	//調整値:衝突しない位置まで戻す値
	static bool CollisionTriangleLine(CCollider *triangle, CCollider *line, CVector *adjust);
	//CollisionTriangleSphere(三角コライダ, 球コライダ, 調整値)
	//retrun:true（衝突している）false(衝突していない)
	//調整値:衝突しない位置まで戻す値
	static bool CollisionTriangleSphere(CCollider *triangle, CCollider *sphere, CVector *adjust);
	//優先度の変更
	virtual void ChangePriority();
};

#endif
