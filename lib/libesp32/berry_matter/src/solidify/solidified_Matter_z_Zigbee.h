/* Solidification of Matter_z_Zigbee.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'Matter_Zigbee_Mapper' ktab size: 38, total: 63 (saved 200 bytes)
static const bvalue be_ktab_class_Matter_Zigbee_Mapper[38] = {
  /* K0   */  be_nested_str_weak(read_zb_info),
  /* K1   */  be_nested_str_weak(log),
  /* K2   */  be_nested_str_weak(MTR_X3A_X20Read_X20information_X20for_X20zigbee_X20device_X200x_X2504X),
  /* K3   */  be_nested_str_weak(shortaddr),
  /* K4   */  be_const_int(3),
  /* K5   */  be_nested_str_weak(pi),
  /* K6   */  be_nested_str_weak(zigbee_received),
  /* K7   */  be_nested_str_weak(device_arg_str),
  /* K8   */  be_nested_str_weak(string),
  /* K9   */  be_nested_str_weak(0x_X2504X),
  /* K10  */  be_nested_str_weak(Power),
  /* K11  */  be_nested_str_weak(ZbSend_X20_X7B_X22Device_X22_X3A_X22_X25s_X22_X2C_X22Send_X22_X3A_X7B_X22Power_X22_X3A_X25i_X7D_X7D),
  /* K12  */  be_nested_str_weak(Bri),
  /* K13  */  be_nested_str_weak(ZbSend_X20_X7B_X22Device_X22_X3A_X22_X25s_X22_X2C_X22Send_X22_X3A_X7B_X22Dimmer_X22_X3A_X25i_X7D_X7D),
  /* K14  */  be_nested_str_weak(CT),
  /* K15  */  be_nested_str_weak(ZbSend_X20_X7B_X22Device_X22_X3A_X22_X25s_X22_X2C_X22Send_X22_X3A_X7B_X22CT_X22_X3A_X25i_X7D_X7D),
  /* K16  */  be_nested_str_weak(tasmota),
  /* K17  */  be_nested_str_weak(loglevel),
  /* K18  */  be_nested_str_weak(MTR_X3A_X20_X27_X25s_X27),
  /* K19  */  be_nested_str_weak(cmd),
  /* K20  */  be_nested_str_weak(zigbee),
  /* K21  */  be_nested_str_weak(device_arg),
  /* K22  */  be_nested_str_weak(zigbee_device),
  /* K23  */  be_nested_str_weak(find),
  /* K24  */  be_nested_str_weak(endpoint),
  /* K25  */  be_nested_str_weak(startswith),
  /* K26  */  be_nested_str_weak(0x),
  /* K27  */  be_nested_str_weak(0X),
  /* K28  */  be_nested_str_weak(_lookup_endpoint_by_name),
  /* K29  */  be_nested_str_weak(MTR_X3A_X20cannot_X20find_X20zigbee_X20device_X20_X27_X25s_X27),
  /* K30  */  be_nested_str_weak(keys),
  /* K31  */  be_const_int(0),
  /* K32  */  be_nested_str_weak(_search_for_ep),
  /* K33  */  be_nested_str_weak(stop_iteration),
  /* K34  */  be_nested_str_weak(set_timer),
  /* K35  */  be_nested_str_weak(ZbName_X20_X25s),
  /* K36  */  be_nested_str_weak(resolve_zb_device),
  /* K37  */  be_nested_str_weak(info),
};


extern const bclass be_class_Matter_Zigbee_Mapper;

