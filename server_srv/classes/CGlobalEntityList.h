// Generated header

class CGlobalEntityList : public CBaseEntityList
{
public:
	void CGlobalEntityList();
	void CleanupDeleteList();
	void ResetDeleteList();
	void NumberOfEntities();
	void NumberOfEdicts();
	void NextEnt();
	void IsEntityPtr();
	void FindEntityByClassname();
	void FindEntityProcedural();
	void FindEntityByName();
	void FindEntityByModel();
	void FindEntityByTarget();
	void FindEntityInSphere();
	void FindEntityByNameNearest();
	void FindEntityByNameWithin();
	void FindEntityByClassnameNearest();
	void FindEntityByClassnameWithin();
	void FindEntityByClassnameWithin();
	void FindEntityGeneric();
	void FindEntityGenericWithin();
	void FindEntityGenericNearest();
	void FindEntityClassNearestFacing();
	void FindEntityNearestFacing();
	void NotifyCreateEntity();
	void NotifySpawn();
	void NotifyRemoveEntity();
	void RemoveListenerEntity();
	void Clear();
	void ReportEntityFlagsChanged();
	void AddToDeleteList();
	void AddListenerEntity();
	void ~CGlobalEntityList();
};
