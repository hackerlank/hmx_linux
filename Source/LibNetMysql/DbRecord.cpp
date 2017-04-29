#include "DbRecord.h"

DbRecord::DbRecord( DbRecordSet& rRecordSet , uint32 nFieldNum ): 
m_rRecordSet( rRecordSet ),m_nBuffBegin(0)
{	
	for ( uint32 i = 0 ; i < nFieldNum ; i++ )
	{
		DbField sDbField( rRecordSet.GetFieldInfo(i) ,*this );
		m_vecFields.push_back( sDbField );
	}
}


DbRecord::DbRecord( DbRecordSet& rRecordSet , MYSQL_ROW row , uint32& nFieldNum ):
m_rRecordSet( rRecordSet ),m_nBuffBegin(0)
{	
	for ( uint32 i = 0 ; i < nFieldNum ; i++ )
	{
		DbField sDbField( rRecordSet.GetFieldInfo(i) , *this );
		sDbField.SetValue( row[i]);
		sDbField.TagChanged( false );
		m_vecFields.push_back( sDbField );
	}
}

DbRecord::DbRecord( DbRecordSet& rRecordSet , MYSQL_FIELD* fields , uint32& nFieldNum ):
m_rRecordSet( rRecordSet ),m_nBuffBegin(0)
{	
	for ( uint32 i = 0 ; i < nFieldNum ; i++ )
	{
		DbField sDbField( rRecordSet.GetFieldInfo(i),*this );
		sDbField.SetValue( fields[i].def );
		sDbField.TagChanged( false );
		m_vecFields.push_back( sDbField );
	}
}

DbRecord::~DbRecord()
{
	m_rRecordSet.Remove(this); 
	m_vecFields.clear();
}

void DbRecord::Release()
{
	delete this;
}

IDbData& DbRecord::Field( uint32 unIndex )
{
	if (unIndex >= m_vecFields.size() )
		unIndex	= 0;
	return m_vecFields[unIndex];
}

IDbData& DbRecord::Field(uint32 unIndex) const
{
	return this->Field(unIndex);
}

IDbData& DbRecord::Field( const char* pszName )
{
	if ( pszName )
	{
		for( uint32 i = 0 ; i < m_vecFields.size() ; i++ )
		{
			DbField& field = m_vecFields[i];

			if ( 0 == strcmp( field.GetName() , pszName ) )
				return field;
		}
	}

	return this->Field( static_cast<unsigned int>(0) );
}

IDbData& DbRecord::Field(const char* pszName) const
{
	return this->Field(pszName);
}


IDbData& DbRecord::Key()
{
	return this->Field( m_rRecordSet.m_nKeyIndex ); 
}


const char*	DbRecord::KeyName()
{
	DbField& field = m_vecFields[m_rRecordSet.m_nKeyIndex]; 

	return field.GetName();
}

bool DbRecord::BuildSQLOperation( char* pszOperationSQL )
{
	pszOperationSQL[0]	='\0';

	char szFormat[1024] = "";
	bool bFirst = true;
	bool bFlag = true;

	for (uint32 i = 0 ; i < m_vecFields.size() ; i++ )
	{	
		DbField& field = m_vecFields[i];
	
		if ( !field.IsChanged() )
			continue;

		switch ( field.GetType() )
		{
		case FIELD_TYPE_STRING:
		case FIELD_TYPE_VAR_STRING:
			/*if ( field.mStrVal.length() <= 0 ) 
				bFlag = false;
			else
				sprintf( szFormat , "='%s'", field.mStrVal.c_str() );*/
			break;

		case FIELD_TYPE_FLOAT:
			//sprintf( szFormat , "=%.2f", field.mDVal );
			break;

		case FIELD_TYPE_DOUBLE:
			//sprintf( szFormat , "=%.2f", field.mDVal );
			break;

		case FIELD_TYPE_TINY:
			/*if ( (field.GetAttr() & UNSIGNED_FLAG) != 0 )
				sprintf( szFormat , "=%llu", field.mI64Val );
			else
				sprintf( szFormat , "=%lld", field.mI64Val );*/
			break;

		case FIELD_TYPE_SHORT:
			/*if ( (field.GetAttr()&UNSIGNED_FLAG) != 0 )
				sprintf( szFormat , "=%llu", field.mI64Val );
			else
				sprintf( szFormat , "=%lld", field.mI64Val );*/
			break;

		case FIELD_TYPE_LONG:
			/*if ( (field.GetAttr()&UNSIGNED_FLAG) != 0 )
				sprintf( szFormat , "=%llu", field.mI64Val );
			else
				sprintf( szFormat , "=%lld", field.mI64Val );*/
			break;

		case FIELD_TYPE_LONGLONG:
		/*	if ( (field.GetAttr()&UNSIGNED_FLAG) != 0 )
				sprintf( szFormat , "=%llu", field.mI64Val );
			else
				sprintf( szFormat , "=%lld", field.mI64Val );*/
			break;

		default:
			//logManager::Print( "Error: unknow type in CRecord::BuildUpdateOpration()");
			break;
		}

		if ( bFlag )
		{	
			if ( !bFirst )
				strcat( pszOperationSQL , "," );
			else 
				bFirst = false;

			strcat( pszOperationSQL , field.GetName() );
			strcat( pszOperationSQL , szFormat );
		}
		else
			bFlag = true;
	}

	if ( pszOperationSQL[0] == '\0' )
		return false;

	return true;
}

