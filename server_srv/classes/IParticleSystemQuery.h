// Generated header

class IParticleSystemQuery : public IAppSystem
{
public:
	void GetRandomPointsOnControllingObjectHitBox(CParticleCollection *param_1, intparam_2, intparam_3, floatparam_4, intparam_5, Vector *param_6, Vectorparam_7, Vector *param_8, int *param_9, intparam_10, char *param_11); // size[388]
	void MovePointInsideControllingObject(CParticleCollection *param_1, void *param_2, Vector *param_3); // size[10]
	void IsPointInControllingObjectHitBox(CParticleCollection *param_1, intparam_2, Vectorparam_3, boolparam_4); // size[10]
	void GetRayTraceEnvironmentFromName(char *param_1); // size[7]
	void GetCollisionGroupFromName(char *param_1); // size[7]
	void GetControllingObjectHitBoxInfo(CParticleCollection *param_1, intparam_2, intparam_3, ModelHitBoxInfo_t *param_4, char *param_5); // size[7]
	void GetLocalPlayerPos(); // size[36]
	void GetLocalPlayerEyeVectors(Vector *param_1, Vector *param_2, Vector *param_3); // size[80]
	void SetUpLightingEnvironment(Vector *param_1); // size[5]
	void GetModel(char *param_1); // size[7]
	void BeginDrawModels(intparam_1, Vector *param_2, CParticleCollection *param_3); // size[5]
	void FinishDrawModels(CParticleCollection *param_1); // size[5]
};
