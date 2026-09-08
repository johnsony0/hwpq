verdiSetActWin -dock widgetDock_<Watch>
simSetSimulator "-vcssv" -exec "simv" -args
debImport "-dbdir" "simv.daidir/"
verdiWindowResize -win $_Verdi_1 "0" "0" "1560" "867"
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcTBInvokeSim
verdiSetActWin -win $_InteractiveConsole_2
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
srcSetScope "hybrid_tree_tb" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcSetScope \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcSetScope \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcTBRunSim
verdiSetActWin -win $_InteractiveConsole_2
srcTBRunSim
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcTBRunSim
verdiSetActWin -win $_InteractiveConsole_2
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcSetScope \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.comparator_inst" \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_comb" -win \
           $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_comb" \
           -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_comb" -win \
           $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_seq" -win \
           $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_seq" \
           -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.bram_seq" -win \
           $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_comb" -win \
           $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_comb" \
           -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_comb" -win \
           $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_seq" -win \
           $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_seq" -delim \
           "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.fsm_seq" -win \
           $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.queue_size_comb" \
           -win $_nTrace1
srcSetScope \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.queue_size_comb" \
           -delim "." -win $_nTrace1
srcHBSelect \
           "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst.queue_size_comb" \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcAction -pos 99 1 4 -win $_nTrace1 -name "rams_tdp_wf_wf" -ctrlKey off
