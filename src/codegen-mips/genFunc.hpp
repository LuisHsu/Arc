#ifndef GENFUNC_HPP
#define GENFUNC_HPP
#include <general.hpp>
bool gen1(ASTNode *, GenParam &);
bool pro1(ASTNode *, GenParam &);
bool gen2(ASTNode *, GenParam &param);
bool pro2(ASTNode *, GenParam &);
bool gen3(ASTNode *node, GenParam &param);
bool pro3(ASTNode *, GenParam &);
bool gen4(ASTNode *node, GenParam &param);
bool pro4(ASTNode *, GenParam &);
bool gen5(ASTNode *, GenParam &param);
bool pro5(ASTNode *, GenParam &param);
bool gen6(ASTNode *, GenParam &param);
bool pro6(ASTNode *, GenParam &param);
bool gen7(ASTNode *, GenParam &);
bool pro7(ASTNode *, GenParam &);
bool gen8(ASTNode *, GenParam &);
bool pro8(ASTNode *, GenParam &);
bool gen9(ASTNode *, GenParam &);
bool pro9(ASTNode *, GenParam &);
bool gen10(ASTNode *, GenParam &);
bool pro10(ASTNode *, GenParam &);
bool gen11(ASTNode *, GenParam &);
bool pro11(ASTNode *, GenParam &);
bool gen12(ASTNode *, GenParam &);
bool pro12(ASTNode *, GenParam &);
bool gen13(ASTNode *node, GenParam &param);
bool pro13(ASTNode *, GenParam &);
bool gen14(ASTNode *node, GenParam &param);
bool pro14(ASTNode *, GenParam &);
bool gen15(ASTNode *node, GenParam &param);
bool pro15(ASTNode *, GenParam &);
bool gen16(ASTNode *, GenParam &);
bool pro16(ASTNode *, GenParam &);
bool gen17(ASTNode *, GenParam &param);
bool pro17(ASTNode *, GenParam &param);
bool gen18(ASTNode *, GenParam &);
bool pro18(ASTNode *node, GenParam &param);
bool gen19(ASTNode *, GenParam &);
bool pro19(ASTNode *, GenParam &);
bool gen20(ASTNode *, GenParam &param);
bool pro20(ASTNode *node, GenParam &param);
bool gen21(ASTNode *, GenParam &param);
bool pro21(ASTNode *, GenParam &);
bool gen22(ASTNode *, GenParam &param);
bool pro22(ASTNode *, GenParam &);
bool gen23(ASTNode *, GenParam &);
bool pro23(ASTNode *, GenParam &);
bool gen24(ASTNode *, GenParam &);
bool pro24(ASTNode *, GenParam &);
bool gen25(ASTNode *, GenParam &);
bool pro25(ASTNode *, GenParam &);
bool gen26(ASTNode *, GenParam &param);
bool pro26(ASTNode *, GenParam &);
bool gen27(ASTNode *, GenParam &param);
bool pro27(ASTNode *, GenParam &);
bool gen28(ASTNode *, GenParam &param);
bool pro28(ASTNode *, GenParam &);
bool gen29(ASTNode *, GenParam &param);
bool pro29(ASTNode *, GenParam &);
bool gen30(ASTNode *, GenParam &param);
bool pro30(ASTNode *, GenParam &param);
bool gen31(ASTNode *, GenParam &param);
bool pro31(ASTNode *, GenParam &param);
bool gen32(ASTNode *, GenParam &param);
bool pro32(ASTNode *, GenParam &);
bool gen33(ASTNode *, GenParam &param);
bool pro33(ASTNode *, GenParam &);
bool gen34(ASTNode *, GenParam &param);
bool pro34(ASTNode *, GenParam &);
bool gen35(ASTNode *, GenParam &param);
bool pro35(ASTNode *, GenParam &);
bool gen36(ASTNode *, GenParam &param);
bool pro36(ASTNode *, GenParam &);
bool gen37(ASTNode *, GenParam &);
bool pro37(ASTNode *, GenParam &);
bool gen38(ASTNode *node, GenParam &param);
bool pro38(ASTNode *, GenParam &);
bool gen39(ASTNode *, GenParam &);
bool pro39(ASTNode *, GenParam &);
bool gen40(ASTNode *node, GenParam &param);
bool pro40(ASTNode *, GenParam &);
bool gen41(ASTNode *, GenParam &);
bool pro41(ASTNode *, GenParam &);
bool gen42(ASTNode *, GenParam &param);
bool pro42(ASTNode *, GenParam &);
bool gen43(ASTNode *, GenParam &param);
bool pro43(ASTNode *, GenParam &);
bool gen44(ASTNode *, GenParam &);
bool pro44(ASTNode *, GenParam &);
bool gen45(ASTNode *, GenParam &);
bool pro45(ASTNode *, GenParam &);
bool gen46(ASTNode *, GenParam &);
bool pro46(ASTNode *, GenParam &);
bool gen47(ASTNode *, GenParam &);
bool pro47(ASTNode *, GenParam &);
bool gen48(ASTNode *, GenParam &param);
bool pro48(ASTNode *, GenParam &);
bool gen49(ASTNode *, GenParam &);
bool pro49(ASTNode *, GenParam &);
bool gen50(ASTNode *node, GenParam &param);
bool pro50(ASTNode *, GenParam &);
bool gen51(ASTNode *node, GenParam &param);
bool pro51(ASTNode *, GenParam &);
bool gen52(ASTNode *node, GenParam &param);
bool pro52(ASTNode *, GenParam &param);
bool gen53(ASTNode *node, GenParam &param);
bool pro53(ASTNode *, GenParam &);
bool gen54(ASTNode *node, GenParam &);
bool pro54(ASTNode *, GenParam &);
bool gen55(ASTNode *node, GenParam &);
bool pro55(ASTNode *, GenParam &);
bool gen56(ASTNode *node, GenParam &);
bool pro56(ASTNode *, GenParam &param);
bool gen57(ASTNode *node, GenParam &);
bool pro57(ASTNode *, GenParam &);
bool gen58(ASTNode *node, GenParam &);
bool pro58(ASTNode *, GenParam &);
bool gen59(ASTNode *node, GenParam &);
bool pro59(ASTNode *, GenParam &);
bool gen60(ASTNode *node, GenParam &);
bool pro60(ASTNode *, GenParam &);
bool gen61(ASTNode *node, GenParam &);
bool pro61(ASTNode *, GenParam &);
bool gen62(ASTNode *node, GenParam &);
bool pro62(ASTNode *, GenParam &);
bool gen63(ASTNode *node, GenParam &);
bool pro63(ASTNode *, GenParam &);
bool gen64(ASTNode *node, GenParam &);
bool pro64(ASTNode *, GenParam &);
bool gen65(ASTNode *node, GenParam &);
bool pro65(ASTNode *, GenParam &);
bool gen66(ASTNode *node, GenParam &);
bool pro66(ASTNode *, GenParam &);
bool gen67(ASTNode *node, GenParam &);
bool pro67(ASTNode *, GenParam &param);
bool gen68(ASTNode *node, GenParam &param);
bool pro68(ASTNode *, GenParam &);
#define GENTABLE bool (*funcTable[68])(ASTNode *, GenParam &)={gen1,gen2,gen3,gen4,gen5,gen6,gen7,gen8,gen9,gen10,gen11,gen12,gen13,gen14,gen15,gen16,gen17,gen18,gen19,gen20,gen21,gen22,gen23,gen24,gen25,gen26,gen27,gen28,gen29,gen30,gen31,gen32,gen33,gen34,gen35,gen36,gen37,gen38,gen39,gen40,gen41,gen42,gen43,gen44,gen45,gen46,gen47,gen48,gen49,gen50,gen51,gen52,gen53,gen54,gen55,gen56,gen57,gen58,gen59,gen60,gen61,gen62,gen63,gen64,gen65,gen66,gen67,gen68};
#define PROTABLE bool (*proTable[68])(ASTNode *, GenParam &)={pro1,pro2,pro3,pro4,pro5,pro6,pro7,pro8,pro9,pro10,pro11,pro12,pro13,pro14,pro15,pro16,pro17,pro18,pro19,pro20,pro21,pro22,pro23,pro24,pro25,pro26,pro27,pro28,pro29,pro30,pro31,pro32,pro33,pro34,pro35,pro36,pro37,pro38,pro39,pro40,pro41,pro42,pro43,pro44,pro45,pro46,pro47,pro48,pro49,pro50,pro51,pro52,pro53,pro54,pro55,pro56,pro57,pro58,pro59,pro60,pro61,pro62,pro63,pro64,pro65,pro66,pro67,pro68};
#endif
