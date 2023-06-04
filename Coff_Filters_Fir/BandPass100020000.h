/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.11 and Signal Processing Toolbox 8.7.
 * Generated on: 10-Apr-2023 23:03:54
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
  1.864296974e-05,-5.659274029e-05,-3.617650873e-05,-1.504706961e-05,-8.909242024e-05,
  3.927359103e-06,-9.482690075e-05,-2.55276027e-05,-5.213764962e-05,-7.806799113e-05,
  -5.251036328e-06,-0.0001015697489,-2.203999478e-19,-6.893013779e-05,-3.787668538e-05,
  -5.856668395e-06,-7.396325964e-05, 3.36154153e-05,-6.161508645e-05,2.036253863e-05,
  5.716312273e-19,-2.062545354e-05,6.321612454e-05,-3.493362237e-05,7.785351772e-05,
  6.243963071e-06,4.089941649e-05,7.538333011e-05,1.322185137e-19,0.0001139253436,
  5.964378033e-06,8.979121776e-05, 6.07193906e-05,3.010047476e-05,0.0001132015677,
  -4.746213563e-06,0.0001089881844,1.863146099e-05,4.533572064e-05, 7.17718649e-05,
  -2.39247438e-05,9.127178782e-05,-4.048405754e-05,4.246581011e-05,-6.656939673e-19,
  -4.334850018e-05,4.218424147e-05,-9.707962454e-05,2.597495586e-05,-7.953627937e-05,
  -5.127900295e-05,-2.150876026e-05,-0.0001284090395,5.706719094e-06,-0.000138895135,
  -3.768535316e-05,-7.756354171e-05,-0.0001170195756,-7.929481399e-06,-0.0001544943516,
  6.210189764e-19,-0.0001063297386,-5.882548794e-05,-9.156394299e-06,-0.0001163864144,
  5.323153891e-05,-9.817336104e-05,3.263971303e-05,-1.20372853e-18,-3.344483048e-05,
  0.0001030758285,-5.726752352e-05,0.0001282954909,1.034176785e-05,6.807477621e-05,
   0.000126070343,1.368358048e-18, 0.000192264255, 1.01091955e-05,0.0001528251305,
  0.0001037611219,5.163742389e-05, 0.000194924316,-8.202049685e-06,0.0001889975538,
  3.241650847e-05,7.913055015e-05, 0.000125656501,-4.200961848e-05,0.0001607138693,
  -7.147625001e-05,7.516655751e-05,-3.133728463e-18,-7.709355123e-05,7.518781786e-05,
  -0.0001733920653,4.648485265e-05,-0.0001426034869,-9.210142889e-05,-3.869535431e-05,
  -0.0002313723817,1.029749728e-05,-0.0002509685582,-6.817903341e-05,-0.0001404888026,
  -0.0002121823782,-1.439210064e-05,-0.0002806619159,2.820527277e-18,-0.0001934644097,
  -0.0001071020524, -1.6680513e-05,-0.0002121326543,  9.7065109e-05,-0.0001790796377,
  5.955628876e-05,-6.075893889e-18,-6.104955537e-05,0.0001881722128,-0.0001045504832,
  0.0002342192893,1.887883082e-05,0.0001242544095,0.0002300704364,-6.272885298e-18,
  0.0003506913199, 1.84332057e-05,0.0002785586985,0.0001890492567,9.403825243e-05,
  0.0003548033128,-1.492135652e-05,0.0003436288389,5.890213652e-05,0.0001436894381,
  0.0002280166518,-7.617579104e-05,0.0002912019845,-0.0001294083486,0.0001359790331,
  -1.229465924e-17,-0.0001392268023,0.0001356637949,-0.000312569493,8.371812146e-05,
  -0.0002565777395,-0.0001655490341,-6.948348891e-05,-0.0004150383756,1.845245788e-05,
  -0.0004492415464,-0.0001219107799,-0.0002509323531,-0.0003785657464,-2.564879287e-05,
  -0.000499609916,-6.832291002e-18,-0.0003435909166,-0.0001899884955,-2.955446507e-05,
  -0.000375405798,0.0001715664112,-0.0003161455679,0.0001050114806,-1.753115506e-17,
  -0.0001073787571,0.0003305600549,-0.0001834329305,0.0004104194522,3.303940684e-05,
   0.000217179535,0.0004016206949,-7.260335463e-18,0.0006106217043,3.205474059e-05,
  0.0004837838351,0.0003279079974,0.0001629008475,0.0006138295284,-2.578157546e-05,
  0.0005929684849,0.0001015111993,0.0002473140485,0.0003919510636,-0.0001307747734,
  0.0004992794129,-0.0002215922577,0.0002325455571,-2.702682453e-17,-0.0002374922187,
  0.0002311199351,-0.0005318243639,0.0001422625646,-0.000435452821,-0.0002806088305,
  -0.0001176279329,-0.0007017348544,3.115995059e-05,-0.0007576736389,-0.0002053553617,
  -0.000422167097,-0.0006361139822,-4.304559479e-05,-0.0008374585304,-6.251307464e-18,
  -0.0005745423841,-0.0003173112345,-4.930166688e-05,-0.0006254930049,0.0002855219063,
  -0.0005255120923,0.0001743506582,-4.040165179e-17,-0.0001778673613,0.0005469255266,
  -0.0003031503584,0.0006775085349,5.447888179e-05,  0.00035770674,0.0006607539253,
  -6.00306105e-18, 0.001002389705, 5.25632131e-05, 0.000792445906,0.0005365402321,
  0.0002662619518, 0.001002241625,-4.205102232e-05,0.0009661502554,0.0001652252831,
  0.0004021281202,0.0006366550806,-0.0002122055448,0.0008093576762,-0.0003588551772,
  0.0003762220149,6.500313644e-18,-0.0003834775707,0.0003728300508,-0.0008570940699,
  0.0002290559351,-0.0007004652871,-0.0004509675782,-0.0001888673578,-0.001125708455,
  4.994132541e-05,-0.001213276875, -0.00032855061,-0.0006748436717,-0.001015968854,
  -6.869181379e-05,-0.001335286535,-1.893703247e-18,-0.000914567092,-0.0005046920269,
  -7.835275755e-05,-0.0009932786925,0.0004530522565,-0.0008332130965,0.0002762268123,
  3.888585572e-18,-0.0002813774045,0.0008645757916,-0.0004788718361, 0.001069465303,
  8.593603707e-05,0.0005638634902, 0.001040856354,1.411969388e-18, 0.001576919691,
  8.263665222e-05, 0.001245038584,0.0008424468106, 0.000417812058, 0.001571739791,
  -6.590611883e-05, 0.001513350871,0.0002586556366,0.0006291658501,0.0009955542628,
  -0.0003316517686, 0.001264258288,-0.0005602593301,0.0005870750174,-8.394972492e-18,
  -0.0005978100235,0.0005809363211,-0.001334890141,0.0003565850202,-0.001089978032,
  -0.0007014409639,-0.0002936449891, -0.00174951076,7.758558786e-05,-0.001884154161,
  -0.000510034617,-0.001047241152,-0.001576069859,-0.0001065263277,-0.002070088172,
  1.168636964e-17,-0.001417004503,-0.0007817377336,-0.0001213314899,-0.001537731849,
  0.0007012191927,-0.001289327629,0.0004273468512,-2.172594015e-17,-0.0004351475218,
   0.001336828107,-0.0007403259515, 0.001653132378,0.0001328188082, 0.000871380209,
   0.001608348684,-1.871805832e-17, 0.002436291659,0.0001276636031, 0.001923350035,
   0.001301384647,0.0006454139948, 0.002427945612,-0.0001018102776, 0.002337867394,
   0.000399598066,0.0009720637463, 0.001538259792,-0.0005124945892, 0.001953853993,
  -0.0008659684099, 0.000907549751,-4.679589027e-17,-0.0009244643152,0.0008985492168,
  -0.002065156121,0.0005517880199,-0.001687083277,-0.001085994183,-0.0004547624267,
  -0.002710269066,0.0001202316635,-0.002920818748,-0.0007909457199,-0.001624655095,
  -0.002446054015,-0.0001653988584,-0.003215572098,-1.327859306e-17,-0.002203209093,
   -0.00121609366,-0.0001888471161,-0.002394737443, 0.001092650578,-0.002010253724,
  0.0006667118869,-7.722369602e-17,-0.0006797749083, 0.002089802641,-0.001158149098,
   0.002588044386,0.0002080929116, 0.001366312965, 0.002523939125,-6.57360805e-18,
   0.003829791443,0.0002008650335, 0.003028999316, 0.002051457064, 0.001018412411,
   0.003835001495,-0.0001609802421, 0.003700568341,0.0006332177436, 0.001542124199,
   0.002443223493,-0.0008149782079, 0.003110904014,-0.001380540314, 0.001448722556,
  3.139563601e-18,-0.001479745144, 0.001440302003, -0.00331509416,0.0008870808524,
  -0.002716392512,-0.001751321717,-0.0007345532067,-0.004384998232,0.0001948555728,
  -0.004741922487,-0.001286387327,-0.002647166606,-0.003993019927,-0.0002705228108,
  -0.005269711372,1.020796132e-17,-0.003625468817,-0.002005391754,-0.0003120969632,
  -0.003966503777, 0.001813954907,-0.003345155157, 0.001112114289,-2.835762744e-17,
  -0.001139587024, 0.003512483789,-0.001951769693, 0.004373407923,0.0003526302753,
   0.002321973443, 0.004301918671,-2.302724084e-17, 0.006567636039,0.0003455528931,
   0.005227821879, 0.003552481066, 0.001769611728, 0.006687183399,-0.0002817171044,
   0.006499991287, 0.001116459956, 0.002729596104, 0.004341860767, -0.00145424786,
   0.005574505776,-0.002484536031, 0.002618837636,-9.245644537e-17,-0.002699750941,
   0.002640463645,-0.006107597612, 0.001642652554, -0.00505644409,-0.003277580021,
  -0.001382331131,-0.008299063891,0.0003709499142, -0.00908185076,-0.002479058458,
  -0.005134192295,-0.007795644458,-0.0005317426985, -0.01043091621, 5.90088067e-18,
  -0.007282227743,-0.004059140105,-0.0006367468741,-0.008159060031, 0.003762975335,
  -0.007000304293, 0.002348414855,-3.022214218e-17,-0.002452644287, 0.007635757793,
  -0.004287199117, 0.009710397571,0.0007917390903, 0.005274096038, 0.009889501147,
  -1.795275909e-17,  0.01548773143,0.0008259676397,   0.0126730632, 0.008739014156,
   0.004420308396,  0.01697280817,-0.0007270615315,  0.01707069948, 0.002986201085,
   0.007442084141,  0.01207825262,-0.004131829832,  0.01619442552,-0.007388884202,
   0.007983263582,-3.393358578e-17,-0.008685038425, 0.008747576736, -0.02087600343,
   0.005804796237,  -0.0185158737, -0.01246861462,-0.005478806328, -0.03438070044,
   0.001612154185, -0.04158116505, -0.01201569103,  -0.0264932178, -0.04311428592,
  -0.003177289851, -0.06799857318,-6.935401547e-18, -0.05879085883, -0.03750383481,
  -0.006922934204,  -0.1086975038,  0.06549905986,  -0.1790319681,   0.1176152453,
     0.7917281985,   0.1176152453,  -0.1790319681,  0.06549905986,  -0.1086975038,
  -0.006922934204, -0.03750383481, -0.05879085883,-6.935401547e-18, -0.06799857318,
  -0.003177289851, -0.04311428592,  -0.0264932178, -0.01201569103, -0.04158116505,
   0.001612154185, -0.03438070044,-0.005478806328, -0.01246861462,  -0.0185158737,
   0.005804796237, -0.02087600343, 0.008747576736,-0.008685038425,-3.393358578e-17,
   0.007983263582,-0.007388884202,  0.01619442552,-0.004131829832,  0.01207825262,
   0.007442084141, 0.002986201085,  0.01707069948,-0.0007270615315,  0.01697280817,
   0.004420308396, 0.008739014156,   0.0126730632,0.0008259676397,  0.01548773143,
  -1.795275909e-17, 0.009889501147, 0.005274096038,0.0007917390903, 0.009710397571,
  -0.004287199117, 0.007635757793,-0.002452644287,-3.022214218e-17, 0.002348414855,
  -0.007000304293, 0.003762975335,-0.008159060031,-0.0006367468741,-0.004059140105,
  -0.007282227743, 5.90088067e-18, -0.01043091621,-0.0005317426985,-0.007795644458,
  -0.005134192295,-0.002479058458, -0.00908185076,0.0003709499142,-0.008299063891,
  -0.001382331131,-0.003277580021, -0.00505644409, 0.001642652554,-0.006107597612,
   0.002640463645,-0.002699750941,-9.245644537e-17, 0.002618837636,-0.002484536031,
   0.005574505776, -0.00145424786, 0.004341860767, 0.002729596104, 0.001116459956,
   0.006499991287,-0.0002817171044, 0.006687183399, 0.001769611728, 0.003552481066,
   0.005227821879,0.0003455528931, 0.006567636039,-2.302724084e-17, 0.004301918671,
   0.002321973443,0.0003526302753, 0.004373407923,-0.001951769693, 0.003512483789,
  -0.001139587024,-2.835762744e-17, 0.001112114289,-0.003345155157, 0.001813954907,
  -0.003966503777,-0.0003120969632,-0.002005391754,-0.003625468817,1.020796132e-17,
  -0.005269711372,-0.0002705228108,-0.003993019927,-0.002647166606,-0.001286387327,
  -0.004741922487,0.0001948555728,-0.004384998232,-0.0007345532067,-0.001751321717,
  -0.002716392512,0.0008870808524, -0.00331509416, 0.001440302003,-0.001479745144,
  3.139563601e-18, 0.001448722556,-0.001380540314, 0.003110904014,-0.0008149782079,
   0.002443223493, 0.001542124199,0.0006332177436, 0.003700568341,-0.0001609802421,
   0.003835001495, 0.001018412411, 0.002051457064, 0.003028999316,0.0002008650335,
   0.003829791443,-6.57360805e-18, 0.002523939125, 0.001366312965,0.0002080929116,
   0.002588044386,-0.001158149098, 0.002089802641,-0.0006797749083,-7.722369602e-17,
  0.0006667118869,-0.002010253724, 0.001092650578,-0.002394737443,-0.0001888471161,
   -0.00121609366,-0.002203209093,-1.327859306e-17,-0.003215572098,-0.0001653988584,
  -0.002446054015,-0.001624655095,-0.0007909457199,-0.002920818748,0.0001202316635,
  -0.002710269066,-0.0004547624267,-0.001085994183,-0.001687083277,0.0005517880199,
  -0.002065156121,0.0008985492168,-0.0009244643152,-4.679589027e-17, 0.000907549751,
  -0.0008659684099, 0.001953853993,-0.0005124945892, 0.001538259792,0.0009720637463,
   0.000399598066, 0.002337867394,-0.0001018102776, 0.002427945612,0.0006454139948,
   0.001301384647, 0.001923350035,0.0001276636031, 0.002436291659,-1.871805832e-17,
   0.001608348684, 0.000871380209,0.0001328188082, 0.001653132378,-0.0007403259515,
   0.001336828107,-0.0004351475218,-2.172594015e-17,0.0004273468512,-0.001289327629,
  0.0007012191927,-0.001537731849,-0.0001213314899,-0.0007817377336,-0.001417004503,
  1.168636964e-17,-0.002070088172,-0.0001065263277,-0.001576069859,-0.001047241152,
  -0.000510034617,-0.001884154161,7.758558786e-05, -0.00174951076,-0.0002936449891,
  -0.0007014409639,-0.001089978032,0.0003565850202,-0.001334890141,0.0005809363211,
  -0.0005978100235,-8.394972492e-18,0.0005870750174,-0.0005602593301, 0.001264258288,
  -0.0003316517686,0.0009955542628,0.0006291658501,0.0002586556366, 0.001513350871,
  -6.590611883e-05, 0.001571739791, 0.000417812058,0.0008424468106, 0.001245038584,
  8.263665222e-05, 0.001576919691,1.411969388e-18, 0.001040856354,0.0005638634902,
  8.593603707e-05, 0.001069465303,-0.0004788718361,0.0008645757916,-0.0002813774045,
  3.888585572e-18,0.0002762268123,-0.0008332130965,0.0004530522565,-0.0009932786925,
  -7.835275755e-05,-0.0005046920269,-0.000914567092,-1.893703247e-18,-0.001335286535,
  -6.869181379e-05,-0.001015968854,-0.0006748436717, -0.00032855061,-0.001213276875,
  4.994132541e-05,-0.001125708455,-0.0001888673578,-0.0004509675782,-0.0007004652871,
  0.0002290559351,-0.0008570940699,0.0003728300508,-0.0003834775707,6.500313644e-18,
  0.0003762220149,-0.0003588551772,0.0008093576762,-0.0002122055448,0.0006366550806,
  0.0004021281202,0.0001652252831,0.0009661502554,-4.205102232e-05, 0.001002241625,
  0.0002662619518,0.0005365402321, 0.000792445906, 5.25632131e-05, 0.001002389705,
  -6.00306105e-18,0.0006607539253,  0.00035770674,5.447888179e-05,0.0006775085349,
  -0.0003031503584,0.0005469255266,-0.0001778673613,-4.040165179e-17,0.0001743506582,
  -0.0005255120923,0.0002855219063,-0.0006254930049,-4.930166688e-05,-0.0003173112345,
  -0.0005745423841,-6.251307464e-18,-0.0008374585304,-4.304559479e-05,-0.0006361139822,
  -0.000422167097,-0.0002053553617,-0.0007576736389,3.115995059e-05,-0.0007017348544,
  -0.0001176279329,-0.0002806088305,-0.000435452821,0.0001422625646,-0.0005318243639,
  0.0002311199351,-0.0002374922187,-2.702682453e-17,0.0002325455571,-0.0002215922577,
  0.0004992794129,-0.0001307747734,0.0003919510636,0.0002473140485,0.0001015111993,
  0.0005929684849,-2.578157546e-05,0.0006138295284,0.0001629008475,0.0003279079974,
  0.0004837838351,3.205474059e-05,0.0006106217043,-7.260335463e-18,0.0004016206949,
   0.000217179535,3.303940684e-05,0.0004104194522,-0.0001834329305,0.0003305600549,
  -0.0001073787571,-1.753115506e-17,0.0001050114806,-0.0003161455679,0.0001715664112,
  -0.000375405798,-2.955446507e-05,-0.0001899884955,-0.0003435909166,-6.832291002e-18,
  -0.000499609916,-2.564879287e-05,-0.0003785657464,-0.0002509323531,-0.0001219107799,
  -0.0004492415464,1.845245788e-05,-0.0004150383756,-6.948348891e-05,-0.0001655490341,
  -0.0002565777395,8.371812146e-05,-0.000312569493,0.0001356637949,-0.0001392268023,
  -1.229465924e-17,0.0001359790331,-0.0001294083486,0.0002912019845,-7.617579104e-05,
  0.0002280166518,0.0001436894381,5.890213652e-05,0.0003436288389,-1.492135652e-05,
  0.0003548033128,9.403825243e-05,0.0001890492567,0.0002785586985, 1.84332057e-05,
  0.0003506913199,-6.272885298e-18,0.0002300704364,0.0001242544095,1.887883082e-05,
  0.0002342192893,-0.0001045504832,0.0001881722128,-6.104955537e-05,-6.075893889e-18,
  5.955628876e-05,-0.0001790796377,  9.7065109e-05,-0.0002121326543, -1.6680513e-05,
  -0.0001071020524,-0.0001934644097,2.820527277e-18,-0.0002806619159,-1.439210064e-05,
  -0.0002121823782,-0.0001404888026,-6.817903341e-05,-0.0002509685582,1.029749728e-05,
  -0.0002313723817,-3.869535431e-05,-9.210142889e-05,-0.0001426034869,4.648485265e-05,
  -0.0001733920653,7.518781786e-05,-7.709355123e-05,-3.133728463e-18,7.516655751e-05,
  -7.147625001e-05,0.0001607138693,-4.200961848e-05, 0.000125656501,7.913055015e-05,
  3.241650847e-05,0.0001889975538,-8.202049685e-06, 0.000194924316,5.163742389e-05,
  0.0001037611219,0.0001528251305, 1.01091955e-05, 0.000192264255,1.368358048e-18,
   0.000126070343,6.807477621e-05,1.034176785e-05,0.0001282954909,-5.726752352e-05,
  0.0001030758285,-3.344483048e-05,-1.20372853e-18,3.263971303e-05,-9.817336104e-05,
  5.323153891e-05,-0.0001163864144,-9.156394299e-06,-5.882548794e-05,-0.0001063297386,
  6.210189764e-19,-0.0001544943516,-7.929481399e-06,-0.0001170195756,-7.756354171e-05,
  -3.768535316e-05,-0.000138895135,5.706719094e-06,-0.0001284090395,-2.150876026e-05,
  -5.127900295e-05,-7.953627937e-05,2.597495586e-05,-9.707962454e-05,4.218424147e-05,
  -4.334850018e-05,-6.656939673e-19,4.246581011e-05,-4.048405754e-05,9.127178782e-05,
  -2.39247438e-05, 7.17718649e-05,4.533572064e-05,1.863146099e-05,0.0001089881844,
  -4.746213563e-06,0.0001132015677,3.010047476e-05, 6.07193906e-05,8.979121776e-05,
  5.964378033e-06,0.0001139253436,1.322185137e-19,7.538333011e-05,4.089941649e-05,
  6.243963071e-06,7.785351772e-05,-3.493362237e-05,6.321612454e-05,-2.062545354e-05,
  5.716312273e-19,2.036253863e-05,-6.161508645e-05, 3.36154153e-05,-7.396325964e-05,
  -5.856668395e-06,-3.787668538e-05,-6.893013779e-05,-2.203999478e-19,-0.0001015697489,
  -5.251036328e-06,-7.806799113e-05,-5.213764962e-05,-2.55276027e-05,-9.482690075e-05,
  3.927359103e-06,-8.909242024e-05,-1.504706961e-05,-3.617650873e-05,-5.659274029e-05,
  1.864296974e-05
};