srcDeselectAll -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcAction -pos 99 1 6 -win $_nTrace1 -name "rams_tdp_wf_wf" -ctrlKey off
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
wvCreateWindow
srcHBAddObjectToWave -clipboard
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvSelectSignal -win $_nWave3 {( "uut" 4 )} 
wvSelectGroup -win $_nWave3 {G2}
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBAddObjectToWave -clipboard
wvDrop -win $_nWave3
wvSelectSignal -win $_nWave3 {( "uut" 8 )} 
wvSelectGroup -win $_nWave3 {uut/gen_bram_tree[0]}
verdiSetActWin -win $_nWave3
wvSelectSignal -win $_nWave3 {( "uut" 8 )} 
wvSetPosition -win $_nWave3 {("uut" 8)}
wvExpandBus -win $_nWave3
wvSetPosition -win $_nWave3 {("uut/gen_bram_tree[0]" 0)}
wvScrollUp -win $_nWave3 14
wvSelectSignal -win $_nWave3 {( "uut" 8 )} 
wvSetPosition -win $_nWave3 {("uut" 8)}
wvCollapseBus -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSetPosition -win $_nWave3 {("uut/gen_bram_tree[0]" 0)}
wvSelectGroup -win $_nWave3 {uut/gen_bram_tree[0]}
wvSelectGroup -win $_nWave3 {uut/gen_bram_tree[0]}
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSelectGroup -win $_nWave3 {G2}
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcHBAddObjectToWave -clipboard
wvDrop -win $_nWave3
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 2 )} 
verdiSetActWin -win $_nWave3
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 8)}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 7)}
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1" -line 33 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -win $_nTrace1
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
verdiSetActWin -win $_nWave3
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 8)}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 7)}
wvSelectGroup -win $_nWave3 {uut/bram_tree_inst}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 6)}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 5)}
wvSelectGroup -win $_nWave3 {uut/bram_tree_inst}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 4)}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 3)}
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 2)}
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[0\].bram_tree_inst" -win $_nTrace1
wvSelectSignal -win $_nWave3 {( "uut/bram_tree_inst" 1 2 )} 
verdiSetActWin -win $_nWave3
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 1)}
wvSetPosition -win $_nWave3 {("uut/bram_tree_inst" 2)}
wvSetPosition -win $_nWave3 {("G2" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 2)}
wvSetPosition -win $_nWave3 {("G2" 2)}
wvSelectGroup -win $_nWave3 {uut/bram_tree_inst}
wvScrollDown -win $_nWave3 1
wvSelectSignal -win $_nWave3 {( "G2" 1 2 )} 
wvSelectGroup -win $_nWave3 {G2} {G3}
wvSelectSignal -win $_nWave3 {( "G2" 1 2 )} 
wvSetPosition -win $_nWave3 {("G2" 1)}
wvSetPosition -win $_nWave3 {("G2" 2)}
wvSetPosition -win $_nWave3 {("G3" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G3" 2)}
wvSetPosition -win $_nWave3 {("G3" 2)}
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
wvSetPosition -win $_nWave3 {("G3" 0)}
wvSetPosition -win $_nWave3 {("G2" 0)}
verdiSetActWin -win $_nWave3
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("G2" 1)}
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1" -line 33 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvScrollDown -win $_nWave3 3
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[2\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[2\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[2\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[2\].bram_tree_inst" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[2\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[2\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[2\].bram_tree_inst" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvScrollDown -win $_nWave3 1
wvSetPosition -win $_nWave3 {("G3" 1)}
wvSetPosition -win $_nWave3 {("G3" 2)}
wvSetPosition -win $_nWave3 {("G4" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G4" 1)}
wvSetPosition -win $_nWave3 {("G4" 1)}
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1" -line 33 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[3\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[3\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[3\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[3\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[3\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[3\].bram_tree_inst" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1" -line 33 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvScrollDown -win $_nWave3 2
wvSelectSignal -win $_nWave3 {( "G4" 3 4 )} 
wvSetPosition -win $_nWave3 {("G4" 3)}
wvSetPosition -win $_nWave3 {("G5" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G5" 2)}
wvSetPosition -win $_nWave3 {("G5" 2)}
wvScrollUp -win $_nWave3 9
wvScrollUp -win $_nWave3 2
wvSelectGroup -win $_nWave3 {uut/bram_tree_inst}
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("G6" 0)}
wvSetPosition -win $_nWave3 {("G5" 2)}
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0_data" -line 29 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvScrollDown -win $_nWave3 0
wvSetPosition -win $_nWave3 {("G5" 0)}
wvSetPosition -win $_nWave3 {("G4" 0)}
wvSetPosition -win $_nWave3 {("G3" 2)}
wvSetPosition -win $_nWave3 {("G2" 2)}
wvSetPosition -win $_nWave3 {("G2" 0)}
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSetPosition -win $_nWave3 {("uut" 7)}
wvSetPosition -win $_nWave3 {("uut" 6)}
wvSetPosition -win $_nWave3 {("uut" 5)}
wvSetPosition -win $_nWave3 {("uut" 6)}
wvSetPosition -win $_nWave3 {("uut" 7)}
wvSetPosition -win $_nWave3 {("uut" 8)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSetPosition -win $_nWave3 {("uut" 9)}
srcDeselectAll -win $_nTrace1
srcSelect -signal "next_level_0_data" -line 30 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcDeselectAll -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 33 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1_data" -line 45 -pos 1 -win $_nTrace1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcTBRunSim
verdiSetActWin -win $_nWave3
wvSetCursor -win $_nWave3 15.209125 -snap {("uut" 5)}
wvSetCursor -win $_nWave3 5.703422 -snap {("uut" 2)}
wvZoomIn -win $_nWave3
wvSetCursor -win $_nWave3 10.456274 -snap {("uut" 1)}
wvSelectSignal -win $_nWave3 {( "uut" 5 )} 
wvSelectSignal -win $_nWave3 {( "uut" 5 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSetCursor -win $_nWave3 67.490494 -snap {("uut" 1)}
wvSelectSignal -win $_nWave3 {( "G2" 1 )} 
wvSelectSignal -win $_nWave3 {( "G2" 1 )} 
wvSetRadix -win $_nWave3 -format UDec
wvScrollDown -win $_nWave3 12
wvScrollDown -win $_nWave3 3
wvScrollUp -win $_nWave3 3
wvSelectSignal -win $_nWave3 {( "G3" 1 2 )} 
wvCut -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 11)}
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\]" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[1\]" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\]" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -delim "." \
           -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut.gen_bram_tree\[1\].bram_tree_inst" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_0" -line 32 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
verdiSetActWin -win $_nWave3
wvScrollUp -win $_nWave3 3
wvScrollDown -win $_nWave3 3
wvSetPosition -win $_nWave3 {("G2" 1)}
wvSetPosition -win $_nWave3 {("G3" 0)}
wvSetPosition -win $_nWave3 {("G4" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G4" 1)}
wvSetPosition -win $_nWave3 {("G4" 0)}
wvSetPosition -win $_nWave3 {("G3" 0)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("G3" 0)}
wvSetPosition -win $_nWave3 {("G3" 1)}
srcDeselectAll -win $_nTrace1
srcSelect -signal "level_1" -line 33 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
srcTBSimReset
srcTBRunSim
verdiSetActWin -win $_nWave3
wvSetCursor -win $_nWave3 45.627376 -snap {("uut" 1)}
wvSetCursor -win $_nWave3 110.266160 -snap {("uut" 0)}
wvSetCursor -win $_nWave3 81.749049 -snap {("G2" 1)}
wvSetCursor -win $_nWave3 140.684411 -snap {("uut" 1)}
wvSelectSignal -win $_nWave3 {( "G2" 2 )} 
wvSelectSignal -win $_nWave3 {( "G2" 2 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSetCursor -win $_nWave3 881.463878 -snap {("uut" 1)}
wvSelectSignal -win $_nWave3 {( "uut" 9 )} 
wvSelectSignal -win $_nWave3 {( "uut" 9 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSelectSignal -win $_nWave3 {( "uut" 10 )} 
wvSelectSignal -win $_nWave3 {( "uut" 10 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSelectSignal -win $_nWave3 {( "uut" 11 )} 
wvSelectSignal -win $_nWave3 {( "uut" 11 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSelectSignal -win $_nWave3 {( "uut" 8 )} 
wvSelectSignal -win $_nWave3 {( "uut" 8 )} 
wvSetRadix -win $_nWave3 -format UDec
wvSetCursor -win $_nWave3 3797.083512 -snap {("uut" 1)}
wvSetCursor -win $_nWave3 1405.069704 -snap {("uut" 1)}
wvSetCursor -win $_nWave3 131.178707 -snap {("uut" 1)}
wvSetCursor -win $_nWave3 79.847909 -snap {("G2" 1)}
wvSelectSignal -win $_nWave3 {( "G3" 1 )} 
wvSelectSignal -win $_nWave3 {( "G3" 2 )} 
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
verdiSetActWin -dock widgetDock_<Inst._Tree>
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
srcSetScope "hybrid_tree_tb" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb" -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcSetScope "hybrid_tree_tb.uut" -delim "." -win $_nTrace1
srcHBSelect "hybrid_tree_tb.uut" -win $_nTrace1
srcDeselectAll -win $_nTrace1
srcSelect -signal "bram_replace" -line 110 -pos 1 -win $_nTrace1
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
srcAddSelectedToWave -clipboard -win $_nTrace1
wvDrop -win $_nWave3
wvSetPosition -win $_nWave3 {("G3" 0)}
wvSetPosition -win $_nWave3 {("uut" 11)}
wvSetPosition -win $_nWave3 {("uut" 9)}
wvSetPosition -win $_nWave3 {("uut" 7)}
wvSetPosition -win $_nWave3 {("uut" 6)}
verdiSetActWin -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 9)}
wvSetPosition -win $_nWave3 {("uut" 11)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 11)}
wvSetPosition -win $_nWave3 {("uut" 12)}
wvSetPosition -win $_nWave3 {("uut" 10)}
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSetPosition -win $_nWave3 {("uut" 7)}
wvSetPosition -win $_nWave3 {("uut" 8)}
wvMoveSelected -win $_nWave3
wvSetPosition -win $_nWave3 {("uut" 8)}
wvSetPosition -win $_nWave3 {("uut" 9)}
wvSetCursor -win $_nWave3 21.863118 -snap {("uut" 9)}
wvSetCursor -win $_nWave3 33.269962 -snap {("uut" 9)}
wvSetCursor -win $_nWave3 273.764259 -snap {("uut" 9)}
wvSetCursor -win $_nWave3 282.319392 -snap {("uut" 9)}
verdiWindowResize -win $_Verdi_1 "162" "221" "1560" "867"
debExit
