#ifndef _CALLHMM_H_
#define _CALLHMM_H_

#include "ReadDepth.h"

namespace CallHmm {
bool HmmAndViterbi (const std::list <SReadDepth>& read_depth);

//namespace ReadDepthHmm { 
const int hmm_N = 5;
const int hmm_M = 201;
static const double hmm_pi[5] = {0.2, 0.2, 0.2, 0.2, 0.2};
static const double hmm_A[5][5] = {
	{0.99999996, 0.00000001, 0.00000001, 0.00000001, 0.00000001},
	{0.00000001, 0.99999996, 0.00000001, 0.00000001, 0.00000001},
	{0.00000001, 0.00000001, 0.99999996, 0.00000001, 0.00000001},
	{0.00000001, 0.00000001, 0.00000001, 0.99999996, 0.00000001},
	{0.00000001, 0.00000001, 0.00000001, 0.00000001, 0.99999996}
};
static const double hmm_B[5][201] = {
	{0.367879441171442334024277442950, 0.367879441171442334024277442950, 0.183939720585721139256563105846, 0.061313240195240391317010875127, 0.015328310048810104768146622689, 0.003065662009762019565850543756, 0.000510943668293669349400598634, 0.000072991952613381494386832204, 0.000009123994076672691880551709, 0.000001013777119630296956728018, 0.000000101377711963029325095887, 0.000000009216155633002717654195, 0.000000000768012969416889277673, 0.000000000059077920724376272269, 0.000000000004219851480312613610, 0.000000000000281323432020839302, 0.000000000000017582714501302516, 0.000000000000001034277323606021, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000},
	{0.000000000013887943864964030590, 0.000000000347198596624100680736, 0.000000004339982457801263291344, 0.000000036166520481677151908320, 0.000000226040753010482492248935, 0.000001130203765052411005406796, 0.000004709182354385050055733345, 0.000016818508408517966577636407, 0.000052557838776618838255109273, 0.000145993996601718979341799631, 0.000364984991504296852043304211, 0.000829511344327948539276174067, 0.001728148634016561787860033483, 0.003323362757724153664778965478, 0.005934576353078827026799046962, 0.009890960588464734262736932635, 0.015454625919476135467722777150, 0.022727391058053141720263212733, 0.031565820913962816529618748973, 0.041533974886793001424223348295, 0.051917468608491314230324320533, 0.061806510248203994084548185128, 0.070234670736595450346584357249, 0.076342033409342882621650971942, 0.079522951468065497526716001175, 0.079522951468065497526716001175, 0.076464376411601447935950659485, 0.070800348529260592744805080656, 0.063214596901125533201515338533, 0.054495342156142705103416545853, 0.045412785130118919763031470893, 0.036623213814612073924159574290, 0.028611885792665686656377488362, 0.021675671055049736124509252022, 0.015937993422830646489396499987, 0.011384281016307654446628738754, 0.007905750705769203079409379598, 0.005341723449844071325287586660, 0.003514291743318438600990338827, 0.002252751117511812232324652783, 0.001407969448444894950897565700, 0.000858517956368838337094517854, 0.000511022593076690813222728860, 0.000297106158765515976968168976, 0.000168810317480406877786378028, 0.000093783509711337014282984959, 0.000050969298756161654734373606, 0.000027111329125617993150276080, 0.000014120483919592669331557165, 0.000007204328530404456266348755, 0.000003602164265202201875153013, 0.000001765766796667749039976896, 0.000000848926344551801193239133, 0.000000400436954977262217641884, 0.000000185387479156138276409336, 0.000000084267035980064081351742, 0.000000037619212491100281872215, 0.000000016499654601359690961675, 0.000000007111920086793055270563, 0.000000003013525460505508761289, 0.000000001255635608543953574201, 0.000000000514604757599981949378, 0.000000000207501918387090660607, 0.000000000082342031105987271914, 0.000000000032164855900776441872, 0.000000000012371098423375625652, 0.000000000004686022130066459314, 0.000000000001748515720174052673, 0.000000000000642836661828701036, 0.000000000000232911833995910318, 0.000000000000083182797855681046, 0.000000000000029289717554817147, 0.000000000000010170040817644826, 0.000000000000003482890690974271, 0.000000000000001176652260464280, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000},
	{0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000004185655052005027, 0.000000000000029897536085750398, 0.000000000000186859600535939321, 0.000000000001038108891866325845, 0.000000000005190544459331648611, 0.000000000023593383906052879202, 0.000000000098305766275220573422, 0.000000000378099101058539245293, 0.000000001350353932351924007504, 0.000000004501179774506436932993, 0.000000014066186795332592047752, 0.000000041371137633331095081666, 0.000000114919826759253298503325, 0.000000302420596734877442645381, 0.000000756051491837190589058578, 0.000001800122599612360199108560, 0.000004091187726391730343348564, 0.000008893886361721106738613581, 0.000018528929920252447865807940, 0.000037057859840505004151833129, 0.000071265115077893967181731083, 0.000131972435329432390138659770, 0.000235665063088272129119757348, 0.000406319074290127201908723320, 0.000677198457150210105827403684, 0.001092255576048726606677718998, 0.001706649337576133466237715552, 0.002585832329660809648930186455, 0.003802694602442364783800865524, 0.005432420860631982650890137165, 0.007545028973099989107187202109, 0.010195985098783747965778267996, 0.013415769866820630162873584368, 0.017199704957462442350690778881, 0.021499631196827979212615744586, 0.026219062435156120782764332944, 0.031213169565662043924980650900, 0.036294383215886100169100814128, 0.041243617290779660544686180401, 0.045826241434199624369405512425, 0.049811131993695238751040932357, 0.052990565950739615397324655532, 0.055198506198687109780554038707, 0.056325006325190926648183165071, 0.056325006325190919709289261164, 0.055220594436461684084704870656, 0.053096725419674702106664909707, 0.050091250395919530158383992102, 0.046380787403629192278131654348, 0.042164352185117444371531547631, 0.037646743022426286395809569285, 0.033023458791602011697108309818, 0.028468498958277594496069085039, 0.024125846574811520700576394916, 0.020104872145676265515756853119, 0.016479403398095303356907237458, 0.013289841450076883902498003920, 0.010547493214346689502369791569, 0.008240229073708390042374283269, 0.006338637749006422253406078937, 0.004801998294701848891963269494, 0.003583580816941684711596227686, 0.002634985894810043180469527613, 0.001909410068702944432081358705, 0.001363864334787819000346931197, 0.000960467841399868403270967399, 0.000666991556527689083595789032, 0.000456843531868282180710000295, 0.000308678062073164101528771619, 0.000205785374715441478484997950, 0.000135385114944367872290634236, 0.000087912412301537835499463946, 0.000056354110449703226056253347, 0.000035667158512470506373862045, 0.000022291974070294381579920157, 0.000013760477821169350389407179, 0.000008390535256810593967274209, 0.000005054539311331662141096432, 0.000003008654351983157698333885, 0.000001769796677637147389459591, 0.000001028951556765774792218593, 0.000000591351469405615907685351, 0.000000335995153071373627733288, 0.000000188761321950211120830810, 0.000000104867401083449455072394, 0.000000057619451144753043193858, 0.000000031314919100409300727595, 0.000000016835978010972563015254, 0.000000008955307452645112852156, 0.000000004713319711918449146248, 0.000000002454854016624197106124, 0.000000001265388668362993211150, 0.000000000645606463450511914482, 0.000000000326063870429546498433, 0.000000000163031935214772783927, 0.000000000080708878819194413321, 0.000000000039563175891762229356, 0.000000000019205425190175653152, 0.000000000009233377495276785528, 0.000000000004396846426322294402, 0.000000000002073984163359544855, 0.000000000000969151478205401421, 0.000000000000448681239909898495, 0.000000000000205817082527481761, 0.000000000000093553219330673500, 0.000000000000042141089788591118, 0.000000000000018812986512764359, 0.000000000000008324330315382495, 0.000000000000003651022068150171, 0.000000000000001587400899195752, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000},
	{0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000002358715592765131, 0.000000000000009310719445125457, 0.000000000000034915197919220805, 0.000000000000124697135425787717, 0.000000000000425103870769733059, 0.000000000001386208274249131465, 0.000000000004331900857028511494, 0.000000000012995702571085521556, 0.000000000037487603570439257267, 0.000000000104132232140108578365, 0.000000000278925621803861368905, 0.000000000721359366734126916482, 0.000000001803398416835314085879, 0.000000004363060685891907162120, 0.000000010225923482559094131901, 0.000000023240735187634395383907, 0.000000051266327619781821670927, 0.000000109856416328103348660535, 0.000000228867534016881484479377, 0.000000463920677061250178435236, 0.000000915632915252456833304321, 0.000001760832529331662408395541, 0.000003301560992496891791455347, 0.000006039440839933319088840644, 0.000010784715785595138301251709, 0.000018810550788828714742582232, 0.000032063438844594528416391543, 0.000053439064740991059135593461, 0.000087128909903789965221004854, 0.000139035494527322601738400509, 0.000217242960198942036166569469, 0.000332514734998381447563658986, 0.000498772102497574421064996386, 0.000733488386025844991966682329, 0.001057915941383424322103090631, 0.001497050860448241940692248875, 0.002079237306178120456290336904, 0.002835323599333812883555028250, 0.003797308391964889905806357362, 0.004996458410480148631949148808, 0.006460937599758837142360778927, 0.008213056270879847894916814255, 0.010266320338599806832879934859, 0.012622525006475163178443210654, 0.015269183475574796965412716077, 0.018177599375684277971387814432, 0.021301874268380018018209653974, 0.024579085694284630303485528202, 0.027930779198050720985024852894, 0.031265797609758269604007807629, 0.034484335598998099026157859726, 0.037482973477171832588084043891, 0.040160328725541254157871406960, 0.042422882456557661767782008155, 0.044190502558914233899312051790, 0.045401201259158453782394104792, 0.046014731005903836136283757696, 0.046014731005903843075177661603, 0.045409274018984056853209807514, 0.044229812356153301589056781040, 0.042528665727070487367900142317, 0.040375315563674504804048126516, 0.037851858340944843916986428667, 0.035048016982356343385074382013, 0.032056113093618610054846840285, 0.028966367253269821591121768734, 0.025862827904705204540292129423, 0.022820142268857524642244882784, 0.019901286862375751340881180340, 0.017156281777910131064457388561, 0.014621831060718860559322074266, 0.012321767747796785394398533242, 0.010268139789830659988623118295, 0.008462752574036259967105166879, 0.006898983076660084555464802492, 0.005563696029564508746534379213, 0.004439119172524859900652582922, 0.003504567767782792737235597613, 0.002737943568580300957721052058, 0.002116966676737371509664509261, 0.001620127558727564066887172345, 0.001227369362672390889698603722, 0.000920527022004301786681224051, 0.000683559669805179018903240618, 0.000502617404268501828668025411, 0.000365983546797458395190283387, 0.000263930442402012974904140785, 0.000188521744572868970137372036, 0.000133388026820423775172658187, 0.000093496280481605796553422338, 0.000064927972556670638217338198, 0.000044675210474773204829754270, 0.000030460370778254761538281908, 0.000020581331606928810883539588, 0.000013782141701068316712482098, 0.000009147439182125102440893034, 0.000006018052093503329630212219, 0.000003924816582719511612060287, 0.000002537596928482451688055066, 0.000001626664697745161327637441, 0.000001033897053651616904695258, 0.000000651615790116554945291601, 0.000000407259868822846033478973, 0.000000252433802989366900104814, 0.000000155184714952479222980136, 0.000000094624826190537274952347, 0.000000057232757776534069806024, 0.000000034339654665920234095844, 0.000000020440270634476901125031, 0.000000012071025965241870041595, 0.000000007072866776508930470901, 0.000000004112131846807517638693, 0.000000002372383757773578271864, 0.000000001358234975824599298885, 0.000000000771724418082136090778, 0.000000000435182942527514165191, 0.000000000243572542459438031695, 0.000000000135318079144130780776, 0.000000000074623940704482633902, 0.000000000040852522283476387309, 0.000000000022202457762758715085, 0.000000000011979743397172193359, 0.000000000006417719677056348441, 0.000000000003413680679285406706, 0.000000000001803000358777512860, 0.000000000000945629558799363405, 0.000000000000492515395208014652, 0.000000000000254749342348965892, 0.000000000000130864388192961413, 0.000000000000066767544996411058, 0.000000000000033834904558990769, 0.000000000000017030992227680453, 0.000000000000008515496113840222, 0.000000000000004229551049920634, 0.000000000000002086949531210833, 0.000000000000001023014476083739, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000},
	{0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000001413774234662685, 0.000000000000004284164347462688, 0.000000000000012600483374890216, 0.000000000000036001381071115200, 0.000000000000100003836308653006, 0.000000000000270280638672034754, 0.000000000000711264838610620235, 0.000000000001823755996437484572, 0.000000000004559389991093676090, 0.000000000011120463392911535920, 0.000000000026477293792646258062, 0.000000000061575101843363720873, 0.000000000139943413280371533607, 0.000000000310985362845272372406, 0.000000000676055136620144465062, 0.000000001438415184298209047010, 0.000000002996698300621251184185, 0.000000006115710817594376075974, 0.000000012231421635188861339788, 0.000000023983179676840692959337, 0.000000046121499378539894432312, 0.000000087021696940640496179066, 0.000000161151290630814874867642, 0.000000293002346601486966440044, 0.000000523218476074074434057205, 0.000000917927151007159919657633, 0.000001582633018977864405824963, 0.000002682428845725182875214853, 0.000004470714742875299850999229, 0.000007329040562090697761774005, 0.000011821033164662357326847066, 0.000018763544705813352237539979, 0.000029318038602833131842919853, 0.000045104674773589299642973655, 0.000068340416323620475002806329, 0.000102000621378538357969002759, 0.000150000913791967400989779691, 0.000217392628684012707883724258, 0.000310560898120019253810381032, 0.000437409715661997910637892595, 0.000607513493975000615741899335, 0.000832210265719172362537670029, 0.001124608467188074499218397584, 0.001499477956250759927425697526, 0.001972997310856245030408206986, 0.002562334169943186138601598500, 0.003285043807619493060750981428, 0.004158283300784129839222647007, 0.005197854125980171623166992134, 0.006417103859234779203446485951, 0.007825736413700982996299870820, 0.009428598088796357259977476417, 0.011224521534281385951037357529, 0.013205319452095746340924975470, 0.015355022618715985852078098617, 0.017649451285880440876141506124, 0.020056194643045959641325381995, 0.022535050160725791229543446548, 0.025038944623028656921714940609, 0.027515323761569957655703788646, 0.029907960610402125473106238474, 0.032159097430539920758896244024, 0.034211805777170124776009885181, 0.036012427133863295081184219271, 0.037512944931107600199382545725, 0.038673139104234637020152121067, 0.039462386841055754893581308806, 0.039860996809147224151370636491, 0.039860996809147224151370636491, 0.039466333474403196557300788072, 0.038692483798434498809548642839, 0.037565518250907280195516335652, 0.036120690625872392542916600178, 0.034400657738926081197217143881, 0.032453450697100073851775192679, 0.030330327754299137715809919769, 0.028083636809536242223694912923, 0.025764804412418566836873168313, 0.023422549465835062337815131173, 0.021101395915166725608669295866, 0.018840532067113145014980446490, 0.016673037227533757387298862795, 0.014625471252222597973169371244, 0.012717801088889211028054582187, 0.010963621628352770639991398127, 0.009370616776369888531461604941, 0.007941200657940582913196791992, 0.006673277863815615419673665798, 0.005561064886513014150770661814, 0.004595921393812407371171069315, 0.003767148683452793168913164124, 0.003062722506872170031427815573, 0.002469937505542098375027615376, 0.001975950004433676705090094927, 0.001568214289233065515671849965, 0.001234814400970919321884333719, 0.000964698750758538722989421377, 0.000747828488960111952173204219, 0.000575252683815461124741674759, 0.000439124186118672766177689626, 0.000332669837968693521586260875, 0.000250127697720819921079621340, 0.000186662460985688813007096765, 0.000138268489619028112904905448, 0.000101668007072813800363390857, 0.000074210224140739289994117556, 0.000053775524739667495441146350, 0.000038687427870264213755364252, 0.000027633877050188914814392305, 0.000019598494361836295784250195, 0.000013801756592842213985212162, 0.000009651578036952607558243873, 0.000006702484747883803106141987, 0.000004622403274402643686357382, 0.000003166029640001823873091081, 0.000002153761659865147560789485, 0.000001455244364773777568798272, 0.000000976674070317956121179965, 0.000000651116046878639849339700, 0.000000431202680052081386334010, 0.000000283685973718467028701701, 0.000000185415669097038491098099, 0.000000120399785127946901291227, 0.000000077677280727708237533232, 0.000000049793128671606563163767, 0.000000031715368580641860858278, 0.000000020073018089013494266423, 0.000000012624539678625256986327, 0.000000007890337299140756044748, 0.000000004900830620584209327980, 0.000000003025204086780433637859, 0.000000001855953427472705524688, 0.000000001131678919190651241989, 0.000000000685866011630696870171, 0.000000000413172296163066315153, 0.000000000247408560576684187020, 0.000000000147267000343268424618, 0.000000000087140236889506994322, 0.000000000051258962876180899650, 0.000000000029976001681976921985, 0.000000000017427907954637533811, 0.000000000010073935233894458109, 0.000000000005789617950514084825, 0.000000000003308353114579542878, 0.000000000001879746087829253937, 0.000000000001062003439451543514, 0.000000000000596631145759310169, 0.000000000000333313489251012579, 0.000000000000185174160695001998, 0.000000000000102306166129835238, 0.000000000000056212179192218461, 0.000000000000030717037809955025, 0.000000000000016694042288019258, 0.000000000000009023806642172485, 0.000000000000004851508947404523, 0.000000000000002594389811446256, 0.000000000000001379994580556567, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000, 0.000000000000000000000000000000}
};

} // namespace CallHmm

#endif //_CALLHMM_H_