/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.11 and Signal Processing Toolbox 8.7.
 * Generated on: 10-Apr-2023 22:22:46
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 1001
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * D:\matlab\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   single-precision filter coefficients.
 */
const int BL = 1001;
const real32_T B[1001] = {
  4.410583642e-05,-1.320931824e-05,-5.115678141e-05,-1.327451446e-05,4.454226655e-05,
  3.647923222e-05,-2.587910058e-05,-5.016959039e-05,2.605309357e-18,5.055581641e-05,
  2.627902541e-05,-3.732785626e-05,-4.592864934e-05,1.379271362e-05,5.356097972e-05,
   1.39358508e-05,-4.688667468e-05,-3.850145004e-05,2.738584408e-05,5.322964353e-05,
  2.178757803e-19,-5.391693412e-05,-2.809745092e-05,4.001125853e-05,4.935278412e-05,
  -1.485741268e-05,-5.783538654e-05,-1.508397872e-05,5.086912279e-05,4.186865408e-05,
  -2.984897219e-05,-5.814762335e-05,3.391183465e-18,5.915668953e-05,3.089371239e-05,
  -4.408515088e-05,-5.448926458e-05,1.643666292e-05,6.410870992e-05,1.675227759e-05,
  -5.660153693e-05,-4.667241956e-05,3.333337372e-05,6.504914199e-05,-1.328069493e-19,
  -6.640124775e-05,-3.473325341e-05,4.964229811e-05,6.145195948e-05,-1.856457129e-05,
  -7.251303759e-05,-1.897501352e-05,6.419883721e-05,5.300680277e-05,-3.790571282e-05,
  -7.406331133e-05,4.788024547e-18,7.578035002e-05,3.968341116e-05,-5.677815716e-05,
  -7.035808812e-05,2.127626249e-05,8.318443724e-05,2.178749855e-05,-7.377949805e-05,
  -6.096879952e-05,4.363477638e-05,8.532336506e-05,-7.00361572e-19,-8.742802311e-05,
  -4.58137547e-05,6.559141912e-05,8.132888615e-05,-2.460807445e-05,-9.626374958e-05,
  -2.522629802e-05,8.546625759e-05,7.065895625e-05,-5.05918797e-05,-9.896756092e-05,
  7.015352689e-18,0.0001014834197, 5.31965743e-05,-7.618465315e-05,-9.449040954e-05,
  2.859782217e-05,0.0001118975852, 2.93294961e-05,-9.938702715e-05,-8.21820795e-05,
  5.885142673e-05,0.0001151401593,-1.655503872e-18,-0.0001180919353,-6.190741988e-05,
  8.866516146e-05,0.0001099746005,-3.32850941e-05,-0.000130239554,-3.413701779e-05,
  0.0001156759463,9.564819629e-05,-6.849154306e-05,-0.0001339927694,1.032464424e-17,
  0.0001374065469,7.202584675e-05,-0.0001031459396,-0.0001279205171,3.871164881e-05,
  0.0001514517644,3.969102181e-05,-0.0001344748016,-0.0001111736274,7.959490176e-05,
  0.0001556859061,-3.197555787e-18,-0.0001595894428,-8.363625238e-05,0.0001197470046,
  0.0001484759268,-4.492188236e-05,-0.0001757067221,-4.603640627e-05, 0.000155934642,
  0.0001288824133,-9.224972746e-05,-0.0001803909836,4.259798175e-18,0.0001848140819,
  9.682896052e-05,-0.0001385968644,-0.0001717991981,5.196342681e-05, 0.000203189571,
  5.322139259e-05,-0.0001802178886,-0.0001489080314,0.0001065510005,0.0002082927531,
  -5.55876125e-18,-0.0002132676746,-0.0001117015418,0.0001598344388,0.0001980616653,
  -5.98878396e-05,-0.0002341009676,-6.129829126e-05,0.0002075008088,0.0001713954553,
  -0.0001226019958,-0.000239592162,7.129741842e-18,0.0002451542532,0.0001283604215,
  -0.0001836114243,-0.0002274505387,6.875151303e-05,0.0002686605148,7.032438589e-05,
  -0.0002379766665,-0.0001965037663,0.0001405161311, 0.000274510181,-9.011160837e-18,
  -0.0002806984703,-0.0001469228882,0.0002100950951,  0.00026017247,-7.861675113e-05,
  -0.0003071110405,-8.036309737e-05,0.0002718595206,0.0002244093339,-0.0001604192512,
  -0.000313292112,1.124503487e-17, 0.000320150255,0.0001675195235,-0.0002394718904,
  -0.0002964579908,8.955311205e-05,0.0003497239377,9.148533718e-05,-0.0003093890264,
  -0.0002553097729,0.0001824524952,0.0003562133934,-1.387757274e-17,-0.0003637906921,
  -0.0001902973017,0.0002719518379,0.0003365670273,-0.0001016390888,-0.0003968056699,
  -0.0001037712864,0.0003508363443,0.0002894288918,-0.0002067758469,-0.0004035864258,
  1.695993887e-17,0.0004119391378,0.0002154234389,-0.0003077740257,-0.000380795711,
  0.0001149642048,0.0004487060942, 0.000117312542,-0.0003965115466,-0.0003270228044,
  0.0002335725294,0.0004557694774,-2.054922775e-17,-0.0004649625043,-0.0002430901077,
  0.0003472135868,0.0004294851678,-0.0001296316477,-0.0005058289389,-0.0001322148892,
  0.0004467730178,0.0003683878167,-0.0002630547388,-0.0005131776561,-5.78637323e-18,
  0.0005232866388,0.0002735206217,-0.0003905904596,-0.0004830323451,0.0001457616308,
  0.0005686446675,0.0001486017281,-0.0005020392709,-0.0004138703225,0.0002954707306,
  0.0005762970541,4.725590609e-18,-0.0005874111084,-0.000306977221,0.0004382806073,
  0.0005419041845,-0.0001634956716,-0.000637707999,-0.0001666186581,0.0005628043436,
  0.0004638794926,-0.0003311139881,-0.0006457029958,-3.309664609e-18,0.0006579282344,
  0.0003437709529,-0.0004907305702,-0.0006066557253,0.0001830021356,0.0007136790664,
   0.000186439167,-0.0006296576466,-0.000518903893,0.0003703353286,0.0007220835541,
  1.482124334e-18,-0.0007355477428,-0.0003842750157,0.0005484763533,0.0006779538235,
  -0.0002044834691,-0.0007973527536,-0.0002082722349,0.0007033097791, 0.000579533109,
  -0.000413558475,-0.0008062708075,8.221582821e-19,0.0008211291861, 0.000428941712,
   -0.00061216834,-0.0007566083805,0.0002281858178,0.0008896960644,0.0002323724329,
  -0.0007846270455,-0.0006464867038,0.0004613009514,0.0008992817602,-3.679375052e-18,
  -0.0009157256573,-0.0004783257609,0.0006826047902,0.0008436145145,-0.0002544118906,
  -0.0009918995202,-0.0002590534277, 0.000874677964,0.0007206529262,-0.0005142023438,
  -0.001002374804,7.180070819e-18, 0.001020642347,0.0005331153516,-0.0007607772131,
  -0.000940209371,0.0002835383639, 0.001105446252,0.0002887063893,-0.000974796596,
  -0.0008031420875,0.0005730629782, 0.001117125968,-1.143369326e-17,-0.001137517742,
  -0.0005941753625,0.0008479330572, 0.001047951053,-0.0003160402703,-0.001232208568,
  -0.0003218257625, 0.001086670905,0.0008953605429,-0.0006388976471,-0.001245536492,
  1.657500376e-17, 0.001268437016,0.0006626078393,-0.0009456637199,-0.001168830087,
  0.0003525251523, 0.001374583924,0.0003590453707,-0.001212467789,-0.0009991159895,
  0.0007130127051, 0.001390185091,-2.277326495e-17,-0.001416094834,-0.0007398388116,
   0.001056031091, 0.001305428799,-0.0003937822767, -0.00153569167,-0.0004011911224,
   0.001355014509, 0.001116770552,-0.0007971173036,-0.001554451534,3.024571021e-17,
   0.001584032783,0.0008277453016,-0.001181753585, -0.00146115711,0.0004408555396,
   0.001719663735,0.0004493587476,-0.001518068253,-0.001251468435,0.0008934905054,
   0.001742849476,-3.927778134e-17,-0.001776997349,-0.000928847352, 0.001326487283,
   0.001640609116,-0.0004951538285,-0.001932087238,-0.0005050326581, 0.001706728479,
   0.001407485106,-0.001005237224,-0.001961540431,-8.04629932e-18, 0.002001493471,
   0.001046605874,-0.001495263306,-0.001850120258,0.0005586242769, 0.002180699725,
   0.000570273085,-0.001928088372,-0.001590780914, 0.001136695966, 0.002219153801,
  2.280503862e-18,-0.002266674303,-0.001185901929,  0.00169519498, 0.002098669996,
  -0.0006340334658, -0.00247652363,-0.0006480223383, 0.002192304935, 0.001809913898,
  -0.001294112648,-0.002528146608,5.183214634e-18, 0.002585827606, 0.001353842439,
  -0.001936669461,-0.002399409423, 0.000725445454, 0.002835800871,0.0007426298689,
  -0.002514440101,-0.002077615121, 0.001486809459, 0.002907174407,-1.492374611e-17,
  -0.002978990553, -0.00156118162, 0.002235461492,  0.00277238409,-0.000839078275,
  -0.003283475526,-0.0008608010248, 0.002917806152, 0.002413669135, -0.00172933354,
   -0.00338546955,2.784535118e-17, 0.003477831138, 0.001824991661,-0.002616726561,
  -0.003249707865,0.0009849402122, 0.003859889926, 0.001013434259,-0.003440482775,
  -0.002850559773, 0.002045693342, 0.004011536483,-4.544959758e-17,-0.004135479685,
  -0.002174079418, 0.003123159753, 0.003886213526,-0.001180225168,-0.004634787329,
  -0.001219491591, 0.004149164539, 0.003445564304,-0.002478517592,-0.004872112535,
  -2.521161514e-18, 0.005048357882,  0.00266112783,-0.003833461786,-0.004783797543,
   0.001457151957, 0.005739982706, 0.001515129232,-0.005172179081,-0.004309927579,
   0.003111400874, 0.006138983648,-1.590498084e-17,-0.006411449518,-0.003393838881,
   0.004910347518, 0.006155600306, -0.00188393076,-0.007458037697,-0.001978859538,
   0.006791941822, 0.005691889673,-0.004133588634,-0.008206910454,4.709635205e-17,
   0.008687265217, 0.004632029682,-0.006753303576,-0.008534593508, 0.002634424716,
    0.01052376442, 0.002819186309,-0.009775148705,-0.008281124756,  0.00608378835,
    0.01222876646,-1.615741982e-17, -0.01330374554,-0.007202495355,  0.01067508012,
    0.01373307873,-0.004321791697, -0.01763172261,-0.004833399318,  0.01718882658,
    0.01497447677, -0.01134786848, -0.02361452952,1.622098038e-17,  0.02792024985,
    0.01590087637, -0.02499012835, -0.03443766385,  0.01176387444,   0.0530337356,
    0.01647301391, -0.06890535355, -0.07501941919,  0.07957372069,   0.3074576259,
     0.4166621566,   0.3074576259,  0.07957372069, -0.07501941919, -0.06890535355,
    0.01647301391,   0.0530337356,  0.01176387444, -0.03443766385, -0.02499012835,
    0.01590087637,  0.02792024985,1.622098038e-17, -0.02361452952, -0.01134786848,
    0.01497447677,  0.01718882658,-0.004833399318, -0.01763172261,-0.004321791697,
    0.01373307873,  0.01067508012,-0.007202495355, -0.01330374554,-1.615741982e-17,
    0.01222876646,  0.00608378835,-0.008281124756,-0.009775148705, 0.002819186309,
    0.01052376442, 0.002634424716,-0.008534593508,-0.006753303576, 0.004632029682,
   0.008687265217,4.709635205e-17,-0.008206910454,-0.004133588634, 0.005691889673,
   0.006791941822,-0.001978859538,-0.007458037697, -0.00188393076, 0.006155600306,
   0.004910347518,-0.003393838881,-0.006411449518,-1.590498084e-17, 0.006138983648,
   0.003111400874,-0.004309927579,-0.005172179081, 0.001515129232, 0.005739982706,
   0.001457151957,-0.004783797543,-0.003833461786,  0.00266112783, 0.005048357882,
  -2.521161514e-18,-0.004872112535,-0.002478517592, 0.003445564304, 0.004149164539,
  -0.001219491591,-0.004634787329,-0.001180225168, 0.003886213526, 0.003123159753,
  -0.002174079418,-0.004135479685,-4.544959758e-17, 0.004011536483, 0.002045693342,
  -0.002850559773,-0.003440482775, 0.001013434259, 0.003859889926,0.0009849402122,
  -0.003249707865,-0.002616726561, 0.001824991661, 0.003477831138,2.784535118e-17,
   -0.00338546955, -0.00172933354, 0.002413669135, 0.002917806152,-0.0008608010248,
  -0.003283475526,-0.000839078275,  0.00277238409, 0.002235461492, -0.00156118162,
  -0.002978990553,-1.492374611e-17, 0.002907174407, 0.001486809459,-0.002077615121,
  -0.002514440101,0.0007426298689, 0.002835800871, 0.000725445454,-0.002399409423,
  -0.001936669461, 0.001353842439, 0.002585827606,5.183214634e-18,-0.002528146608,
  -0.001294112648, 0.001809913898, 0.002192304935,-0.0006480223383, -0.00247652363,
  -0.0006340334658, 0.002098669996,  0.00169519498,-0.001185901929,-0.002266674303,
  2.280503862e-18, 0.002219153801, 0.001136695966,-0.001590780914,-0.001928088372,
   0.000570273085, 0.002180699725,0.0005586242769,-0.001850120258,-0.001495263306,
   0.001046605874, 0.002001493471,-8.04629932e-18,-0.001961540431,-0.001005237224,
   0.001407485106, 0.001706728479,-0.0005050326581,-0.001932087238,-0.0004951538285,
   0.001640609116, 0.001326487283,-0.000928847352,-0.001776997349,-3.927778134e-17,
   0.001742849476,0.0008934905054,-0.001251468435,-0.001518068253,0.0004493587476,
   0.001719663735,0.0004408555396, -0.00146115711,-0.001181753585,0.0008277453016,
   0.001584032783,3.024571021e-17,-0.001554451534,-0.0007971173036, 0.001116770552,
   0.001355014509,-0.0004011911224, -0.00153569167,-0.0003937822767, 0.001305428799,
   0.001056031091,-0.0007398388116,-0.001416094834,-2.277326495e-17, 0.001390185091,
  0.0007130127051,-0.0009991159895,-0.001212467789,0.0003590453707, 0.001374583924,
  0.0003525251523,-0.001168830087,-0.0009456637199,0.0006626078393, 0.001268437016,
  1.657500376e-17,-0.001245536492,-0.0006388976471,0.0008953605429, 0.001086670905,
  -0.0003218257625,-0.001232208568,-0.0003160402703, 0.001047951053,0.0008479330572,
  -0.0005941753625,-0.001137517742,-1.143369326e-17, 0.001117125968,0.0005730629782,
  -0.0008031420875,-0.000974796596,0.0002887063893, 0.001105446252,0.0002835383639,
  -0.000940209371,-0.0007607772131,0.0005331153516, 0.001020642347,7.180070819e-18,
  -0.001002374804,-0.0005142023438,0.0007206529262, 0.000874677964,-0.0002590534277,
  -0.0009918995202,-0.0002544118906,0.0008436145145,0.0006826047902,-0.0004783257609,
  -0.0009157256573,-3.679375052e-18,0.0008992817602,0.0004613009514,-0.0006464867038,
  -0.0007846270455,0.0002323724329,0.0008896960644,0.0002281858178,-0.0007566083805,
   -0.00061216834, 0.000428941712,0.0008211291861,8.221582821e-19,-0.0008062708075,
  -0.000413558475, 0.000579533109,0.0007033097791,-0.0002082722349,-0.0007973527536,
  -0.0002044834691,0.0006779538235,0.0005484763533,-0.0003842750157,-0.0007355477428,
  1.482124334e-18,0.0007220835541,0.0003703353286,-0.000518903893,-0.0006296576466,
   0.000186439167,0.0007136790664,0.0001830021356,-0.0006066557253,-0.0004907305702,
  0.0003437709529,0.0006579282344,-3.309664609e-18,-0.0006457029958,-0.0003311139881,
  0.0004638794926,0.0005628043436,-0.0001666186581,-0.000637707999,-0.0001634956716,
  0.0005419041845,0.0004382806073,-0.000306977221,-0.0005874111084,4.725590609e-18,
  0.0005762970541,0.0002954707306,-0.0004138703225,-0.0005020392709,0.0001486017281,
  0.0005686446675,0.0001457616308,-0.0004830323451,-0.0003905904596,0.0002735206217,
  0.0005232866388,-5.78637323e-18,-0.0005131776561,-0.0002630547388,0.0003683878167,
  0.0004467730178,-0.0001322148892,-0.0005058289389,-0.0001296316477,0.0004294851678,
  0.0003472135868,-0.0002430901077,-0.0004649625043,-2.054922775e-17,0.0004557694774,
  0.0002335725294,-0.0003270228044,-0.0003965115466, 0.000117312542,0.0004487060942,
  0.0001149642048,-0.000380795711,-0.0003077740257,0.0002154234389,0.0004119391378,
  1.695993887e-17,-0.0004035864258,-0.0002067758469,0.0002894288918,0.0003508363443,
  -0.0001037712864,-0.0003968056699,-0.0001016390888,0.0003365670273,0.0002719518379,
  -0.0001902973017,-0.0003637906921,-1.387757274e-17,0.0003562133934,0.0001824524952,
  -0.0002553097729,-0.0003093890264,9.148533718e-05,0.0003497239377,8.955311205e-05,
  -0.0002964579908,-0.0002394718904,0.0001675195235, 0.000320150255,1.124503487e-17,
  -0.000313292112,-0.0001604192512,0.0002244093339,0.0002718595206,-8.036309737e-05,
  -0.0003071110405,-7.861675113e-05,  0.00026017247,0.0002100950951,-0.0001469228882,
  -0.0002806984703,-9.011160837e-18, 0.000274510181,0.0001405161311,-0.0001965037663,
  -0.0002379766665,7.032438589e-05,0.0002686605148,6.875151303e-05,-0.0002274505387,
  -0.0001836114243,0.0001283604215,0.0002451542532,7.129741842e-18,-0.000239592162,
  -0.0001226019958,0.0001713954553,0.0002075008088,-6.129829126e-05,-0.0002341009676,
  -5.98878396e-05,0.0001980616653,0.0001598344388,-0.0001117015418,-0.0002132676746,
  -5.55876125e-18,0.0002082927531,0.0001065510005,-0.0001489080314,-0.0001802178886,
  5.322139259e-05, 0.000203189571,5.196342681e-05,-0.0001717991981,-0.0001385968644,
  9.682896052e-05,0.0001848140819,4.259798175e-18,-0.0001803909836,-9.224972746e-05,
  0.0001288824133, 0.000155934642,-4.603640627e-05,-0.0001757067221,-4.492188236e-05,
  0.0001484759268,0.0001197470046,-8.363625238e-05,-0.0001595894428,-3.197555787e-18,
  0.0001556859061,7.959490176e-05,-0.0001111736274,-0.0001344748016,3.969102181e-05,
  0.0001514517644,3.871164881e-05,-0.0001279205171,-0.0001031459396,7.202584675e-05,
  0.0001374065469,1.032464424e-17,-0.0001339927694,-6.849154306e-05,9.564819629e-05,
  0.0001156759463,-3.413701779e-05,-0.000130239554,-3.32850941e-05,0.0001099746005,
  8.866516146e-05,-6.190741988e-05,-0.0001180919353,-1.655503872e-18,0.0001151401593,
  5.885142673e-05,-8.21820795e-05,-9.938702715e-05, 2.93294961e-05,0.0001118975852,
  2.859782217e-05,-9.449040954e-05,-7.618465315e-05, 5.31965743e-05,0.0001014834197,
  7.015352689e-18,-9.896756092e-05,-5.05918797e-05,7.065895625e-05,8.546625759e-05,
  -2.522629802e-05,-9.626374958e-05,-2.460807445e-05,8.132888615e-05,6.559141912e-05,
  -4.58137547e-05,-8.742802311e-05,-7.00361572e-19,8.532336506e-05,4.363477638e-05,
  -6.096879952e-05,-7.377949805e-05,2.178749855e-05,8.318443724e-05,2.127626249e-05,
  -7.035808812e-05,-5.677815716e-05,3.968341116e-05,7.578035002e-05,4.788024547e-18,
  -7.406331133e-05,-3.790571282e-05,5.300680277e-05,6.419883721e-05,-1.897501352e-05,
  -7.251303759e-05,-1.856457129e-05,6.145195948e-05,4.964229811e-05,-3.473325341e-05,
  -6.640124775e-05,-1.328069493e-19,6.504914199e-05,3.333337372e-05,-4.667241956e-05,
  -5.660153693e-05,1.675227759e-05,6.410870992e-05,1.643666292e-05,-5.448926458e-05,
  -4.408515088e-05,3.089371239e-05,5.915668953e-05,3.391183465e-18,-5.814762335e-05,
  -2.984897219e-05,4.186865408e-05,5.086912279e-05,-1.508397872e-05,-5.783538654e-05,
  -1.485741268e-05,4.935278412e-05,4.001125853e-05,-2.809745092e-05,-5.391693412e-05,
  2.178757803e-19,5.322964353e-05,2.738584408e-05,-3.850145004e-05,-4.688667468e-05,
   1.39358508e-05,5.356097972e-05,1.379271362e-05,-4.592864934e-05,-3.732785626e-05,
  2.627902541e-05,5.055581641e-05,2.605309357e-18,-5.016959039e-05,-2.587910058e-05,
  3.647923222e-05,4.454226655e-05,-1.327451446e-05,-5.115678141e-05,-1.320931824e-05,
  4.410583642e-05
};
