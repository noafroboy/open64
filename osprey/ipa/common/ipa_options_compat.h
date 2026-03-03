/*
 * ipa_options_compat.h — Macro shim to redirect config_ipa.h extern reads
 * through the g_ipa_options snapshot.
 *
 * Include this header AFTER config_ipa.h in .cxx files that only READ
 * config_ipa.h globals.  The extern declarations from config_ipa.h are
 * already parsed; these macros shadow the names for all subsequent uses.
 *
 * The macros are only active when IPA_CONTEXT_FULL_INIT is defined (the
 * main IPA target).  In inline/lw_inline targets the guard is false,
 * macros are inactive, and the original externs are used as before.
 *
 * Do NOT include this in:
 *   - Headers (would propagate to all includers)
 *   - Files that WRITE to config_ipa.h globals
 *   - ipa_context.cxx (the snapshot implementation itself)
 */

#ifndef ipa_options_compat_INCLUDED
#define ipa_options_compat_INCLUDED

#ifdef IPA_CONTEXT_FULL_INIT

#include "ipa_options.h"  /* IPA_Options, g_ipa_options */

/* --- Filenames --- */
#define Feedback_Filename	(g_ipa_options->feedback_Filename)
#define Annotation_Filename	(g_ipa_options->annotation_Filename)

/* --- Feature enable flags --- */
#define IPA_Enable_DFE			(g_ipa_options->enable_DFE)
#define IPA_Enable_DFE_Set		(g_ipa_options->enable_DFE_Set)
#define IPA_Enable_Inline		(g_ipa_options->enable_Inline)
#define IPA_Enable_Picopt		(g_ipa_options->enable_Picopt)
#define IPA_Enable_AutoGnum		(g_ipa_options->enable_AutoGnum)
#define IPA_Enable_BarrierFarg		(g_ipa_options->enable_BarrierFarg)
#define IPA_Enable_Opt_Alias		(g_ipa_options->enable_Opt_Alias)
#define IPA_Enable_Simple_Alias		(g_ipa_options->enable_Simple_Alias)
#define IPA_Enable_Addressing		(g_ipa_options->enable_Addressing)
#define IPA_Enable_Readonly_Ref		(g_ipa_options->enable_Readonly_Ref)
#define IPA_Enable_Cprop		(g_ipa_options->enable_Cprop)
#define IPA_Enable_Cprop2		(g_ipa_options->enable_Cprop2)
#define IPA_Enable_Assert		(g_ipa_options->enable_Assert)
#define IPA_Enable_daVinci		(g_ipa_options->enable_daVinci)
#define IPA_Enable_ipacom		(g_ipa_options->enable_ipacom)
#define IPA_Enable_final_link		(g_ipa_options->enable_final_link)
#define IPA_Enable_Memtrace		(g_ipa_options->enable_Memtrace)
#define IPA_Enable_DST			(g_ipa_options->enable_DST)
#define IPA_Enable_DCE			(g_ipa_options->enable_DCE)
#define IPA_Enable_Exc			(g_ipa_options->enable_Exc)
#define IPA_Enable_Recycle		(g_ipa_options->enable_Recycle)
#define IPA_Enable_DVE			(g_ipa_options->enable_DVE)
#define IPA_Enable_CGI			(g_ipa_options->enable_CGI)
#define IPA_Enable_Copy_Prop		(g_ipa_options->enable_Copy_Prop)
#define IPA_Enable_Padding		(g_ipa_options->enable_Padding)
#define IPA_Common_Pad_Size		(g_ipa_options->common_Pad_Size)
#define IPA_Enable_Split_Common		(g_ipa_options->enable_Split_Common)
#define IPA_Enable_Cloning		(g_ipa_options->enable_Cloning)
#define IPA_Enable_Partial_Inline	(g_ipa_options->enable_Partial_Inline)
#define IPA_Echo_Commands		(g_ipa_options->echo_Commands)
#define IPA_Enable_Lang			(g_ipa_options->enable_Lang)
#define IPA_Enable_Preempt		(g_ipa_options->enable_Preempt)
#define IPA_Enable_Flow_Analysis	(g_ipa_options->enable_Flow_Analysis)
#define IPA_Enable_Array_Sections	(g_ipa_options->enable_Array_Sections)
#define IPA_Enable_Array_Summary	(g_ipa_options->enable_Array_Summary)
#define IPA_Enable_Scalar_Euse		(g_ipa_options->enable_Scalar_Euse)
#define IPA_Enable_Scalar_Kill		(g_ipa_options->enable_Scalar_Kill)
#define IPA_Enable_Common_Const		(g_ipa_options->enable_Common_Const)
#define IPA_Enable_Relocatable_Opt	(g_ipa_options->enable_Relocatable_Opt)
#define IPA_Enable_Feedback		(g_ipa_options->enable_Feedback)
#define IPA_Enable_Alias_Class		(g_ipa_options->enable_Alias_Class)
#define IPA_Debug_AC_Temp_Files		(g_ipa_options->debug_AC_Temp_Files)
#define IPA_Enable_Reshape		(g_ipa_options->enable_Reshape)
#define IPA_Enable_Preopt		(g_ipa_options->enable_Preopt)
#define IPA_Enable_Preopt_Set		(g_ipa_options->enable_Preopt_Set)
#define IPA_Enable_Siloed_Ref		(g_ipa_options->enable_Siloed_Ref)
#define IPA_Enable_Siloed_Ref_Set	(g_ipa_options->enable_Siloed_Ref_Set)

