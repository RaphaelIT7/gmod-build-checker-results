// Generated header

class CResponseSystem : public IResponseSystem
{
public:
	virtual void ~CResponseSystem() override; // vtable[0]
	virtual void ~CResponseSystem() override; // vtable[1]
	virtual void FindBestResponse(); // vtable[2]
	virtual void GetAllResponses(); // vtable[3]
	virtual void PrecacheResponses() override; // vtable[4]
	virtual void DumpRules(); // vtable[6]
	virtual void Precache(); // vtable[7]
	virtual void __cxa_pure_virtual(); // vtable[8]

	void GetCurrentScript();
	void PopScript();
	void LookForCriteria();
	void RecursiveLookForCriteria();
	void DebugPrint();
	void ResetResponseGroups();
	void DescribeResponseGroup();
	void IsRootCommand();
	void GetCurrentToken();
	void ResponseWarning();
	void DumpDictionary();
	void LookupEnumeration();
	void ResolveToken();
	void CompareUsingMatcher();
	void Compare();
	void ScoreCriteriaAgainstRuleCriteria();
	void RecursiveScoreSubcriteriaAgainstRule();
	void ScoreCriteriaAgainstRule();
	void SelectWeightedResponseFromResponseGroup();
	void FindBestMatchingRule();
	void ParseOneResponse();
	void PushScript();
	void ResolveResponse();
	void GetBestResponse();
	void CResponseSystem();
	void Clear();
	void ParseResponse();
	void CopyResponsesFrom();
	void ParseOneCriterion();
	void ParseCriterion();
	void CopyCriteriaFrom();
	void ParseEnumeration();
	void CopyEnumerationsFrom();
	void ParseRule();
	void LoadFromBuffer();
	void ParseInclude();
	void LoadRuleSet();
	void CopyRuleFrom();
	void ParseToken();
	void TokenWaiting();
};