void DbRecord::BuildSQLCondition( char* pszConditionSQL )
{
	pszConditionSQL[0] ='\0';
	sprintf(pszConditionSQL,"%s=%d",this->KeyName(),(int32)this->Key());
}

uint32 DbRecord::GetFieldCount()
{
	return	m_vecFields.size();
}

std::vector<DbField>& DbRecord::GetMFields(){
	return m_vecFields;
}

void DbRecord::StrToBytes(const char* pszValue, uint32 nLen, int32 nType)
{
	int64 mI64Val;
	float64 mF64Val;
	switch (nType)
	{
	case FIELD_TYPE_TINY:
	{
		mI64Val = pszValue ? atol(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mI64Val, 1);
		m_nBuffBegin += 1;
	}
		break;
	case FIELD_TYPE_SHORT:
	{
		mI64Val = pszValue ? atol(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mI64Val, 2);
		m_nBuffBegin += 2;
	}
		break;
	case FIELD_TYPE_LONG:
	{
		mI64Val = pszValue ? atol(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mI64Val, 4);
		m_nBuffBegin += 4;
	}
		break;
	case FIELD_TYPE_FLOAT:
	{
		mF64Val = pszValue ? atof(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mF64Val, 4);
		m_nBuffBegin += 4;
	}
		break;
	case FIELD_TYPE_LONGLONG:
	{
		mI64Val = pszValue ? atoll(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mI64Val, 8);
		m_nBuffBegin += 8;
	}
		break;
	case FIELD_TYPE_DOUBLE:
	{
		mF64Val = pszValue ? atof(pszValue) : 0;
		memcpy(&m_arrRowBuff[m_nBuffBegin], &mF64Val, 8);
		m_nBuffBegin += 8;
	}
		break;
	case FIELD_TYPE_STRING:// char
	{
		if(pszValue)
		{
			memcpy(&m_arrRowBuff[m_nBuffBegin], pszValue, nLen / 3); // mysql char 定义大小会按最大长底去计算长度，这里限制按字节大小去截断 
		}else
		{
			memset(&m_arrRowBuff[m_nBuffBegin],0,nLen / 3);		// /3 是因为每个字符都按UTF8最大字符用3个字节来保存 
		}
		m_nBuffBegin += nLen / 3;
	}
		break;
	case FIELD_TYPE_VAR_STRING:// var_char varbinary
	{
		if(pszValue)
		{
			memcpy(&m_arrRowBuff[m_nBuffBegin], pszValue, nLen ); // mysql char 定义大小会按最大长底去计算长度，这里限制按字节大小去截断 
		}else
		{
			memset(&m_arrRowBuff[m_nBuffBegin], 0, nLen);
		}
		m_nBuffBegin += nLen;
	}
		break;
	case MYSQL_TYPE_TINY_BLOB:
	case MYSQL_TYPE_MEDIUM_BLOB:
	case MYSQL_TYPE_LONG_BLOB:
	case MYSQL_TYPE_BLOB:
	{
		if(pszValue)
		{
			memcpy(&m_arrRowBuff[m_nBuffBegin], pszValue, nLen);
		}else
		{
			memset(&m_arrRowBuff[m_nBuffBegin], 0, nLen);
		}
		m_nBuffBegin += nLen;
	}
		break;
	case MYSQL_TYPE_DATETIME:
	{
		using namespace boost::posix_time;
		using namespace boost::gregorian;

		ptime	pt = time_from_string(pszValue);
		date	dd = pt.date();
		int32  year = dd.year();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &year, 4);
		m_nBuffBegin += 4;

		int32  month = dd.month();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &month, 4);
		m_nBuffBegin += 4;

		int32  day = dd.day();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &day, 4);
		m_nBuffBegin += 4;

		time_duration tt = pt.time_of_day();

		int32 hour = tt.hours();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &hour, 4);
		m_nBuffBegin += 4;

		int32 minute = tt.minutes();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &minute, 4);
		m_nBuffBegin += 4;

		int32 second = tt.seconds();
		memcpy(&m_arrRowBuff[m_nBuffBegin], &second, 4);
		m_nBuffBegin += 4;

	}
		break;
	default:
		assert(0);
	}
}

void* DbRecord::GetRowBuff()
{
	return m_arrRowBuff;
}

uint32 DbRecord::GetRecordSize()
{
	return m_nBuffBegin;
}