#ifdef KEY
#define IPA_Enable_Icall_Opt			(g_ipa_options->enable_Icall_Opt)
#define IPA_Enable_EH_Region_Removal		(g_ipa_options->enable_EH_Region_Removal)
#define IPA_Enable_Branch_Heuristic		(g_ipa_options->enable_Branch_Heuristic)
#define IPA_Min_Branch_Prob			(g_ipa_options->min_Branch_Prob)
#define IPA_Check_Options			(g_ipa_options->check_Options)
#define IPA_Clone_List_Actions			(g_ipa_options->clone_List_Actions)
#define IPA_Enable_Pure_Call_Opt		(g_ipa_options->enable_Pure_Call_Opt)
#define IPA_Pure_Call_skip_before		(g_ipa_options->pure_Call_skip_before)
#define IPA_Consult_Inliner_For_Icall_Opt	(g_ipa_options->consult_Inliner_For_Icall_Opt)
#define IPA_Icall_Min_Freq			(g_ipa_options->icall_Min_Freq)
#define IPA_Enable_Source_PU_Order		(g_ipa_options->enable_Source_PU_Order)
#define IPA_Enable_Struct_Opt			(g_ipa_options->enable_Struct_Opt)
#define IPA_Enable_Global_As_Local		(g_ipa_options->enable_Global_As_Local)
#define IPA_Update_Struct			(g_ipa_options->update_Struct)
#endif /* KEY */

#define IPA_Icall_Target_Min_Rate	(g_ipa_options->icall_Target_Min_Rate)

/* --- Inlining heuristics --- */
#define IPA_Bloat_Factor		(g_ipa_options->bloat_Factor)
#define IPA_Bloat_Factor_Set		(g_ipa_options->bloat_Factor_Set)
#define IPA_PU_Limit			(g_ipa_options->pU_Limit)
#define IPA_PU_Limit_Set		(g_ipa_options->pU_Limit_Set)
#define IPA_PU_Hard_Limit		(g_ipa_options->pU_Hard_Limit)
#define IPA_PU_Hard_Limit_Set		(g_ipa_options->pU_Hard_Limit_Set)
#define IPA_PU_Minimum_Size		(g_ipa_options->pU_Minimum_Size)
#define IPA_Small_Callee_Limit		(g_ipa_options->small_Callee_Limit)
#define IPA_Max_Depth			(g_ipa_options->max_Depth)
#define IPA_Force_Depth			(g_ipa_options->force_Depth)
#define IPA_Force_Depth_Set		(g_ipa_options->force_Depth_Set)
#define IPA_Min_Freq			(g_ipa_options->min_Freq)
#define IPA_Rela_Freq			(g_ipa_options->rela_Freq)
#define IPA_Min_Hotness			(g_ipa_options->min_Hotness)
#define IPA_Use_Effective_Size		(g_ipa_options->use_Effective_Size)