/********************************************************************
** Solidified function: probe_zb_values
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_probe_zb_values,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(probe_zb_values),
    &be_const_str_solidified,
    ( &(const binstruction[18]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x7C040200,  //  0001  CALL	R1	1
      0x4C080000,  //  0002  LDNIL	R2
      0x20080202,  //  0003  NE	R2	R1	R2
      0x780A000B,  //  0004  JMPF	R2	#0011
      0xB80A0200,  //  0005  GETNGBL	R2	K1
      0x600C0018,  //  0006  GETGBL	R3	G24
      0x58100002,  //  0007  LDCONST	R4	K2
      0x88140103,  //  0008  GETMBR	R5	R0	K3
      0x7C0C0400,  //  0009  CALL	R3	2
      0x58100004,  //  000A  LDCONST	R4	K4
      0x7C080400,  //  000B  CALL	R2	2
      0x88080105,  //  000C  GETMBR	R2	R0	K5
      0x8C080506,  //  000D  GETMET	R2	R2	K6
      0x4C100000,  //  000E  LDNIL	R4
      0x5C140200,  //  000F  MOVE	R5	R1
      0x7C080600,  //  0010  CALL	R2	3
      0x80000000,  //  0011  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_init,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x90020A01,  //  0000  SETMBR	R0	K5	R1
      0x80000000,  //  0001  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: zb_single_command
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_zb_single_command,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(zb_single_command),
    &be_const_str_solidified,
    ( &(const binstruction[59]) {  /* code */
      0x4C0C0000,  //  0000  LDNIL	R3
      0x60100004,  //  0001  GETGBL	R4	G4
      0x88140107,  //  0002  GETMBR	R5	R0	K7
      0x7C100200,  //  0003  CALL	R4	1
      0x1C100908,  //  0004  EQ	R4	R4	K8
      0x78120001,  //  0005  JMPF	R4	#0008
      0x88100107,  //  0006  GETMBR	R4	R0	K7
      0x70020003,  //  0007  JMP		#000C
      0x60100018,  //  0008  GETGBL	R4	G24
      0x58140009,  //  0009  LDCONST	R5	K9
      0x88180103,  //  000A  GETMBR	R6	R0	K3
      0x7C100400,  //  000B  CALL	R4	2
      0x1C14030A,  //  000C  EQ	R5	R1	K10
      0x78160006,  //  000D  JMPF	R5	#0015
      0x60140018,  //  000E  GETGBL	R5	G24
      0x5818000B,  //  000F  LDCONST	R6	K11
      0x5C1C0800,  //  0010  MOVE	R7	R4
      0x5C200400,  //  0011  MOVE	R8	R2
      0x7C140600,  //  0012  CALL	R5	3
      0x5C0C0A00,  //  0013  MOVE	R3	R5
      0x70020010,  //  0014  JMP		#0026
      0x1C14030C,  //  0015  EQ	R5	R1	K12
      0x78160006,  //  0016  JMPF	R5	#001E
      0x60140018,  //  0017  GETGBL	R5	G24
      0x5818000D,  //  0018  LDCONST	R6	K13
      0x5C1C0800,  //  0019  MOVE	R7	R4
      0x5C200400,  //  001A  MOVE	R8	R2
      0x7C140600,  //  001B  CALL	R5	3
      0x5C0C0A00,  //  001C  MOVE	R3	R5
      0x70020007,  //  001D  JMP		#0026
      0x1C14030E,  //  001E  EQ	R5	R1	K14
      0x78160005,  //  001F  JMPF	R5	#0026
      0x60140018,  //  0020  GETGBL	R5	G24
      0x5818000F,  //  0021  LDCONST	R6	K15
      0x5C1C0800,  //  0022  MOVE	R7	R4
      0x5C200400,  //  0023  MOVE	R8	R2
      0x7C140600,  //  0024  CALL	R5	3
      0x5C0C0A00,  //  0025  MOVE	R3	R5
      0x4C140000,  //  0026  LDNIL	R5
      0x20140605,  //  0027  NE	R5	R3	R5
      0x78160010,  //  0028  JMPF	R5	#003A
      0xB8162000,  //  0029  GETNGBL	R5	K16
      0x8C140B11,  //  002A  GETMET	R5	R5	K17
      0x581C0004,  //  002B  LDCONST	R7	K4
      0x7C140400,  //  002C  CALL	R5	2
      0x78160006,  //  002D  JMPF	R5	#0035
      0xB8160200,  //  002E  GETNGBL	R5	K1
      0x60180018,  //  002F  GETGBL	R6	G24
      0x581C0012,  //  0030  LDCONST	R7	K18
      0x5C200600,  //  0031  MOVE	R8	R3
      0x7C180400,  //  0032  CALL	R6	2
      0x581C0004,  //  0033  LDCONST	R7	K4
      0x7C140400,  //  0034  CALL	R5	2
      0xB8162000,  //  0035  GETNGBL	R5	K16
      0x8C140B13,  //  0036  GETMET	R5	R5	K19
      0x5C1C0600,  //  0037  MOVE	R7	R3
      0x50200200,  //  0038  LDBOOL	R8	1	0
      0x7C140600,  //  0039  CALL	R5	3
      0x80000000,  //  003A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: resolve_zb_device
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_resolve_zb_device,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(resolve_zb_device),
    &be_const_str_solidified,
    ( &(const binstruction[59]) {  /* code */
      0xA4062800,  //  0000  IMPORT	R1	K20
      0xA40A1000,  //  0001  IMPORT	R2	K8
      0x880C0115,  //  0002  GETMBR	R3	R0	K21
      0x4C100000,  //  0003  LDNIL	R4
      0x1C0C0604,  //  0004  EQ	R3	R3	R4
      0x780E0001,  //  0005  JMPF	R3	#0008
      0x500C0000,  //  0006  LDBOOL	R3	0	0
      0x80040600,  //  0007  RET	1	R3
      0x880C0103,  //  0008  GETMBR	R3	R0	K3
      0x4C100000,  //  0009  LDNIL	R4
      0x200C0604,  //  000A  NE	R3	R3	R4
      0x780E0001,  //  000B  JMPF	R3	#000E
      0x500C0200,  //  000C  LDBOOL	R3	1	0
      0x80040600,  //  000D  RET	1	R3
      0x8C0C0317,  //  000E  GETMET	R3	R1	K23
      0x88140115,  //  000F  GETMBR	R5	R0	K21
      0x7C0C0400,  //  0010  CALL	R3	2
      0x90022C03,  //  0011  SETMBR	R0	K22	R3
      0x880C0116,  //  0012  GETMBR	R3	R0	K22
      0x780E001C,  //  0013  JMPF	R3	#0031
      0x880C0116,  //  0014  GETMBR	R3	R0	K22
      0x880C0703,  //  0015  GETMBR	R3	R3	K3
      0x90020603,  //  0016  SETMBR	R0	K3	R3
      0x880C0118,  //  0017  GETMBR	R3	R0	K24
      0x4C100000,  //  0018  LDNIL	R4
      0x1C0C0604,  //  0019  EQ	R3	R3	R4
      0x780E0012,  //  001A  JMPF	R3	#002E
      0x600C0004,  //  001B  GETGBL	R3	G4
      0x88100107,  //  001C  GETMBR	R4	R0	K7
      0x7C0C0200,  //  001D  CALL	R3	1
      0x1C0C0708,  //  001E  EQ	R3	R3	K8
      0x780E000D,  //  001F  JMPF	R3	#002E
      0x8C0C0519,  //  0020  GETMET	R3	R2	K25
      0x88140107,  //  0021  GETMBR	R5	R0	K7
      0x5818001A,  //  0022  LDCONST	R6	K26
      0x7C0C0600,  //  0023  CALL	R3	3
      0x740E0008,  //  0024  JMPT	R3	#002E
      0x8C0C0519,  //  0025  GETMET	R3	R2	K25
      0x88140107,  //  0026  GETMBR	R5	R0	K7
      0x5818001B,  //  0027  LDCONST	R6	K27
      0x7C0C0600,  //  0028  CALL	R3	3
      0x740E0003,  //  0029  JMPT	R3	#002E
      0x8C0C011C,  //  002A  GETMET	R3	R0	K28
      0x88140107,  //  002B  GETMBR	R5	R0	K7
      0x7C0C0400,  //  002C  CALL	R3	2
      0x90023003,  //  002D  SETMBR	R0	K24	R3
      0x500C0200,  //  002E  LDBOOL	R3	1	0
      0x80040600,  //  002F  RET	1	R3
      0x70020008,  //  0030  JMP		#003A
      0xB80E0200,  //  0031  GETNGBL	R3	K1
      0x60100018,  //  0032  GETGBL	R4	G24
      0x5814001D,  //  0033  LDCONST	R5	K29
      0x88180115,  //  0034  GETMBR	R6	R0	K21
      0x7C100400,  //  0035  CALL	R4	2
      0x58140004,  //  0036  LDCONST	R5	K4
      0x7C0C0400,  //  0037  CALL	R3	2
      0x500C0000,  //  0038  LDBOOL	R3	0	0
      0x80040600,  //  0039  RET	1	R3
      0x80000000,  //  003A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: _search_for_ep
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper__search_for_ep,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(_search_for_ep),
    &be_const_str_solidified,
    ( &(const binstruction[39]) {  /* code */
      0x600C000F,  //  0000  GETGBL	R3	G15
      0x5C100200,  //  0001  MOVE	R4	R1
      0x60140013,  //  0002  GETGBL	R5	G19
      0x7C0C0400,  //  0003  CALL	R3	2
      0x740E0001,  //  0004  JMPT	R3	#0007
      0x4C0C0000,  //  0005  LDNIL	R3
      0x80040600,  //  0006  RET	1	R3
      0x600C0010,  //  0007  GETGBL	R3	G16
      0x8C10031E,  //  0008  GETMET	R4	R1	K30
      0x7C100200,  //  0009  CALL	R4	1
      0x7C0C0200,  //  000A  CALL	R3	1
      0xA8020015,  //  000B  EXBLK	0	#0022
      0x5C100600,  //  000C  MOVE	R4	R3
      0x7C100000,  //  000D  CALL	R4	0
      0x94140204,  //  000E  GETIDX	R5	R1	R4
      0x1C180A02,  //  000F  EQ	R6	R5	R2
      0x781A0006,  //  0010  JMPF	R6	#0018
      0x60180009,  //  0011  GETGBL	R6	G9
      0x5C1C0800,  //  0012  MOVE	R7	R4
      0x7C180200,  //  0013  CALL	R6	1
      0x241C0D1F,  //  0014  GT	R7	R6	K31
      0x781E0001,  //  0015  JMPF	R7	#0018
      0xA8040001,  //  0016  EXBLK	1	1
      0x80040C00,  //  0017  RET	1	R6
      0x8C180120,  //  0018  GETMET	R6	R0	K32
      0x5C200A00,  //  0019  MOVE	R8	R5
      0x5C240400,  //  001A  MOVE	R9	R2
      0x7C180600,  //  001B  CALL	R6	3
      0x4C1C0000,  //  001C  LDNIL	R7
      0x201C0C07,  //  001D  NE	R7	R6	R7
      0x781E0001,  //  001E  JMPF	R7	#0021
      0xA8040001,  //  001F  EXBLK	1	1
      0x80040C00,  //  0020  RET	1	R6
      0x7001FFE9,  //  0021  JMP		#000C
      0x580C0021,  //  0022  LDCONST	R3	K33
      0xAC0C0200,  //  0023  CATCH	R3	1	0
      0xB0080000,  //  0024  RAISE	2	R0	R0
      0x4C0C0000,  //  0025  LDNIL	R3
      0x80040600,  //  0026  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_configuration
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_parse_configuration,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str_weak(probe_zb_values),
        }),
        be_str_weak(_X3Clambda_X3E),
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
    }),
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(parse_configuration),
    &be_const_str_solidified,
    ( &(const binstruction[44]) {  /* code */
      0xA40A2800,  //  0000  IMPORT	R2	K20
      0xA40E1000,  //  0001  IMPORT	R3	K8
      0x8C100317,  //  0002  GETMET	R4	R1	K23
      0x58180016,  //  0003  LDCONST	R6	K22
      0x4C1C0000,  //  0004  LDNIL	R7
      0x7C100600,  //  0005  CALL	R4	3
      0x90022A04,  //  0006  SETMBR	R0	K21	R4
      0x60100004,  //  0007  GETGBL	R4	G4
      0x88140115,  //  0008  GETMBR	R5	R0	K21
      0x7C100200,  //  0009  CALL	R4	1
      0x1C100908,  //  000A  EQ	R4	R4	K8
      0x78120001,  //  000B  JMPF	R4	#000E
      0x88100115,  //  000C  GETMBR	R4	R0	K21
      0x90020E04,  //  000D  SETMBR	R0	K7	R4
      0x60100004,  //  000E  GETGBL	R4	G4
      0x88140115,  //  000F  GETMBR	R5	R0	K21
      0x7C100200,  //  0010  CALL	R4	1
      0x1C100908,  //  0011  EQ	R4	R4	K8
      0x7812000D,  //  0012  JMPF	R4	#0021
      0x8C100719,  //  0013  GETMET	R4	R3	K25
      0x88180115,  //  0014  GETMBR	R6	R0	K21
      0x581C001A,  //  0015  LDCONST	R7	K26
      0x7C100600,  //  0016  CALL	R4	3
      0x74120004,  //  0017  JMPT	R4	#001D
      0x8C100719,  //  0018  GETMET	R4	R3	K25
      0x88180115,  //  0019  GETMBR	R6	R0	K21
      0x581C001B,  //  001A  LDCONST	R7	K27
      0x7C100600,  //  001B  CALL	R4	3
      0x78120003,  //  001C  JMPF	R4	#0021
      0x60100009,  //  001D  GETGBL	R4	G9
      0x88140115,  //  001E  GETMBR	R5	R0	K21
      0x7C100200,  //  001F  CALL	R4	1
      0x90022A04,  //  0020  SETMBR	R0	K21	R4
      0x88100115,  //  0021  GETMBR	R4	R0	K21
      0x4C140000,  //  0022  LDNIL	R5
      0x20100805,  //  0023  NE	R4	R4	R5
      0x78120004,  //  0024  JMPF	R4	#002A
      0xB8122000,  //  0025  GETNGBL	R4	K16
      0x8C100922,  //  0026  GETMET	R4	R4	K34
      0x541A0063,  //  0027  LDINT	R6	100
      0x841C0000,  //  0028  CLOSURE	R7	P0
      0x7C100600,  //  0029  CALL	R4	3
      0xA0000000,  //  002A  CLOSE	R0
      0x80000000,  //  002B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: _lookup_endpoint_by_name
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper__lookup_endpoint_by_name,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(_lookup_endpoint_by_name),
    &be_const_str_solidified,
    ( &(const binstruction[13]) {  /* code */
      0xB80A2000,  //  0000  GETNGBL	R2	K16
      0x8C080513,  //  0001  GETMET	R2	R2	K19
      0x60100018,  //  0002  GETGBL	R4	G24
      0x58140023,  //  0003  LDCONST	R5	K35
      0x5C180200,  //  0004  MOVE	R6	R1
      0x7C100400,  //  0005  CALL	R4	2
      0x50140200,  //  0006  LDBOOL	R5	1	0
      0x7C080600,  //  0007  CALL	R2	3
      0x8C0C0120,  //  0008  GETMET	R3	R0	K32
      0x5C140400,  //  0009  MOVE	R5	R2
      0x5C180200,  //  000A  MOVE	R6	R1
      0x7C0C0600,  //  000B  CALL	R3	3
      0x80040600,  //  000C  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_zb_info
********************************************************************/
be_local_closure(class_Matter_Zigbee_Mapper_read_zb_info,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee_Mapper,     /* shared constants */
    be_str_weak(read_zb_info),
    &be_const_str_solidified,
    ( &(const binstruction[14]) {  /* code */
      0x8C040124,  //  0000  GETMET	R1	R0	K36
      0x7C040200,  //  0001  CALL	R1	1
      0x78060009,  //  0002  JMPF	R1	#000D
      0xA4062800,  //  0003  IMPORT	R1	K20
      0x8C080317,  //  0004  GETMET	R2	R1	K23
      0x88100103,  //  0005  GETMBR	R4	R0	K3
      0x7C080400,  //  0006  CALL	R2	2
      0x4C0C0000,  //  0007  LDNIL	R3
      0x200C0403,  //  0008  NE	R3	R2	R3
      0x780E0002,  //  0009  JMPF	R3	#000D
      0x8C0C0525,  //  000A  GETMET	R3	R2	K37
      0x7C0C0200,  //  000B  CALL	R3	1
      0x80040600,  //  000C  RET	1	R3
      0x80000000,  //  000D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Zigbee_Mapper
********************************************************************/
be_local_class(Matter_Zigbee_Mapper,
    6,
    NULL,
    be_nested_map(14,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(pi, 3), be_const_var(0) },
        { be_const_key_weak(read_zb_info, -1), be_const_closure(class_Matter_Zigbee_Mapper_read_zb_info_closure) },
        { be_const_key_weak(shortaddr, 10), be_const_var(4) },
        { be_const_key_weak(endpoint, -1), be_const_var(5) },
        { be_const_key_weak(zigbee_device, -1), be_const_var(3) },
        { be_const_key_weak(init, -1), be_const_closure(class_Matter_Zigbee_Mapper_init_closure) },
        { be_const_key_weak(device_arg_str, -1), be_const_var(2) },
        { be_const_key_weak(zb_single_command, -1), be_const_closure(class_Matter_Zigbee_Mapper_zb_single_command_closure) },
        { be_const_key_weak(device_arg, 7), be_const_var(1) },
        { be_const_key_weak(resolve_zb_device, -1), be_const_closure(class_Matter_Zigbee_Mapper_resolve_zb_device_closure) },
        { be_const_key_weak(_search_for_ep, -1), be_const_closure(class_Matter_Zigbee_Mapper__search_for_ep_closure) },
        { be_const_key_weak(parse_configuration, -1), be_const_closure(class_Matter_Zigbee_Mapper_parse_configuration_closure) },
        { be_const_key_weak(_lookup_endpoint_by_name, -1), be_const_closure(class_Matter_Zigbee_Mapper__lookup_endpoint_by_name_closure) },
        { be_const_key_weak(probe_zb_values, 1), be_const_closure(class_Matter_Zigbee_Mapper_probe_zb_values_closure) },
    })),
    be_str_weak(Matter_Zigbee_Mapper)
);

/********************************************************************
** Solidified function: matter_zigbee_init
********************************************************************/
be_local_closure(matter_zigbee_init,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(Matter_Zigbee),
    }),
    be_str_weak(matter_zigbee_init),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x80040200,  //  0001  RET	1	R1
    })
  )
);
/*******************************************************************/

