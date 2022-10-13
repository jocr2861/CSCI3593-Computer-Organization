var codasip_scheduling_data = { 
    "table" : [
        {
            "element" : "alu_operate",
            "instance" : "alu_operate",
            "hdl" : "alu_operate",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 1,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "uint1",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "inst_decode",
            "instance" : "id.inst_decode",
            "hdl" : "inst_decode",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 1,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "INSTRUCTION",
                    "bits" : 10,
                    "datatype" : "uint10",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "i_hw_itype_alu",
            "instance" : "id.inst_decode",
            "hdl" : "i_hw_itype_alu",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 1,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 10,
                    "datatype" : "uint10",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "pipeline_control",
            "instance" : "pipeline_control",
            "hdl" : "pipeline_control",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "pma_hprot_inline_1_inline_1",
            "instance" : "",
            "hdl" : "pma_hprot_inline_1_inline_1",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 3,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "hprot0_inline_1_inline_1",
                    "bits" : 1,
                    "datatype" : "uint1",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "address_inline_1_inline_1",
                    "bits" : 32,
                    "datatype" : "uint32",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "is_cacheable_bufferable_inline_1_inline_1",
                    "bits" : 1,
                    "datatype" : "uint1",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_return2_pma_hprot_inline_1_inline_1",
                    "bits" : 4,
                    "datatype" : "uint4",
                    "detail" : "Register, created during scheduling of the unit automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "wb",
            "instance" : "wb",
            "hdl" : "wb",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 1,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "reset",
            "instance" : "",
            "hdl" : "reset",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_ori",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_ori",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_addi",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_addi",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_andi",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_andi",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_halt",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_halt",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_slti",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_slti",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_xori",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_xori",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "ex_output",
            "instance" : "ex_output",
            "hdl" : "ex_output",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "i_hw_halt",
            "instance" : "id.inst_decode",
            "hdl" : "i_hw_halt",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "id_output",
            "instance" : "id_output",
            "hdl" : "id_output",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 2,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 3,
                    "datatype" : "uint3",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_1",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "if_output",
            "instance" : "if_output",
            "hdl" : "if_output",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 4,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_1",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_2",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_3",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "me_output",
            "instance" : "me_output",
            "hdl" : "me_output",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "opc_sltiu",
            "instance" : "id.inst_decode.opc",
            "hdl" : "opc_sltiu",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "ex",
            "instance" : "ex",
            "hdl" : "ex",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 3,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "uint1",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_1",
                    "bits" : 1,
                    "datatype" : "uint1",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_2",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "fe",
            "instance" : "fe",
            "hdl" : "fe",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 3,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "cache_hprot",
                    "bits" : 4,
                    "datatype" : "uint4",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "if_status",
                    "bits" : 2,
                    "datatype" : "uint2",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "id",
            "instance" : "id",
            "hdl" : "id",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 8,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
                { 
                    "id" : "temp_instr",
                    "bits" : 32,
                    "datatype" : "uint32",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "cache_ready",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "id_instr_temp",
                    "bits" : 32,
                    "datatype" : "uint32",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "instr_control",
                    "bits" : 2,
                    "datatype" : "uint2",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "cache_response",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created during scheduling of the unit automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_0",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_1",
                    "bits" : 2,
                    "datatype" : "uint2",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                },
                { 
                    "id" : "codasip_tmp_var_2",
                    "bits" : 1,
                    "datatype" : "bool",
                    "detail" : "Signal, created from condition expressions (if, switch, while, ...) automatically by the Codasip framework"
                }
            ]
        },
        {
            "element" : "me",
            "instance" : "me",
            "hdl" : "me",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        },
        {
            "element" : "main",
            "instance" : "",
            "hdl" : "main",
            "numClocks" : {"first" : "0", "second" : "combinatorial logic"},
            "localSignal" : 0,
            "localRegister" : 0,
            "localRegisterFile" : 0,
            "SVGlink" : "",
            "detail" : [
            ]
        }
    ],
    "combinatiorialUnit" : 24,
    "sequentialUnit" : 0,
    "localSignals" : 27,
    "localRegisters" : 0,
    "localRegisterFiles" : 0,
    "svg" : 0
};