/* --- Miscellaneous --- */
#define IPA_Enable_Merge_ty		(g_ipa_options->enable_Merge_ty)
#define IPA_Max_Jobs			(g_ipa_options->max_Jobs)
#define IPA_Max_Jobs_Set		(g_ipa_options->max_Jobs_Set)
#define IPA_Gspace			(g_ipa_options->gspace)
#define IPA_user_gnum			(g_ipa_options->user_gnum)
#define IPA_Extgot_Factor		(g_ipa_options->extgot_Factor)
#define IPA_Num_Fortran_Intrinsics	(g_ipa_options->num_Fortran_Intrinsics)
#define IPA_Has_Fortran			(g_ipa_options->has_Fortran)
#define IPA_Map_Limit			(g_ipa_options->map_Limit)
#define IPA_Enable_SP_Partition		(g_ipa_options->enable_SP_Partition)
#define IPA_Enable_GP_Partition		(g_ipa_options->enable_GP_Partition)
#define IPA_Space_Access_Mode		(g_ipa_options->space_Access_Mode)
#define IPA_Group_Names			(g_ipa_options->group_Names)
#define IPA_Spec_Files			(g_ipa_options->spec_Files)
#define IPA_Skip			(g_ipa_options->skip)
#define IPA_Skip_Report			(g_ipa_options->skip_Report)
#define IPA_Enable_Keeplight		(g_ipa_options->enable_Keeplight)
#define IPA_Enable_Cord			(g_ipa_options->enable_Cord)
#define IPA_Enable_Linearization	(g_ipa_options->enable_Linearization)
#define IPA_Use_Intrinsic		(g_ipa_options->use_Intrinsic)
#define IPA_Enable_Inline_Nested_PU	(g_ipa_options->enable_Inline_Nested_PU)
#define IPA_Enable_Inline_Struct	(g_ipa_options->enable_Inline_Struct)
#define IPA_Enable_Inline_Char_Array	(g_ipa_options->enable_Inline_Char_Array)
#define IPA_Enable_Inline_Optional_Arg	(g_ipa_options->enable_Inline_Optional_Arg)
#define IPA_Enable_Inline_Struct_Array_Actual	(g_ipa_options->enable_Inline_Struct_Array_Actual)
#define IPA_Enable_Inline_Var_Dim_Array	(g_ipa_options->enable_Inline_Var_Dim_Array)
#define IPA_Enable_Reorder		(g_ipa_options->enable_Reorder)
#define IPA_Enable_AOT			(g_ipa_options->enable_AOT)

#ifdef KEY
#define IPA_Enable_PU_Reorder		(g_ipa_options->enable_PU_Reorder)
#define IPA_Enable_PU_Reorder_Set	(g_ipa_options->enable_PU_Reorder_Set)
#define IPA_Enable_Ctype		(g_ipa_options->enable_Ctype)
#define INLINE_Check_Compatibility	(g_ipa_options->inline_Check_Compatibility)
#endif /* KEY */

#define IPA_Max_Node_Clones		(g_ipa_options->max_Node_Clones)
#define IPA_Max_Node_Clones_Set		(g_ipa_options->max_Node_Clones_Set)
#define IPA_Max_Clone_Bloat		(g_ipa_options->max_Clone_Bloat)
#define IPA_Max_Output_File_Size	(g_ipa_options->max_Output_File_Size)
#define IPA_Output_File_Size		(g_ipa_options->output_File_Size)
#define IPA_Max_Density			(g_ipa_options->max_Density)
#define IPA_Enable_Old_Type_Merge	(g_ipa_options->enable_Old_Type_Merge)

/* --- Devirtualization --- */
#define IPA_Enable_Devirtualization		(g_ipa_options->enable_Devirtualization)
#define IPA_Enable_Fast_Static_Analysis_VF	(g_ipa_options->enable_Fast_Static_Analysis_VF)
#define IPA_Enable_Original_VF			(g_ipa_options->enable_Original_VF)
#define IPA_Enable_New_VF			(g_ipa_options->enable_New_VF)
#define IPA_Inline_Original_VF			(g_ipa_options->inline_Original_VF)
#define IPA_Inline_New_VF			(g_ipa_options->inline_New_VF)
#define IPA_Devirtualization_Input_File		(g_ipa_options->devirtualization_Input_File)
#define IPA_During_Original_VF			(g_ipa_options->during_Original_VF)
#define IPA_During_New_VF			(g_ipa_options->during_New_VF)