// compact class 'Matter_Zigbee' ktab size: 13, total: 14 (saved 8 bytes)
static const bvalue be_ktab_class_Matter_Zigbee[13] = {
  /* K0   */  be_nested_str_weak(zigbee),
  /* K1   */  be_nested_str_weak(device),
  /* K2   */  be_nested_str_weak(add_handler),
  /* K3   */  be_nested_str_weak(plugins),
  /* K4   */  be_const_int(0),
  /* K5   */  be_nested_str_weak(ZIGBEE),
  /* K6   */  be_nested_str_weak(zigbee_mapper),
  /* K7   */  be_nested_str_weak(resolve_zb_device),
  /* K8   */  be_nested_str_weak(shortaddr),
  /* K9   */  be_nested_str_weak(endpoint),
  /* K10  */  be_nested_str_weak(_src_ep),
  /* K11  */  be_nested_str_weak(zigbee_received),
  /* K12  */  be_const_int(1),
};


extern const bclass be_class_Matter_Zigbee;

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_Matter_Zigbee_init,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0xA40A0000,  //  0000  IMPORT	R2	K0
      0x90020201,  //  0001  SETMBR	R0	K1	R1
      0x8C0C0502,  //  0002  GETMET	R3	R2	K2
      0x5C140000,  //  0003  MOVE	R5	R0
      0x7C0C0400,  //  0004  CALL	R3	2
      0x80000000,  //  0005  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: attributes_final
