#include "SceneRegMgr.h"

struct MyScene : public execEntry<SceneReg>
{
	MyScene(int32 _mapid):mapid(_mapid)
	{
		scene = NULL;
	}
	virtual bool exec(SceneReg *entry)
	{
		if (!scene && entry->mapid == mapid)
		{
			scene = entry;
		}
		return true;
	}

	int32 mapid;
	SceneReg* scene;
};

SceneRegMgr::SceneRegMgr()
{

}

SceneRegMgr::~SceneRegMgr()
{

}


SceneReg* SceneRegMgr::CreateObj()
{
	return objpool.CreateObj();
}

void SceneRegMgr::DestroyObj(SceneReg* obj)
{
	objpool.DestroyObj(obj);
}

bool SceneRegMgr::add(SceneReg* scene)
{
	return zEntryMgr<zEntryID>::addEntry(scene);
}

void SceneRegMgr::remove(SceneReg* scene)
{
	zEntryMgr<zEntryID>::removeEntry(scene);
}

SceneReg* SceneRegMgr::get(int64 id)
{
	return (SceneReg*)zEntryMgr<zEntryID>::getEntryByID(id);
}

SceneReg* SceneRegMgr::getBymapid(int32 mapid)
{
	MyScene exec(mapid);
	zEntryMgr<zEntryID>::execEveryEntry(exec);
	return exec.scene;
}

SceneReg* SceneRegMgr::getFreeBymapid(int32 mapid)
{
	MyScene exec(mapid); // todo 
	zEntryMgr<zEntryID>::execEveryEntry(exec);
	return exec.scene;
}