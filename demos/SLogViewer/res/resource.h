//stamp:0cc4935533b2cc85
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				dlg_filter = _T("LAYOUT:dlg_filter");
				dlg_find = _T("LAYOUT:dlg_find");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * dlg_filter;
			const TCHAR * dlg_find;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _languages{
			public:
			_languages(){
				lang_cn = _T("languages:lang_cn");
				lang_en = _T("languages:lang_en");
			}
			const TCHAR * lang_cn;
			const TCHAR * lang_en;
		}languages;
		class _smenu{
			public:
			_smenu(){
				menu_lv = _T("smenu:menu_lv");
			}
			const TCHAR * menu_lv;
		}smenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_clear_all",65572},
		{L"btn_close",65537},
		{L"btn_find",65543},
		{L"btn_lang_cn",65546},
		{L"btn_lang_en",65547},
		{L"btn_max",65538},
		{L"btn_min",65540},
		{L"btn_next",65582},
		{L"btn_open_file",65542},
		{L"btn_prev",65583},
		{L"btn_restore",65539},
		{L"btn_select_all",65571},
		{L"cbx_levels",65544},
		{L"chk_match_case",65580},
		{L"chk_match_whole_word",65581},
		{L"chk_pid",65576},
		{L"chk_tag",65574},
		{L"chk_tid",65578},
		{L"col_content",65569},
		{L"col_function",65567},
		{L"col_level",65557},
		{L"col_line_index",65549},
		{L"col_module",65561},
		{L"col_pid",65553},
		{L"col_source_file",65563},
		{L"col_source_line",65565},
		{L"col_tag",65559},
		{L"col_tid",65555},
		{L"col_time",65551},
		{L"edit_filter",65545},
		{L"edit_search",65579},
		{L"lv_log",65548},
		{L"lv_pid",65575},
		{L"lv_tags",65573},
		{L"lv_tid",65577},
		{L"real_scilexer",65541},
		{L"txt_content",65570},
		{L"txt_function",65568},
		{L"txt_level",65558},
		{L"txt_line",65550},
		{L"txt_module",65562},
		{L"txt_pid",65554},
		{L"txt_source_file",65564},
		{L"txt_source_line",65566},
		{L"txt_tag",65560},
		{L"txt_tid",65556},
		{L"txt_time",65552},
		{L"txt_title",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_clear_all = namedXmlID[1].strName;
			btn_close = namedXmlID[2].strName;
			btn_find = namedXmlID[3].strName;
			btn_lang_cn = namedXmlID[4].strName;
			btn_lang_en = namedXmlID[5].strName;
			btn_max = namedXmlID[6].strName;
			btn_min = namedXmlID[7].strName;
			btn_next = namedXmlID[8].strName;
			btn_open_file = namedXmlID[9].strName;
			btn_prev = namedXmlID[10].strName;
			btn_restore = namedXmlID[11].strName;
			btn_select_all = namedXmlID[12].strName;
			cbx_levels = namedXmlID[13].strName;
			chk_match_case = namedXmlID[14].strName;
			chk_match_whole_word = namedXmlID[15].strName;
			chk_pid = namedXmlID[16].strName;
			chk_tag = namedXmlID[17].strName;
			chk_tid = namedXmlID[18].strName;
			col_content = namedXmlID[19].strName;
			col_function = namedXmlID[20].strName;
			col_level = namedXmlID[21].strName;
			col_line_index = namedXmlID[22].strName;
			col_module = namedXmlID[23].strName;
			col_pid = namedXmlID[24].strName;
			col_source_file = namedXmlID[25].strName;
			col_source_line = namedXmlID[26].strName;
			col_tag = namedXmlID[27].strName;
			col_tid = namedXmlID[28].strName;
			col_time = namedXmlID[29].strName;
			edit_filter = namedXmlID[30].strName;
			edit_search = namedXmlID[31].strName;
			lv_log = namedXmlID[32].strName;
			lv_pid = namedXmlID[33].strName;
			lv_tags = namedXmlID[34].strName;
			lv_tid = namedXmlID[35].strName;
			real_scilexer = namedXmlID[36].strName;
			txt_content = namedXmlID[37].strName;
			txt_function = namedXmlID[38].strName;
			txt_level = namedXmlID[39].strName;
			txt_line = namedXmlID[40].strName;
			txt_module = namedXmlID[41].strName;
			txt_pid = namedXmlID[42].strName;
			txt_source_file = namedXmlID[43].strName;
			txt_source_line = namedXmlID[44].strName;
			txt_tag = namedXmlID[45].strName;
			txt_tid = namedXmlID[46].strName;
			txt_time = namedXmlID[47].strName;
			txt_title = namedXmlID[48].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_clear_all;
		 const wchar_t * btn_close;
		 const wchar_t * btn_find;
		 const wchar_t * btn_lang_cn;
		 const wchar_t * btn_lang_en;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_next;
		 const wchar_t * btn_open_file;
		 const wchar_t * btn_prev;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_select_all;
		 const wchar_t * cbx_levels;
		 const wchar_t * chk_match_case;
		 const wchar_t * chk_match_whole_word;
		 const wchar_t * chk_pid;
		 const wchar_t * chk_tag;
		 const wchar_t * chk_tid;
		 const wchar_t * col_content;
		 const wchar_t * col_function;
		 const wchar_t * col_level;
		 const wchar_t * col_line_index;
		 const wchar_t * col_module;
		 const wchar_t * col_pid;
		 const wchar_t * col_source_file;
		 const wchar_t * col_source_line;
		 const wchar_t * col_tag;
		 const wchar_t * col_tid;
		 const wchar_t * col_time;
		 const wchar_t * edit_filter;
		 const wchar_t * edit_search;
		 const wchar_t * lv_log;
		 const wchar_t * lv_pid;
		 const wchar_t * lv_tags;
		 const wchar_t * lv_tid;
		 const wchar_t * real_scilexer;
		 const wchar_t * txt_content;
		 const wchar_t * txt_function;
		 const wchar_t * txt_level;
		 const wchar_t * txt_line;
		 const wchar_t * txt_module;
		 const wchar_t * txt_pid;
		 const wchar_t * txt_source_file;
		 const wchar_t * txt_source_line;
		 const wchar_t * txt_tag;
		 const wchar_t * txt_tid;
		 const wchar_t * txt_time;
		 const wchar_t * txt_title;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_clear_all	=	65572;
		const static int btn_close	=	65537;
		const static int btn_find	=	65543;
		const static int btn_lang_cn	=	65546;
		const static int btn_lang_en	=	65547;
		const static int btn_max	=	65538;
		const static int btn_min	=	65540;
		const static int btn_next	=	65582;
		const static int btn_open_file	=	65542;
		const static int btn_prev	=	65583;
		const static int btn_restore	=	65539;
		const static int btn_select_all	=	65571;
		const static int cbx_levels	=	65544;
		const static int chk_match_case	=	65580;
		const static int chk_match_whole_word	=	65581;
		const static int chk_pid	=	65576;
		const static int chk_tag	=	65574;
		const static int chk_tid	=	65578;
		const static int col_content	=	65569;
		const static int col_function	=	65567;
		const static int col_level	=	65557;
		const static int col_line_index	=	65549;
		const static int col_module	=	65561;
		const static int col_pid	=	65553;
		const static int col_source_file	=	65563;
		const static int col_source_line	=	65565;
		const static int col_tag	=	65559;
		const static int col_tid	=	65555;
		const static int col_time	=	65551;
		const static int edit_filter	=	65545;
		const static int edit_search	=	65579;
		const static int lv_log	=	65548;
		const static int lv_pid	=	65575;
		const static int lv_tags	=	65573;
		const static int lv_tid	=	65577;
		const static int real_scilexer	=	65541;
		const static int txt_content	=	65570;
		const static int txt_function	=	65568;
		const static int txt_level	=	65558;
		const static int txt_line	=	65550;
		const static int txt_module	=	65562;
		const static int txt_pid	=	65554;
		const static int txt_source_file	=	65564;
		const static int txt_source_line	=	65566;
		const static int txt_tag	=	65560;
		const static int txt_tid	=	65556;
		const static int txt_time	=	65552;
		const static int txt_title	=	65536;
		}id;

		class _string{
		public:
		const static int clear_all	=	0;
		const static int col_content	=	1;
		const static int col_function	=	2;
		const static int col_level	=	3;
		const static int col_line	=	4;
		const static int col_module	=	5;
		const static int col_pid	=	6;
		const static int col_source_file	=	7;
		const static int col_source_line	=	8;
		const static int col_tag	=	9;
		const static int col_tid	=	10;
		const static int col_time	=	11;
		const static int copy	=	12;
		const static int exclude_tag	=	13;
		const static int filter	=	14;
		const static int find	=	15;
		const static int find_text	=	16;
		const static int level	=	17;
		const static int match_case	=	18;
		const static int match_whole_word	=	19;
		const static int next	=	20;
		const static int only_tag	=	21;
		const static int pid_filter	=	22;
		const static int prev	=	23;
		const static int search	=	24;
		const static int select_all	=	25;
		const static int tag_filter	=	26;
		const static int tid_filter	=	27;
		const static int title	=	28;
		const static int title_no_name	=	29;
		const static int ver	=	30;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