********************************************************************/
be_local_closure(class_Matter_Zigbee_attributes_final,   /* name */
  be_nested_proto(
    14,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_Matter_Zigbee,     /* shared constants */
    be_str_weak(attributes_final),
    &be_const_str_solidified,
    ( &(const binstruction[46]) {  /* code */
      0x88140101,  //  0000  GETMBR	R5	R0	K1
      0x88140B03,  //  0001  GETMBR	R5	R5	K3
      0x58180004,  //  0002  LDCONST	R6	K4
      0x601C000C,  //  0003  GETGBL	R7	G12
      0x5C200A00,  //  0004  MOVE	R8	R5
      0x7C1C0200,  //  0005  CALL	R7	1
      0x141C0C07,  //  0006  LT	R7	R6	R7
      0x781E0024,  //  0007  JMPF	R7	#002D
      0x941C0A06,  //  0008  GETIDX	R7	R5	R6
      0x88200F05,  //  0009  GETMBR	R8	R7	K5
      0x7822001F,  //  000A  JMPF	R8	#002B
      0x88200F06,  //  000B  GETMBR	R8	R7	K6
      0x7822001D,  //  000C  JMPF	R8	#002B
      0x88200F06,  //  000D  GETMBR	R8	R7	K6
      0x8C201107,  //  000E  GETMET	R8	R8	K7
      0x7C200200,  //  000F  CALL	R8	1
      0x78220019,  //  0010  JMPF	R8	#002B
      0x88200F06,  //  0011  GETMBR	R8	R7	K6
      0x88201108,  //  0012  GETMBR	R8	R8	K8
      0x1C201004,  //  0013  EQ	R8	R8	R4
      0x78220015,  //  0014  JMPF	R8	#002B
      0x88200F06,  //  0015  GETMBR	R8	R7	K6
      0x88201109,  //  0016  GETMBR	R8	R8	K9
      0x4C240000,  //  0017  LDNIL	R9
      0x20240609,  //  0018  NE	R9	R3	R9
      0x78260001,  //  0019  JMPF	R9	#001C
      0x8824070A,  //  001A  GETMBR	R9	R3	K10
      0x70020000,  //  001B  JMP		#001D
      0x4C240000,  //  001C  LDNIL	R9
      0x4C280000,  //  001D  LDNIL	R10
      0x1C28100A,  //  001E  EQ	R10	R8	R10
      0x742A0006,  //  001F  JMPT	R10	#0027
      0x4C280000,  //  0020  LDNIL	R10
      0x1C28120A,  //  0021  EQ	R10	R9	R10
      0x742A0003,  //  0022  JMPT	R10	#0027
      0x1C281304,  //  0023  EQ	R10	R9	K4
      0x742A0001,  //  0024  JMPT	R10	#0027
      0x1C281009,  //  0025  EQ	R10	R8	R9
      0x782A0003,  //  0026  JMPF	R10	#002B
      0x8C280F0B,  //  0027  GETMET	R10	R7	K11
      0x5C300400,  //  0028  MOVE	R12	R2
      0x5C340600,  //  0029  MOVE	R13	R3
      0x7C280600,  //  002A  CALL	R10	3
      0x00180D0C,  //  002B  ADD	R6	R6	K12
      0x7001FFD5,  //  002C  JMP		#0003
      0x80000000,  //  002D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Zigbee
********************************************************************/
be_local_class(Matter_Zigbee,
    1,
    NULL,
    be_nested_map(5,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(init, 3), be_const_closure(class_Matter_Zigbee_init_closure) },
        { be_const_key_weak(Matter_Zigbee_Mapper, 4), be_const_class(be_class_Matter_Zigbee_Mapper) },
        { be_const_key_weak(attributes_final, -1), be_const_closure(class_Matter_Zigbee_attributes_final_closure) },
        { be_const_key_weak(_CLASSES_TYPES, -1), be_nested_str_weak(_X2Dzigbee_X7Cz_light0_X7Cz_light1_X7Cz_light2_X7Cz_temp_X7Cz_pressure_X7Cz_humidity_X7Cz_occupancy) },
        { be_const_key_weak(device, -1), be_const_var(0) },
    })),
    be_str_weak(Matter_Zigbee)
);

/********************************************************************
** Solidified module: matter_zigbee
********************************************************************/
be_local_module(matter_zigbee,
    "matter_zigbee",
    be_nested_map(2,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(Matter_Zigbee, -1), be_const_class(be_class_Matter_Zigbee) },
        { be_const_key_weak(init, 0), be_const_closure(matter_zigbee_init_closure) },
    }))
);
BE_EXPORT_VARIABLE be_define_const_native_module(matter_zigbee);
/********************************************************************/
/********************************************************************/
/* End of solidification */
