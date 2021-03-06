#pragma once
#include "apphelp.h"
#include <map>
#include <boost/utility/string_ref.hpp>

#define ENTRY_STR(x) {#x, TAG_##x}

std::map<boost::string_ref, TAG>  TAGs = {

	ENTRY_STR(DATABASE),
	ENTRY_STR(LIBRARY),
	ENTRY_STR(INEXCLUDE),
	ENTRY_STR(SHIM),
	ENTRY_STR(PATCH),
	ENTRY_STR(APP),
	ENTRY_STR(EXE),
	ENTRY_STR(MATCHING_FILE),
	ENTRY_STR(SHIM_REF),
	ENTRY_STR(PATCH_REF),
	ENTRY_STR(LAYER),
	ENTRY_STR(FILE),
	ENTRY_STR(APPHELP),
	ENTRY_STR(LINK),
	ENTRY_STR(DATA),
	ENTRY_STR(MSI_TRANSFORM),
	ENTRY_STR(MSI_TRANSFORM_REF),
	ENTRY_STR(MSI_PACKAGE),
	ENTRY_STR(FLAG),
	ENTRY_STR(MSI_CUSTOM_ACTION),
	ENTRY_STR(FLAG_REF),
	ENTRY_STR(ACTION),
	ENTRY_STR(LOOKUP),
	ENTRY_STR(STRINGTABLE),
	ENTRY_STR(INDEXES),
	ENTRY_STR(INDEX),

	ENTRY_STR(NAME),
	ENTRY_STR(DESCRIPTION),
	ENTRY_STR(MODULE),
	ENTRY_STR(API),
	ENTRY_STR(VENDOR),
	ENTRY_STR(APP_NAME),
	ENTRY_STR(COMMAND_LINE),
	ENTRY_STR(COMPANY_NAME),
	ENTRY_STR(DLLFILE),
	ENTRY_STR(WILDCARD_NAME),
	ENTRY_STR(PRODUCT_NAME),
	ENTRY_STR(PRODUCT_VERSION),
	ENTRY_STR(FILE_DESCRIPTION),
	ENTRY_STR(FILE_VERSION),
	ENTRY_STR(ORIGINAL_FILENAME),
	ENTRY_STR(INTERNAL_NAME),
	ENTRY_STR(LEGAL_COPYRIGHT),
	ENTRY_STR(16BIT_DESCRIPTION),
	ENTRY_STR(APPHELP_DETAILS),
	ENTRY_STR(LINK_URL),
	ENTRY_STR(LINK_TEXT),
	ENTRY_STR(APPHELP_TITLE),
	ENTRY_STR(APPHELP_CONTACT),
	ENTRY_STR(SXS_MANIFEST),
	ENTRY_STR(DATA_STRING),
	ENTRY_STR(MSI_TRANSFORM_FILE),
	ENTRY_STR(16BIT_MODULE_NAME),
	ENTRY_STR(LAYER_DISPLAYNAME),
	ENTRY_STR(COMPILER_VERSION),
	ENTRY_STR(ACTION_TYPE),
	ENTRY_STR(EXPORT_NAME),

	ENTRY_STR(SIZE),
	ENTRY_STR(OFFSET),
	ENTRY_STR(CHECKSUM),
	ENTRY_STR(SHIM_TAGID),
	ENTRY_STR(PATCH_TAGID),
	ENTRY_STR(MODULE_TYPE),
	ENTRY_STR(VERDATEHI),
	ENTRY_STR(VERDATELO),
	ENTRY_STR(VERFILEOS),
	ENTRY_STR(VERFILETYPE),
	ENTRY_STR(PE_CHECKSUM),
	ENTRY_STR(PREVOSMAJORVER),
	ENTRY_STR(PREVOSMINORVER),
	ENTRY_STR(PREVOSPLATFORMID),
	ENTRY_STR(PREVOSBUILDNO),
	ENTRY_STR(PROBLEMSEVERITY),
	ENTRY_STR(LANGID),
	ENTRY_STR(VER_LANGUAGE),
	ENTRY_STR(ENGINE),
	ENTRY_STR(HTMLHELPID),
	ENTRY_STR(INDEX_FLAGS),
	ENTRY_STR(FLAGS),
	ENTRY_STR(DATA_VALUETYPE),
	ENTRY_STR(DATA_DWORD),
	ENTRY_STR(LAYER_TAGID),
	ENTRY_STR(MSI_TRANSFORM_TAGID),
	ENTRY_STR(LINKER_VERSION),
	ENTRY_STR(LINK_DATE),
	ENTRY_STR(UPTO_LINK_DATE),
	ENTRY_STR(OS_SERVICE_PACK),
	ENTRY_STR(FLAG_TAGID),
	ENTRY_STR(RUNTIME_PLATFORM),
	ENTRY_STR(OS_SKU),
	ENTRY_STR(OS_PLATFORM),
	ENTRY_STR(APP_NAME_RC_ID),
	ENTRY_STR(VENDOR_NAME_RC_ID),
	ENTRY_STR(SUMMARY_MSG_RC_ID),
	ENTRY_STR(VISTA_SKU),
	ENTRY_STR(DESCRIPTION_RC_ID),
	ENTRY_STR(PARAMETER1_RC_ID),
	ENTRY_STR(TAGID),

	ENTRY_STR(STRINGTABLE_ITEM),

	ENTRY_STR(INCLUDE),
	ENTRY_STR(GENERAL),
	ENTRY_STR(MATCH_LOGIC_NOT),
	ENTRY_STR(APPLY_ALL_SHIMS),
	ENTRY_STR(USE_SERVICE_PACK_FILES),
	ENTRY_STR(MITIGATION_OS),
	ENTRY_STR(BLOCK_UPGRADE),
	ENTRY_STR(INCLUDEEXCLUDEDLL),

	ENTRY_STR(TIME),
	ENTRY_STR(BIN_FILE_VERSION),
	ENTRY_STR(BIN_PRODUCT_VERSION),
	ENTRY_STR(MODTIME),
	ENTRY_STR(FLAG_MASK_KERNEL),
	ENTRY_STR(UPTO_BIN_PRODUCT_VERSION),
	ENTRY_STR(DATA_QWORD),
	ENTRY_STR(FLAG_MASK_USER),
	ENTRY_STR(FLAGS_NTVDM1),
	ENTRY_STR(FLAGS_NTVDM2),
	ENTRY_STR(FLAGS_NTVDM3),
	ENTRY_STR(FLAG_MASK_SHELL),
	ENTRY_STR(UPTO_BIN_FILE_VERSION),
	ENTRY_STR(FLAG_MASK_FUSION),
	ENTRY_STR(FLAG_PROCESSPARAM),
	ENTRY_STR(FLAG_LUA),
	ENTRY_STR(FLAG_INSTALL),

	ENTRY_STR(PATCH_BITS),
	ENTRY_STR(FILE_BITS),
	ENTRY_STR(EXE_ID),
	ENTRY_STR(APP_ID),
	ENTRY_STR(DATA_BITS),
	ENTRY_STR(MSI_PACKAGE_ID),
	ENTRY_STR(DATABASE_ID),
	ENTRY_STR(INDEX_BITS),

	ENTRY_STR(MATCH_MODE),
	ENTRY_STR(TAG),
	ENTRY_STR(INDEX_TAG),
	ENTRY_STR(INDEX_KEY),

};

#undef ENTRY_STR

TAG FindTagByStr(const std::string& str)
{
	auto i = TAGs.find(str);
	return i == TAGs.end() ? TAG_TYPE_INVALID : i->second;
}