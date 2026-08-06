// Generated header

class CEntityFactoryDictionary : public IEntityFactoryDictionary
{
public:
	virtual void InstallFactory(IEntityFactory *param_1, char *param_2); // vtable[0]
	virtual void Create(char *param_1); // vtable[1]
	virtual void _ZN24CEntityFactoryDictionary7DestroyEPKcP18IServerNetworkable(); // vtable[2]
	virtual void FindFactory(char *param_1); // vtable[3]
	virtual void GetCannonicalName(char *param_1) override; // vtable[4]

	CEntityFactoryDictionary(); // size[129]
	void ReportEntitySizes(); // size[121]
	~CEntityFactoryDictionary(); // size[164]
};