/* --- Whole program / scale --- */
#define IPA_Enable_Whole_Program_Mode		(g_ipa_options->enable_Whole_Program_Mode)
#define IPA_Enable_Whole_Program_Mode_Set	(g_ipa_options->enable_Whole_Program_Mode_Set)
#define IPA_Enable_Scale			(g_ipa_options->enable_Scale)

/* --- INLINE group options --- */
#define INLINE_Enable			(g_ipa_options->inline_Enable)
#define INLINE_All			(g_ipa_options->inline_All)
#define INLINE_Optimize_Alloca		(g_ipa_options->inline_Optimize_Alloca)
#define INLINE_Enable_Copy_Prop		(g_ipa_options->inline_Enable_Copy_Prop)
#define INLINE_Enable_Subst_Copy_Prop	(g_ipa_options->inline_Enable_Subst_Copy_Prop)
#define INLINE_F90			(g_ipa_options->inline_F90)
#define INLINE_None			(g_ipa_options->inline_None)
#define INLINE_Exceptions		(g_ipa_options->inline_Exceptions)
#define INLINE_Keep_PU_Order		(g_ipa_options->inline_Keep_PU_Order)
#define INLINE_List_Actions		(g_ipa_options->inline_List_Actions)
#define INLINE_Max_Pu_Size		(g_ipa_options->inline_Max_Pu_Size)
#define INLINE_Preemptible		(g_ipa_options->inline_Preemptible)
#define INLINE_Static			(g_ipa_options->inline_Static)
#define INLINE_Static_Set		(g_ipa_options->inline_Static_Set)
#define INLINE_Aggressive		(g_ipa_options->inline_Aggressive)
#define INLINE_First_Inline_Calls_In_Loops	(g_ipa_options->inline_First_Inline_Calls_In_Loops)
#define INLINE_Enable_DFE		(g_ipa_options->inline_Enable_DFE)
#define INLINE_Enable_Split_Common	(g_ipa_options->inline_Enable_Split_Common)
#define INLINE_Enable_Auto_Inlining	(g_ipa_options->inline_Enable_Auto_Inlining)
#define INLINE_Enable_Restrict_Pointers	(g_ipa_options->inline_Enable_Restrict_Pointers)

#ifdef KEY
#define INLINE_Recursive		(g_ipa_options->inline_Recursive)
#define INLINE_Param_Mismatch		(g_ipa_options->inline_Param_Mismatch)
#define INLINE_Type_Mismatch		(g_ipa_options->inline_Type_Mismatch)
#define INLINE_Ignore_Bloat		(g_ipa_options->inline_Ignore_Bloat)
#define INLINE_Callee_Limit		(g_ipa_options->inline_Callee_Limit)
#endif /* KEY */

#define INLINE_List_Names		(g_ipa_options->inline_List_Names)
#define INLINE_Spec_Files		(g_ipa_options->inline_Spec_Files)
#define INLINE_Skip_After		(g_ipa_options->inline_Skip_After)
#define INLINE_Skip_Before		(g_ipa_options->inline_Skip_Before)
#define INLINE_Array_Bounds		(g_ipa_options->inline_Array_Bounds)
#define INLINE_Use_Malloc_Mempool	(g_ipa_options->inline_Use_Malloc_Mempool)
#define INLINE_Free_Malloc_Mempool	(g_ipa_options->inline_Free_Malloc_Mempool)
#define INLINE_Inlined_Pu_Call_Graph	(g_ipa_options->inline_Inlined_Pu_Call_Graph)
#define INLINE_Inlined_Pu_Call_Graph2	(g_ipa_options->inline_Inlined_Pu_Call_Graph2)
#define INLINE_Get_Time_Info		(g_ipa_options->inline_Get_Time_Info)
#define INLINE_Script_Name		(g_ipa_options->inline_Script_Name)
#define INLINE_Enable_Script		(g_ipa_options->inline_Enable_Script)
#define INLINE_Enable_Devirtualize	(g_ipa_options->inline_Enable_Devirtualize)

#endif /* IPA_CONTEXT_FULL_INIT */

#endif /* ipa_options_compat_INCLUDED */
