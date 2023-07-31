    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.cartParam
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 33;
            section.data(33)  = dumData; %prealloc

                    ;% rtP.DiscreteDerivative_ICPrevScaledInput
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant2_Value
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 7;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3108;

                    ;% rtP.Integrator2_IC
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 9310;

                    ;% rtP.Integrator1_IC
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 9311;

                    ;% rtP.Integrator3_IC
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 9312;

                    ;% rtP.Gain_Gain
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 9313;

                    ;% rtP.FromWorkspace3_Time0
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 9314;

                    ;% rtP.FromWorkspace3_Data0
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 12415;

                    ;% rtP.Integrator_IC
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 15516;

                    ;% rtP.Gain_Gain_jqosi22ou2
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 15517;

                    ;% rtP.Integrator_IC_isl5emljg2
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 15518;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(14).logicalSrcIdx = 14;
                    section.data(14).dtTransOffset = 15519;

                    ;% rtP.FromWorkspace4_Time0
                    section.data(15).logicalSrcIdx = 15;
                    section.data(15).dtTransOffset = 15520;

                    ;% rtP.FromWorkspace4_Data0
                    section.data(16).logicalSrcIdx = 16;
                    section.data(16).dtTransOffset = 18621;

                    ;% rtP.FromWorkspace5_Time0
                    section.data(17).logicalSrcIdx = 17;
                    section.data(17).dtTransOffset = 27924;

                    ;% rtP.FromWorkspace5_Data0
                    section.data(18).logicalSrcIdx = 18;
                    section.data(18).dtTransOffset = 27946;

                    ;% rtP.Gain_Gain_ixhiatnuua
                    section.data(19).logicalSrcIdx = 19;
                    section.data(19).dtTransOffset = 27968;

                    ;% rtP.Integrator_IC_pfyyjjaerm
                    section.data(20).logicalSrcIdx = 20;
                    section.data(20).dtTransOffset = 27969;

                    ;% rtP.Saturation_UpperSat
                    section.data(21).logicalSrcIdx = 21;
                    section.data(21).dtTransOffset = 27970;

                    ;% rtP.Saturation_LowerSat
                    section.data(22).logicalSrcIdx = 22;
                    section.data(22).dtTransOffset = 27971;

                    ;% rtP.Gain_Gain_kg51a1y4n4
                    section.data(23).logicalSrcIdx = 23;
                    section.data(23).dtTransOffset = 27972;

                    ;% rtP.Switch_Threshold
                    section.data(24).logicalSrcIdx = 24;
                    section.data(24).dtTransOffset = 27973;

                    ;% rtP.Gain_Gain_gbc03uxe30
                    section.data(25).logicalSrcIdx = 25;
                    section.data(25).dtTransOffset = 27974;

                    ;% rtP.FromWorkspace2_Time0
                    section.data(26).logicalSrcIdx = 26;
                    section.data(26).dtTransOffset = 27975;

                    ;% rtP.FromWorkspace2_Data0
                    section.data(27).logicalSrcIdx = 27;
                    section.data(27).dtTransOffset = 31076;

                    ;% rtP.TSamp_WtEt
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 34177;

                    ;% rtP.Gain_Gain_fnyptoffgf
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 34178;

                    ;% rtP.Constant1_Value
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 34179;

                    ;% rtP.Constant_Value
                    section.data(31).logicalSrcIdx = 31;
                    section.data(31).dtTransOffset = 34182;

                    ;% rtP.Constant_Value_m2yjzgvvms
                    section.data(32).logicalSrcIdx = 32;
                    section.data(32).dtTransOffset = 34185;

                    ;% rtP.Constant_Value_k5zgsdk1tk
                    section.data(33).logicalSrcIdx = 33;
                    section.data(33).dtTransOffset = 34186;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.cusv2amtca
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 73;
            section.data(73)  = dumData; %prealloc

                    ;% rtB.g1wu31mqe4
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gn5waaat3n
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 2;

                    ;% rtB.j3ss00kqoe
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 3;

                    ;% rtB.g0s1jshae4
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 4;

                    ;% rtB.ej15uvzzrp
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 5;

                    ;% rtB.g2h4dhsdez
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 6;

                    ;% rtB.byypcdwj4t
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 9;

                    ;% rtB.oxggdt53bd
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 10;

                    ;% rtB.a50c4odnnd
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 11;

                    ;% rtB.bxaujqvrbz
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 12;

                    ;% rtB.be5mxu02ho
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 16;

                    ;% rtB.h0x3fs1esa
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 20;

                    ;% rtB.frifao4c1u
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 24;

                    ;% rtB.nwxytavutd
                    section.data(14).logicalSrcIdx = 14;
                    section.data(14).dtTransOffset = 28;

                    ;% rtB.fstvfaddps
                    section.data(15).logicalSrcIdx = 15;
                    section.data(15).dtTransOffset = 32;

                    ;% rtB.du4pvnugdj
                    section.data(16).logicalSrcIdx = 16;
                    section.data(16).dtTransOffset = 33;

                    ;% rtB.nmjwizdspm
                    section.data(17).logicalSrcIdx = 17;
                    section.data(17).dtTransOffset = 37;

                    ;% rtB.f3me2yahaw
                    section.data(18).logicalSrcIdx = 18;
                    section.data(18).dtTransOffset = 41;

                    ;% rtB.n3i0rcd3y3
                    section.data(19).logicalSrcIdx = 19;
                    section.data(19).dtTransOffset = 47;

                    ;% rtB.pybi00dpti
                    section.data(20).logicalSrcIdx = 20;
                    section.data(20).dtTransOffset = 50;

                    ;% rtB.k4qxluudiw
                    section.data(21).logicalSrcIdx = 21;
                    section.data(21).dtTransOffset = 54;

                    ;% rtB.j1wjz4glfv
                    section.data(22).logicalSrcIdx = 22;
                    section.data(22).dtTransOffset = 58;

                    ;% rtB.h0tqkotieo
                    section.data(23).logicalSrcIdx = 23;
                    section.data(23).dtTransOffset = 62;

                    ;% rtB.c3nacuiddy
                    section.data(24).logicalSrcIdx = 24;
                    section.data(24).dtTransOffset = 66;

                    ;% rtB.ir3dfvqqai
                    section.data(25).logicalSrcIdx = 25;
                    section.data(25).dtTransOffset = 70;

                    ;% rtB.otiyamgc4m
                    section.data(26).logicalSrcIdx = 26;
                    section.data(26).dtTransOffset = 74;

                    ;% rtB.gk45ehdeau
                    section.data(27).logicalSrcIdx = 27;
                    section.data(27).dtTransOffset = 75;

                    ;% rtB.bocynmvqvn
                    section.data(28).logicalSrcIdx = 28;
                    section.data(28).dtTransOffset = 76;

                    ;% rtB.ggvodvqytu
                    section.data(29).logicalSrcIdx = 29;
                    section.data(29).dtTransOffset = 77;

                    ;% rtB.o0g21chvl4
                    section.data(30).logicalSrcIdx = 30;
                    section.data(30).dtTransOffset = 78;

                    ;% rtB.pvn4sjrhtj
                    section.data(31).logicalSrcIdx = 31;
                    section.data(31).dtTransOffset = 82;

                    ;% rtB.bwhuqsvvko
                    section.data(32).logicalSrcIdx = 32;
                    section.data(32).dtTransOffset = 86;

                    ;% rtB.fslwmfbg4z
                    section.data(33).logicalSrcIdx = 33;
                    section.data(33).dtTransOffset = 112;

                    ;% rtB.o5sctoydmq
                    section.data(34).logicalSrcIdx = 34;
                    section.data(34).dtTransOffset = 130;

                    ;% rtB.i4wqff4ppm
                    section.data(35).logicalSrcIdx = 35;
                    section.data(35).dtTransOffset = 131;

                    ;% rtB.ar0mgehmqp
                    section.data(36).logicalSrcIdx = 36;
                    section.data(36).dtTransOffset = 133;

                    ;% rtB.aldmgrwo2q
                    section.data(37).logicalSrcIdx = 37;
                    section.data(37).dtTransOffset = 134;

                    ;% rtB.bldctwoduh
                    section.data(38).logicalSrcIdx = 38;
                    section.data(38).dtTransOffset = 135;

                    ;% rtB.co1eoce0xn
                    section.data(39).logicalSrcIdx = 39;
                    section.data(39).dtTransOffset = 136;

                    ;% rtB.essvneazxf
                    section.data(40).logicalSrcIdx = 40;
                    section.data(40).dtTransOffset = 137;

                    ;% rtB.b2pkbgkxau
                    section.data(41).logicalSrcIdx = 41;
                    section.data(41).dtTransOffset = 138;

                    ;% rtB.m52iku3bf5
                    section.data(42).logicalSrcIdx = 42;
                    section.data(42).dtTransOffset = 139;

                    ;% rtB.jgm1aa3nzs
                    section.data(43).logicalSrcIdx = 43;
                    section.data(43).dtTransOffset = 140;

                    ;% rtB.h3wch0tcyi
                    section.data(44).logicalSrcIdx = 44;
                    section.data(44).dtTransOffset = 146;

                    ;% rtB.nbf5lo0qyp
                    section.data(45).logicalSrcIdx = 45;
                    section.data(45).dtTransOffset = 149;

                    ;% rtB.d13ksp0l1g
                    section.data(46).logicalSrcIdx = 46;
                    section.data(46).dtTransOffset = 150;

                    ;% rtB.cepepxzyrd
                    section.data(47).logicalSrcIdx = 47;
                    section.data(47).dtTransOffset = 151;

                    ;% rtB.jwbu2gwvao
                    section.data(48).logicalSrcIdx = 48;
                    section.data(48).dtTransOffset = 152;

                    ;% rtB.nd3aadcbcd
                    section.data(49).logicalSrcIdx = 49;
                    section.data(49).dtTransOffset = 153;

                    ;% rtB.lgj2jc3pzo
                    section.data(50).logicalSrcIdx = 50;
                    section.data(50).dtTransOffset = 154;

                    ;% rtB.cegxra1hpr
                    section.data(51).logicalSrcIdx = 51;
                    section.data(51).dtTransOffset = 155;

                    ;% rtB.h2wzsozxts
                    section.data(52).logicalSrcIdx = 52;
                    section.data(52).dtTransOffset = 156;

                    ;% rtB.f3wc3trxlm
                    section.data(53).logicalSrcIdx = 53;
                    section.data(53).dtTransOffset = 160;

                    ;% rtB.ecditktabk
                    section.data(54).logicalSrcIdx = 54;
                    section.data(54).dtTransOffset = 163;

                    ;% rtB.ctfsa4jidw
                    section.data(55).logicalSrcIdx = 55;
                    section.data(55).dtTransOffset = 165;

                    ;% rtB.drqxmyuirf
                    section.data(56).logicalSrcIdx = 56;
                    section.data(56).dtTransOffset = 169;

                    ;% rtB.f3dt3kwdyy
                    section.data(57).logicalSrcIdx = 57;
                    section.data(57).dtTransOffset = 173;

                    ;% rtB.e1eawrywww
                    section.data(58).logicalSrcIdx = 58;
                    section.data(58).dtTransOffset = 177;

                    ;% rtB.po2az4iybu
                    section.data(59).logicalSrcIdx = 59;
                    section.data(59).dtTransOffset = 180;

                    ;% rtB.bylc4dlpa2
                    section.data(60).logicalSrcIdx = 60;
                    section.data(60).dtTransOffset = 182;

                    ;% rtB.aj3oqjvikj
                    section.data(61).logicalSrcIdx = 61;
                    section.data(61).dtTransOffset = 186;

                    ;% rtB.jvci2lzjbx
                    section.data(62).logicalSrcIdx = 62;
                    section.data(62).dtTransOffset = 190;

                    ;% rtB.dv0zdzo0z1
                    section.data(63).logicalSrcIdx = 64;
                    section.data(63).dtTransOffset = 192;

                    ;% rtB.ilhqhgwcym
                    section.data(64).logicalSrcIdx = 65;
                    section.data(64).dtTransOffset = 193;

                    ;% rtB.nrzyl42xm5
                    section.data(65).logicalSrcIdx = 66;
                    section.data(65).dtTransOffset = 194;

                    ;% rtB.mz0xenb4ph
                    section.data(66).logicalSrcIdx = 67;
                    section.data(66).dtTransOffset = 195;

                    ;% rtB.jo2qwqwray
                    section.data(67).logicalSrcIdx = 68;
                    section.data(67).dtTransOffset = 198;

                    ;% rtB.fzezqxxuee
                    section.data(68).logicalSrcIdx = 69;
                    section.data(68).dtTransOffset = 204;

                    ;% rtB.eperym0ycj
                    section.data(69).logicalSrcIdx = 70;
                    section.data(69).dtTransOffset = 207;

                    ;% rtB.frj3sv0nur
                    section.data(70).logicalSrcIdx = 71;
                    section.data(70).dtTransOffset = 213;

                    ;% rtB.hthfcq14pv
                    section.data(71).logicalSrcIdx = 72;
                    section.data(71).dtTransOffset = 219;

                    ;% rtB.abmtpbtqen
                    section.data(72).logicalSrcIdx = 73;
                    section.data(72).dtTransOffset = 225;

                    ;% rtB.ajucvwlofn
                    section.data(73).logicalSrcIdx = 74;
                    section.data(73).dtTransOffset = 241;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.aurrx3wzjl
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.okj1p03aot
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 47;
            section.data(47)  = dumData; %prealloc

                    ;% rtDW.g32rtzaewg
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gq5kmr5vn1
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jkey2toi31
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bf53hkrvir
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ki1145bcrm
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.h0arbssjyh
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.omatls04hq
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.e5hdpgr2ka
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.inr1htksx0
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.h4l15hdscn
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.f3dg4s3p0a
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.hrhmbgcbnf
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.kliragzquq
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.aukxopp0nd
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.bx3fwsg2i1
                    section.data(15).logicalSrcIdx = 16;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.l41spvcbdc
                    section.data(16).logicalSrcIdx = 17;
                    section.data(16).dtTransOffset = 20;

                    ;% rtDW.fnnnyc1uga
                    section.data(17).logicalSrcIdx = 18;
                    section.data(17).dtTransOffset = 21;

                    ;% rtDW.dwnerbwwhs
                    section.data(18).logicalSrcIdx = 19;
                    section.data(18).dtTransOffset = 22;

                    ;% rtDW.cond3vx0se
                    section.data(19).logicalSrcIdx = 20;
                    section.data(19).dtTransOffset = 23;

                    ;% rtDW.lpmlshwp0j
                    section.data(20).logicalSrcIdx = 21;
                    section.data(20).dtTransOffset = 24;

                    ;% rtDW.mzjt1324lw
                    section.data(21).logicalSrcIdx = 22;
                    section.data(21).dtTransOffset = 25;

                    ;% rtDW.ntb1y3fl2p
                    section.data(22).logicalSrcIdx = 23;
                    section.data(22).dtTransOffset = 26;

                    ;% rtDW.imkh41nhlt
                    section.data(23).logicalSrcIdx = 24;
                    section.data(23).dtTransOffset = 27;

                    ;% rtDW.ngjgnzl4gl
                    section.data(24).logicalSrcIdx = 25;
                    section.data(24).dtTransOffset = 28;

                    ;% rtDW.jrxplcb3hu
                    section.data(25).logicalSrcIdx = 26;
                    section.data(25).dtTransOffset = 29;

                    ;% rtDW.ktng2gyshq
                    section.data(26).logicalSrcIdx = 27;
                    section.data(26).dtTransOffset = 30;

                    ;% rtDW.am3m0kfq1x
                    section.data(27).logicalSrcIdx = 28;
                    section.data(27).dtTransOffset = 31;

                    ;% rtDW.p3bilm21pq
                    section.data(28).logicalSrcIdx = 29;
                    section.data(28).dtTransOffset = 32;

                    ;% rtDW.kck0lmeenj
                    section.data(29).logicalSrcIdx = 30;
                    section.data(29).dtTransOffset = 33;

                    ;% rtDW.biccrvyj3f
                    section.data(30).logicalSrcIdx = 31;
                    section.data(30).dtTransOffset = 34;

                    ;% rtDW.mlgn03udwf
                    section.data(31).logicalSrcIdx = 32;
                    section.data(31).dtTransOffset = 35;

                    ;% rtDW.m5xagcm5xa
                    section.data(32).logicalSrcIdx = 33;
                    section.data(32).dtTransOffset = 36;

                    ;% rtDW.hdgzj3hwb1
                    section.data(33).logicalSrcIdx = 34;
                    section.data(33).dtTransOffset = 37;

                    ;% rtDW.ddcwn3ttzc
                    section.data(34).logicalSrcIdx = 35;
                    section.data(34).dtTransOffset = 38;

                    ;% rtDW.dljj5a1cxt
                    section.data(35).logicalSrcIdx = 36;
                    section.data(35).dtTransOffset = 39;

                    ;% rtDW.lsxh51j3mv
                    section.data(36).logicalSrcIdx = 37;
                    section.data(36).dtTransOffset = 40;

                    ;% rtDW.bmvq5132uc
                    section.data(37).logicalSrcIdx = 38;
                    section.data(37).dtTransOffset = 42;

                    ;% rtDW.odvklzp2rd
                    section.data(38).logicalSrcIdx = 39;
                    section.data(38).dtTransOffset = 44;

                    ;% rtDW.fwcedxrxfk
                    section.data(39).logicalSrcIdx = 40;
                    section.data(39).dtTransOffset = 45;

                    ;% rtDW.f3ueebc3dc
                    section.data(40).logicalSrcIdx = 41;
                    section.data(40).dtTransOffset = 46;

                    ;% rtDW.gxo2umq0us
                    section.data(41).logicalSrcIdx = 42;
                    section.data(41).dtTransOffset = 47;

                    ;% rtDW.om5ijxdmex
                    section.data(42).logicalSrcIdx = 43;
                    section.data(42).dtTransOffset = 49;

                    ;% rtDW.p03lurvs2x
                    section.data(43).logicalSrcIdx = 44;
                    section.data(43).dtTransOffset = 51;

                    ;% rtDW.ihlssyb2ha
                    section.data(44).logicalSrcIdx = 45;
                    section.data(44).dtTransOffset = 52;

                    ;% rtDW.d3ks3dcnzm
                    section.data(45).logicalSrcIdx = 46;
                    section.data(45).dtTransOffset = 53;

                    ;% rtDW.as5rdedmxo
                    section.data(46).logicalSrcIdx = 47;
                    section.data(46).dtTransOffset = 54;

                    ;% rtDW.fa5qdx3osn
                    section.data(47).logicalSrcIdx = 48;
                    section.data(47).dtTransOffset = 55;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 47;
            section.data(47)  = dumData; %prealloc

                    ;% rtDW.iyonscealb.TimePtr
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gcaetr4bcc.AQHandles
                    section.data(2).logicalSrcIdx = 50;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ajcidjpwry.AQHandles
                    section.data(3).logicalSrcIdx = 51;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.hfgna5tkoq.TimePtr
                    section.data(4).logicalSrcIdx = 52;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dc0irckuhj.LoggedData
                    section.data(5).logicalSrcIdx = 53;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.lc4ovzpgpe.TimePtr
                    section.data(6).logicalSrcIdx = 54;
                    section.data(6).dtTransOffset = 6;

                    ;% rtDW.begvxujstw.TimePtr
                    section.data(7).logicalSrcIdx = 55;
                    section.data(7).dtTransOffset = 7;

                    ;% rtDW.lb3wyb2dez
                    section.data(8).logicalSrcIdx = 56;
                    section.data(8).dtTransOffset = 8;

                    ;% rtDW.g3ij452qky
                    section.data(9).logicalSrcIdx = 57;
                    section.data(9).dtTransOffset = 9;

                    ;% rtDW.ladhvtfsgz
                    section.data(10).logicalSrcIdx = 58;
                    section.data(10).dtTransOffset = 10;

                    ;% rtDW.a1eiefzojn
                    section.data(11).logicalSrcIdx = 59;
                    section.data(11).dtTransOffset = 11;

                    ;% rtDW.byilrm3pqt
                    section.data(12).logicalSrcIdx = 60;
                    section.data(12).dtTransOffset = 12;

                    ;% rtDW.ccmnpib3ig
                    section.data(13).logicalSrcIdx = 61;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.cycsofdxfe
                    section.data(14).logicalSrcIdx = 62;
                    section.data(14).dtTransOffset = 14;

                    ;% rtDW.exuhvzpgsm
                    section.data(15).logicalSrcIdx = 63;
                    section.data(15).dtTransOffset = 15;

                    ;% rtDW.aarxkmfy55
                    section.data(16).logicalSrcIdx = 64;
                    section.data(16).dtTransOffset = 16;

                    ;% rtDW.pzwvs2j5ee
                    section.data(17).logicalSrcIdx = 65;
                    section.data(17).dtTransOffset = 17;

                    ;% rtDW.b5diue1uxm.LoggedData
                    section.data(18).logicalSrcIdx = 66;
                    section.data(18).dtTransOffset = 18;

                    ;% rtDW.kez14kn3ym.TimePtr
                    section.data(19).logicalSrcIdx = 67;
                    section.data(19).dtTransOffset = 20;

                    ;% rtDW.opma5fwgxt.AQHandles
                    section.data(20).logicalSrcIdx = 68;
                    section.data(20).dtTransOffset = 21;

                    ;% rtDW.i1b4erv544.AQHandles
                    section.data(21).logicalSrcIdx = 69;
                    section.data(21).dtTransOffset = 22;

                    ;% rtDW.o25sxexqnc.AQHandles
                    section.data(22).logicalSrcIdx = 70;
                    section.data(22).dtTransOffset = 23;

                    ;% rtDW.guynqgbksu.AQHandles
                    section.data(23).logicalSrcIdx = 71;
                    section.data(23).dtTransOffset = 24;

                    ;% rtDW.cmjfgqom52
                    section.data(24).logicalSrcIdx = 72;
                    section.data(24).dtTransOffset = 25;

                    ;% rtDW.gpwzsvid1r
                    section.data(25).logicalSrcIdx = 73;
                    section.data(25).dtTransOffset = 26;

                    ;% rtDW.l0offn5pfw
                    section.data(26).logicalSrcIdx = 74;
                    section.data(26).dtTransOffset = 27;

                    ;% rtDW.oees0agrqg
                    section.data(27).logicalSrcIdx = 75;
                    section.data(27).dtTransOffset = 28;

                    ;% rtDW.bf5jp1t1je
                    section.data(28).logicalSrcIdx = 76;
                    section.data(28).dtTransOffset = 29;

                    ;% rtDW.grwvqtecfq
                    section.data(29).logicalSrcIdx = 77;
                    section.data(29).dtTransOffset = 30;

                    ;% rtDW.pi2dmccavk
                    section.data(30).logicalSrcIdx = 78;
                    section.data(30).dtTransOffset = 31;

                    ;% rtDW.jbztwjzszw
                    section.data(31).logicalSrcIdx = 79;
                    section.data(31).dtTransOffset = 32;

                    ;% rtDW.eltday5bxn
                    section.data(32).logicalSrcIdx = 80;
                    section.data(32).dtTransOffset = 33;

                    ;% rtDW.cg05uy0gaj
                    section.data(33).logicalSrcIdx = 81;
                    section.data(33).dtTransOffset = 34;

                    ;% rtDW.oreix54jo1
                    section.data(34).logicalSrcIdx = 82;
                    section.data(34).dtTransOffset = 35;

                    ;% rtDW.fmjokqk3g2
                    section.data(35).logicalSrcIdx = 83;
                    section.data(35).dtTransOffset = 36;

                    ;% rtDW.jbmhvkycuq
                    section.data(36).logicalSrcIdx = 84;
                    section.data(36).dtTransOffset = 37;

                    ;% rtDW.gglgfvym2m
                    section.data(37).logicalSrcIdx = 85;
                    section.data(37).dtTransOffset = 38;

                    ;% rtDW.pghjdm11ft
                    section.data(38).logicalSrcIdx = 86;
                    section.data(38).dtTransOffset = 39;

                    ;% rtDW.etnlg20vgi
                    section.data(39).logicalSrcIdx = 87;
                    section.data(39).dtTransOffset = 40;

                    ;% rtDW.d05ty02jkv
                    section.data(40).logicalSrcIdx = 88;
                    section.data(40).dtTransOffset = 41;

                    ;% rtDW.mc2c422l4v
                    section.data(41).logicalSrcIdx = 89;
                    section.data(41).dtTransOffset = 42;

                    ;% rtDW.hvoi0laj4r
                    section.data(42).logicalSrcIdx = 90;
                    section.data(42).dtTransOffset = 43;

                    ;% rtDW.koa5sf2w1y
                    section.data(43).logicalSrcIdx = 91;
                    section.data(43).dtTransOffset = 44;

                    ;% rtDW.dw31xg4lxo
                    section.data(44).logicalSrcIdx = 92;
                    section.data(44).dtTransOffset = 45;

                    ;% rtDW.bvw2va0bpk
                    section.data(45).logicalSrcIdx = 93;
                    section.data(45).dtTransOffset = 46;

                    ;% rtDW.fjba1nfx13
                    section.data(46).logicalSrcIdx = 94;
                    section.data(46).dtTransOffset = 47;

                    ;% rtDW.d1xayk1tnu.LoggedData
                    section.data(47).logicalSrcIdx = 95;
                    section.data(47).dtTransOffset = 48;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.mre1zjqmyg
                    section.data(1).logicalSrcIdx = 96;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.c1xv4lavyx
                    section.data(2).logicalSrcIdx = 97;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jl5ooysd2s
                    section.data(3).logicalSrcIdx = 98;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.eifup1x5cc
                    section.data(1).logicalSrcIdx = 99;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mm51shfpuc
                    section.data(2).logicalSrcIdx = 100;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dky15kevds
                    section.data(3).logicalSrcIdx = 101;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.lbdnrt5k2u
                    section.data(4).logicalSrcIdx = 102;
                    section.data(4).dtTransOffset = 628;

                    ;% rtDW.iad4zbxzgs
                    section.data(5).logicalSrcIdx = 103;
                    section.data(5).dtTransOffset = 629;

                    ;% rtDW.hyyf22gvlr
                    section.data(6).logicalSrcIdx = 104;
                    section.data(6).dtTransOffset = 630;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.b01cx0ynrl
                    section.data(1).logicalSrcIdx = 105;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lmh145ati3
                    section.data(2).logicalSrcIdx = 106;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.ah1glsmkae.PrevIndex
                    section.data(1).logicalSrcIdx = 107;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dvzs4nrqov.PrevIndex
                    section.data(2).logicalSrcIdx = 108;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gh0oec1z5w.PrevIndex
                    section.data(3).logicalSrcIdx = 109;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ahwnshb1lx.PrevIndex
                    section.data(4).logicalSrcIdx = 110;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.aqvwut4gxx
                    section.data(5).logicalSrcIdx = 111;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.gdmfsz4u3k
                    section.data(6).logicalSrcIdx = 112;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.lo0wac2a2b.PrevIndex
                    section.data(7).logicalSrcIdx = 113;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.fw5ooxnkzk
                    section.data(8).logicalSrcIdx = 114;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.hsxcmjmtgd
                    section.data(9).logicalSrcIdx = 115;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.pktaxkjkog
                    section.data(10).logicalSrcIdx = 116;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.hydze1iruo
                    section.data(11).logicalSrcIdx = 117;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.nbd2ciowee
                    section.data(12).logicalSrcIdx = 118;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.eisab1mvjn
                    section.data(13).logicalSrcIdx = 119;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.aes52he5qp
                    section.data(1).logicalSrcIdx = 120;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.iqfygxjppa
                    section.data(2).logicalSrcIdx = 121;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% rtDW.o4q5nva5zq
                    section.data(1).logicalSrcIdx = 122;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gphonxq0y5
                    section.data(2).logicalSrcIdx = 123;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.myukt1dkx2
                    section.data(3).logicalSrcIdx = 124;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.jlomuqw2nj
                    section.data(4).logicalSrcIdx = 125;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.anywdxjzfj
                    section.data(5).logicalSrcIdx = 126;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ikadmncmhw
                    section.data(6).logicalSrcIdx = 127;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.excyoskhit
                    section.data(7).logicalSrcIdx = 128;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.jqluzytle2
                    section.data(8).logicalSrcIdx = 129;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.je2chgxwr3
                    section.data(9).logicalSrcIdx = 130;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.gb0pu4b4jm
                    section.data(10).logicalSrcIdx = 131;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.plsp5vol0y
                    section.data(11).logicalSrcIdx = 132;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ghd034ermt
                    section.data(12).logicalSrcIdx = 133;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.kjyys5fqrc
                    section.data(13).logicalSrcIdx = 134;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.k2aa442psi
                    section.data(14).logicalSrcIdx = 135;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.myznoztvgf
                    section.data(15).logicalSrcIdx = 136;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.oiqnpg1c2e
                    section.data(16).logicalSrcIdx = 137;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.nm05ot5thg
                    section.data(17).logicalSrcIdx = 138;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.k3ntuowunk
                    section.data(18).logicalSrcIdx = 139;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.pxlzvepeuu
                    section.data(19).logicalSrcIdx = 140;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.m54kshliay
                    section.data(20).logicalSrcIdx = 141;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 131616093;
    targMap.checksum1 = 3669568646;
    targMap.checksum2 = 3704541709;
    targMap.checksum3 = 242331221;

