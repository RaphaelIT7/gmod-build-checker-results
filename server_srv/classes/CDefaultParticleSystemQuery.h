// Generated header

class CDefaultParticleSystemQuery : public CBaseAppSystem
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1); // vtable[0]
	virtual void Disconnect(); // vtable[1]
	virtual void QueryInterface(char *param_1); // vtable[2]
	virtual void Init(); // vtable[3]
	virtual void Shutdown(); // vtable[4]
	virtual void GetLightingAtPoint(Vector *param_1, Color *param_2); // vtable[5]
	virtual void TraceLine(Vector *param_1, Vector *param_2, uintparam_3, IHandleEntity *param_4, intparam_5, CBaseTrace *param_6); // vtable[6]
	virtual void MovePointInsideControllingObject(CParticleCollection *param_1, void *param_2, Vector *param_3); // vtable[7]
	virtual void IsPointInControllingObjectHitBox(CParticleCollection *param_1, intparam_2, Vectorparam_3, boolparam_4); // vtable[8]
	virtual void GetRayTraceEnvironmentFromName(char *param_1); // vtable[9]
	virtual void GetCollisionGroupFromName(char *param_1); // vtable[10]
	virtual void GetRandomPointsOnControllingObjectHitBox(CParticleCollection *param_1, intparam_2, intparam_3, floatparam_4, intparam_5, Vector *param_6, Vectorparam_7, Vector *param_8, int *param_9, intparam_10, char *param_11); // vtable[11]
	virtual void GetClosestControllingObjectHitBox(CParticleCollection *param_1, intparam_2, intparam_3, floatparam_4, Vector *param_5, Vector *param_6, int *param_7, intparam_8, char *param_9); // vtable[12]
	virtual void GetControllingObjectHitBoxInfo(CParticleCollection *param_1, intparam_2, intparam_3, ModelHitBoxInfo_t *param_4, char *param_5); // vtable[13]
	virtual void TraceAgainstRayTraceEnv(intparam_1, FourRays *param_2, _func_float_int *param_3, _func_float_int *param_4, RayTracingResult *param_5, intparam_6); // vtable[14]
	virtual void GetLocalPlayerPos(); // vtable[15]
	virtual void GetLocalPlayerEyeVectors(Vector *param_1, Vector *param_2, Vector *param_3); // vtable[16]
	virtual void GetCurrentViewOrigin(); // vtable[17]
	virtual void GetActivityNumber(void *param_1, char *param_2); // vtable[18]
	virtual void GetPixelVisibility(int *param_1, Vector *param_2, floatparam_3); // vtable[19]
	virtual void SetUpLightingEnvironment(Vector *param_1); // vtable[20]
	virtual void GetModel(char *param_1); // vtable[21]
	virtual void DrawModel(void *param_1, matrix3x4_t *param_2, CParticleCollection *param_3, intparam_4, intparam_5, intparam_6, intparam_7, intparam_8, floatparam_9, floatparam_10, floatparam_11, floatparam_12, floatparam_13); // vtable[22]
	virtual void BeginDrawModels(intparam_1, Vector *param_2, CParticleCollection *param_3); // vtable[23]
	virtual void FinishDrawModels(CParticleCollection *param_1); // vtable[24]
};
