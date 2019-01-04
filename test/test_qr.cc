#include <carvig.h>

int main(int argc, char **argv)
{
    double A[6*3]={
            -1.71421300000000,	1.53466000000000,	-1.99845900000000,
            -1.51402200000000,	1.07856400000000,	-1.90335600000000,
            -1.71513100000000,	1.52927700000000,	-1.98473900000000,
            -1.52784600000000,	1.08325500000000,	-1.90933900000000,
            -1.71521000000000,	1.53300400000000,	-1.99302600000000,
            -1.52070500000000,	1.08117800000000,	-1.90668500000000
    };
    double B[6*6]={
            -0.431786679495559,	0.390992331294193,	0.528333627870302,	0.331725108405367,	-0.520856966266614,	0.0146734823993782    ,
            -0.381361319779528,	-0.423199793612810,	0.423731930132468,	-0.447206549969361,	0.128566940050776,	-0.528576932374831    ,
            -0.432017911070501,	0.373978649606436,	-0.585109156027243,	-0.495676004589587,	-0.273247355938081,	-0.103869873557569    ,
            -0.384843395261016,	-0.441378360759770,	-0.442269454108007,	0.620621494688544,	-0.0731564390089100	,-0.266374791416326   ,
            -0.432037810084031,	0.384145554179648,	0.0388198825223176,	0.164632609683749,	0.793257288873018,	0.0889242265150905   ,
            -0.383044675569660,	-0.431026956292508,	0.0430447588524446,	-0.178871788584250,	-0.0539022649963072,	0.794190856960230
    };
    double C[20*5]={
            0.537667139546100,	0.671497133608081,	-0.102242446085491,	-1.08906429505224,	1.41931015064255  ,
            1.83388501459509,	-1.20748692268504,	-0.241447041607358,	0.0325574641649735,	0.291584373984183  ,
            -2.25884686100365,	0.717238651328839,	0.319206739165502,	0.552527021112224,	0.197811053464361   ,
            0.862173320368121,	1.63023528916473,	0.312858596637428,	1.10061021788087,	1.58769908997406     ,
            0.318765239858981,	0.488893770311789,	-0.864879917324457,	1.54421189550395,	-0.804465956349547    ,
            -1.30768829630527,	1.03469300991786,	-0.0300512961962686,	0.0859311331754255,	0.696624415849607  ,
            -0.433592022305684,	0.726885133383238,	-0.164879019209038,	-1.49159031063761,	0.835088165072682       ,
            0.342624466538650,	-0.303440924786016,	0.627707287528727,	-0.742301837259857,	-0.243715140377952      ,
            3.57839693972576,	0.293871467096658,	1.09326566903948,	-1.06158173331999,	0.215670086403744       ,
            2.76943702988488,	-0.787282803758638,	1.10927329761440,	2.35045722400204,	-1.16584393148205       ,
            -1.34988694015652,	0.888395631757642,	-0.863652821988714,	-0.615601881466894,	-1.14795277889859       ,
            3.03492346633185,	-1.14707010696915,	0.0773590911304249,	0.748076783703985,	0.104874716016494       ,
            0.725404224946106,	-1.06887045816803,	-1.21411704361541,	-0.192418510588264,	0.722254032225002       ,
            -0.0630548731896562,	-0.809498694424876,	-1.11350074148676,	0.888610425420721,	2.58549125261624    ,
            0.714742903826096,	-2.94428416199490,	-0.00684932810334806,	-0.764849236567874,	-0.666890670701386  ,
            -0.204966058299775,	1.43838029281510,	1.53263030828475,	-1.40226896933876,	0.187331024578940        ,
            -0.124144348216312,	0.325190539456198,	-0.769665913753682,	-1.42237592509150,	-0.0824944253709554,
            1.48969760778547,	-0.754928319169703,	0.371378812760058,	0.488193909859941,	-1.93302291785099 ,
            1.40903448980048,	1.37029854009523,	-0.225584402271252,	-0.177375156618825,	-0.438966153934773,
            1.41719241342961,	-1.71151641885370,	1.11735613881447,	-0.196053487807333,	-1.79467884145512
    };
    double D[100*20]={
            -0.520932887,0.052993311,-1.616317258,0.983990668,-0.911818877,1.1753951,0.183431871,-0.398127172,-0.819307647,0.870598428,-0.730162332,0.641087175,-0.587711477,-0.763697622,-0.755969504,0.350098526,-1.674024136,-0.888311322,-0.524194759,1.305623104 ,
            -1.279026892,-0.177890087,-0.491817595,0.101227495,0.049434648,0.397740426,-0.259732297,0.256435883,0.967953522,0.330760519,-0.91632727,0.946703378,0.259036308,0.549524052,0.12119893,-0.291307157,-0.687630153,2.140829538,1.911298445,0.983969531   ,
            -0.056227232,1.772482562,-0.969301567,-0.362705824,1.078045875,1.951248717,-1.354788946,0.220025453,0.03034901,-1.347896679,1.787553175,-0.354254994,-0.871833515,-0.374637621,-1.495841382,0.186078062,-1.027185416,-0.692178121,-0.071106032,-1.251386356,
            -0.209680283,-2.508803613,-0.474107921,-0.738827832,0.30817876,-0.904656364,-1.157442001,-1.711440583,1.351096524,1.547871785,-0.820403529,-0.578817175,-0.787916533,-1.659158944,-1.646158891,0.57659945,-0.492557502,0.099297348,0.561835366,-0.179753791,
            0.192101559,-0.456589185,-0.666163825,-1.47984241,0.299638543,-0.682152192,-0.76198636,-1.205755241,-1.086374263,-0.616636746,-0.196711338,0.056473317,-0.34433974,-0.310228601,0.192897495,0.339657267,0.346808316,1.434978434,0.574071706,-0.743406448,
            0.992332289,2.430377537,0.478374683,0.153371749,-0.197218456,2.018291577,-0.250299587,-1.77291365,0.240265039,-0.698570962,-0.890143742,-0.893322693,0.647617091,-0.619943032,-1.289769583,-0.6728271,0.829352476,1.23340117,0.371733557,0.233241922,
            0.576244194,-0.471454086,-1.041058133,-0.317017472,-0.146422433,0.454343178,-1.648763085,-0.072491642,-1.046181279,-1.423595084,0.910748614,1.12207787,2.054126744,-1.024591186,-0.39984896,-0.537013685,0.155632565,-0.757644539,0.191693876,2.101344805,
            1.305783772,-0.560328491,-0.820659091,0.318918252,-0.10307087,-0.04210418,-0.181990617,-1.721114847,0.618717645,-0.109632361,-0.01226525,0.775828768,0.798941747,0.504998511,0.775403045,-1.040157753,0.083713866,0.738578144,1.244085177,-0.876666311,
            -0.729305832,-1.226467374,0.101129606,-1.456546588,-2.798981946,0.458167304,0.61568723,0.701881229,1.305034208,-0.102712109,0.072814482,0.962495619,-1.071077461,0.040473113,0.922149983,0.997284325,0.374616802,-1.114361235,-1.164159797,1.948788548,
            -0.864574688,0.792950364,1.083982537,1.321834502,0.393275176,-0.264144136,-0.376674271,-1.005467995,1.023491081,-0.322716604,0.939416308,1.260784057,-0.205155489,-0.25473023,1.544535846,-0.026053949,2.65320217,-1.705869084,1.635269693,-0.465272184,
            -0.094920991,-2.109940432,-1.854527237,0.487203938,0.990247153,-0.291985147,-0.69803527,-1.106426822,-2.115382451,-0.839587387,0.675237338,-0.107918516,-0.554443105,-0.547735919,-1.009562263,-0.656999196,0.332713968,0.661162349,0.68632968,-0.651917199 ,
            1.383213916,-0.799395126,1.799752786,-1.566626249,-1.297632911,-0.386798144,0.30412243,1.790559903,0.681728867,-1.660551005,0.785968524,-0.577157548,-0.292943099,1.67659395,0.856706378,0.677745616,0.140770828,-1.729642014,-1.149486625,0.609630588 ,
            1.303681374,0.566975093,-0.878374306,1.057059629,-1.521968362,-0.553992933,1.101079919,2.162384156,0.008709275,3.012486573,-2.132740693,0.525632604,1.180231981,1.173002877,0.32528654,-0.510834134,1.577835008,-2.138073512,1.1101573,0.709124016  ,
            -0.125812181,-0.001442899,0.647732726,-0.587577797,0.621011308,-0.943727928,-0.446607971,-0.819277518,0.334273328,1.500840463,0.219929637,1.151959696,0.377395065,-0.189061314,1.252438758,0.446004629,0.089547741,-0.060047665,1.182563768,0.279796045  ,
            -0.596873785,0.623924666,1.049565032,0.302221618,-1.507522585,-0.059848183,-0.466712249,-0.03704959,-0.547412763,-0.358991625,0.966285539,0.858378863,0.991574358,0.086572643,0.220158584,1.51663461,-0.672983735,1.385690707,1.707328091,-1.467456052 ,
            -1.520646326,0.126440831,1.323093377,0.219462388,-1.679402138,-0.57468477,-1.435820648,1.963003992,-1.650984343,-0.114879329,0.349994108,0.945576199,0.603451884,1.512560101,0.815196683,0.937756277,0.931893457,1.217815855,-0.420315417,-0.69131731  ,
            0.671841601,0.680867794,-0.517358966,-0.878201102,0.788976201,1.441855299,-0.977716109,-0.540266371,0.892793278,0.358901146,0.901815282,1.506130433,-0.792886122,1.79327072,1.139422198,-0.16016268,-0.357890395,-1.495050826,1.639377731,-0.867988456 ,
            0.02284429,-1.287415914,0.02431495,-2.861399759,-0.654282361,0.23552673,0.6058946,1.717503793,-0.50705555,-0.012137355,2.121188418,0.295337945,0.930818053,1.102620544,-0.411710956,-0.11383812,0.202101651,0.0372831,0.263468512,-0.512507737    ,
            -1.177788586,0.218084853,-0.162366874,0.535555297,1.24490301,1.02137655,-0.113654525,0.819808282,-0.329791149,-0.570359761,1.248586665,1.204096935,-1.350388334,-0.325847456,-0.461065098,1.937126165,0.876250365,0.802870872,-1.463483069,-0.78208649  ,
            -0.334578164,-1.566567074,-0.605661086,-0.34203731,-1.292264418,-0.139830533,0.764561551,0.055520834,0.168353798,0.93403477,-1.123185797,-0.011845806,0.799789476,-0.582814921,-1.329048615,-0.170798806,0.807948331,0.973853588,-0.776170982,0.425789161  ,
            -1.829455209,0.783281931,0.271709764,-0.597858855,-0.614352474,-0.081551103,0.669897455,-0.353125335,2.53674003,-1.138316794,-0.830085073,0.789500353,0.599637421,0.751587237,-0.087500182,0.301168535,-1.603333924,1.560733856,0.929488011,1.011540496   ,
            0.429989597,-0.310569909,0.358643412,0.418912708,0.241695211,1.258246752,0.375783689,1.693149287,2.293626661,1.957238195,-0.12177874,-1.403582205,1.100428879,-0.863734318,0.355445985,0.325988686,-2.362051873,1.586249542,1.79295774,-0.250667368     ,
            -0.173993462,0.655324412,-0.352315123,-0.689680721,0.549349148,1.468534002,0.766652814,0.711050405,-1.318660917,-1.76322947,-0.642591057,1.542106052,-1.419741823,-1.07087558,-0.743138728,0.924836665,-0.701700108,0.856297777,-1.183151762,0.554236065   ,
            1.631242419,-0.53746736,0.132359928,0.671191041,0.467634318,0.032940856,1.523471845,-0.632763937,-0.474134734,-0.32333433,-0.078949967,-1.774906783,-0.203636094,-0.355236799,0.072030684,0.21529123,1.651903276,-1.424483017,-0.111175861,0.758880796  ,
            -1.359428021,0.328643403,2.673581777,0.150897461,0.191457003,1.692478145,0.576824194,0.392726387,0.987381993,0.872592193,1.22811277,0.205656538,0.017913067,0.955879572,-0.356403361,0.366249306,0.235072844,0.039702337,-0.656765808,0.13384266    ,
            0.970506682,1.054071971,-0.007566075,-0.991318885,-0.229804956,0.475728558,0.425973016,-0.877961566,-2.073026432,0.117915391,-0.531365835,-0.346209909,0.100351439,0.159281652,-0.431691784,0.322150906,-0.15175278,-1.379911621,1.879734139,-0.272561496 ,
            0.14363981,-1.979699319,0.710302937,0.836829948,-0.57921684,0.368530218,-0.042930971,0.148945429,1.24402612,-1.503054795,-0.286104801,-1.158982844,0.876356605,0.244941808,0.77932818,2.6890035,-0.15588861,1.233070902,-0.896080877,-0.542627652  ,
            0.082603591,-1.867388185,-0.462539363,0.47450897,0.480481177,2.192000724,-1.242263011,1.531878095,-0.315239581,0.92183522,-0.227605655,0.335826336,0.700694208,1.124749677,0.816324577,0.876068866,1.038164712,1.742076382,1.33150572,-1.163104552  ,
            0.716664015,-1.832355671,-0.527877901,1.252165855,-0.386832642,1.535685105,-0.504951671,0.531847761,1.399293999,0.163244913,0.674523169,0.33224306,0.65201577,0.234627918,1.148304026,-0.876490013,0.330483791,-2.001495089,-0.624573131,-0.273517395  ,
            1.193483862,0.848592115,-0.345787067,-0.892622656,0.421615541,0.907260215,0.325851311,-0.759667116,-0.879881395,-0.814670839,1.03684,1.411209361,0.178530389,-1.138562479,-1.084959938,-1.217446994,0.475806627,0.835496992,0.776678882,0.159503875    ,
            -1.071061919,0.40518726,0.564557774,-0.895274229,1.087705855,0.402259582,-1.111423373,0.347984141,-0.922472455,0.403710089,-0.149462523,0.136862925,1.676010401,0.842093638,-0.136122273,-1.614839707,-2.090501816,-0.342818326,-1.324253698,-0.186708123  ,
            1.318902209,-0.702456037,-0.801539144,0.313325928,-2.249331898,-0.538382001,0.468184324,-0.6978027,2.314402899,0.756157408,-0.317081344,0.577628134,-0.325097441,0.476341836,0.655091728,1.840080492,-0.174034819,-0.477962101,1.500276652,0.217904147 ,
            -1.210003141,1.499046021,-1.852946785,0.667033161,1.80448014,-0.115215488,0.322612876,2.019314773,0.588013204,2.184439682,0.933594674,0.243087986,0.101147834,-0.08838969,-1.29346105,-0.818925757,0.019188173,-0.889101413,-2.202902859,0.0462383  ,
            -1.074114902,0.137794866,0.053216017,0.828116552,-0.632060379,1.822000055,0.100021438,-1.793699534,-0.309767635,-0.093782544,0.723284089,1.467671126,-0.576692229,-0.413035629,1.926739988,0.992135575,-0.860027343,1.263429117,0.322514703,0.670324966  ,
            -0.672560082,-1.5868214,-0.436415217,0.006509278,1.316458207,-2.021506658,0.301434581,-0.659507552,-1.032964147,-0.294206089,0.488184813,1.130553998,-0.06152811,-0.544583307,0.233251748,0.533817788,-0.022949442,0.383201165,0.421004448,-0.630500943  ,
            0.736462182,-1.019145515,0.280007472,-0.235892197,1.551592058,-0.636977461,0.023823638,0.771453338,1.103350734,-0.504805594,3.266198728,0.010653161,0.725587763,-0.024006686,-0.54502235,-1.526727116,-0.602317263,-0.11886736,-0.820701137,-0.118410158  ,
            -1.069960693,-1.385233741,0.084605887,0.652821095,-1.468908104,-0.188803224,-0.022054734,-0.820341096,0.342108931,-1.926999012,0.031700758,0.124333692,-1.227341829,-0.800513657,1.032812497,2.022859185,0.869901787,0.417247165,-0.966458753,0.242064584 ,
            0.33471512,0.95488643,0.72911906,1.964532512,0.176938356,0.148275042,-0.008757929,0.017888182,-2.263993222,0.521380667,0.341274935,1.779431137,0.190930596,-0.512190365,0.377136555,0.55229595,-0.570812459,1.013221812,0.609348201,-0.376084625        ,
            0.411882595,-0.601120319,0.900753096,0.884584173,3.466259914,-1.783880044,0.929455131,0.654535223,-0.903285817,-2.054411174,-0.083530989,-0.23947227,-0.734818377,-1.486675374,0.109255334,1.820142408,1.304679503,-0.869517491,-1.036211407,0.280444407   ,
            0.154120188,-1.171890804,-1.325638295,0.084536957,-0.214626724,0.529067548,-0.090432312,1.257698766,2.97002895,-0.269837512,0.616421091,0.857992472,0.788384521,-0.518641891,-0.680188295,0.342644486,-0.042644228,-0.794680477,-0.028237518,-1.774452142   ,
            0.554570698,-0.577110307,-1.524578828,-0.574514061,0.486282563,0.729731861,-2.641145787,-0.927079991,-0.011766296,-0.275032058,-0.524999194,-0.878354781,-1.965382234,-0.693229051,-1.765392376,0.179561486,0.89553077,0.688502281,-2.819766794,0.458577815  ,
            -1.172845688,-0.836430524,0.502433333,0.499750631,0.33088512,-0.940134923,-0.486149992,-0.169877666,-1.999539069,0.845144753,1.007706741,-0.761946019,-1.955524214,0.577651777,-0.963567723,-1.019318258,2.284856035,1.585672925,-2.08104955,0.46182289    ,
            1.007586686,0.85296953,0.306391426,-0.484104483,1.267902081,-0.25928695,0.195969622,-0.471672488,-0.888015311,-2.771181438,1.829102237,0.862782703,1.624293528,1.454966962,-0.645632637,0.037599465,0.066827382,1.250178849,-0.044753129,-0.001187487    ,
            0.11352028,0.477331179,-0.939160465,0.238445636,1.090514206,-1.213544834,0.959722207,-0.114233489,-0.419902397,0.918074909,0.085288069,0.648305144,-0.149420062,1.03548485,0.452527778,0.137123302,1.494589444,-0.115603508,1.117954994,-0.352938754     ,
            0.730050867,0.302320075,1.237402126,0.778248191,-0.94645061,1.624549667,1.38032438,0.369486892,0.694578356,-0.519254344,-0.068324725,1.05809227,-1.968268112,1.046823486,0.614498222,-1.521052262,-1.072464244,-1.331769732,-1.649503588,-0.432991256     ,
            -0.983511781,0.415776191,0.033011915,0.924272932,-0.438499144,0.373512408,-0.941463638,-0.618615279,-0.162752695,-1.293012166,-0.563465407,-0.633191387,-1.686137503,0.676210544,-0.785300655,-0.018918453,1.823344633,-2.342805578,0.678667216,-1.704774104  ,
            0.052031557,0.042974829,0.123568318,0.588137914,0.343220672,-0.250891795,0.760868104,0.800115124,0.101576642,-0.008718093,-0.473574058,1.017989418,-0.086921689,0.54659461,0.828176193,0.163246678,-1.208429153,-0.926563335,0.494323248,1.095716737  ,
            0.877599373,-0.94885323,0.27393938,1.377934277,-0.058403382,-0.925455902,0.237920448,0.426696052,-0.017858461,0.233352681,-1.70353452,0.171925675,0.307386091,0.749988674,0.667417009,-0.721150679,-0.065391595,1.129567516,-0.588468577,0.635772116   ,
            1.014141041,0.541608366,0.754165808,1.851204933,2.534974688,0.09866033,-0.208373459,-0.472330755,-0.960327092,-0.424195699,-0.053720048,-0.047474088,0.337545613,-0.729838976,-0.125500883,0.410603359,-0.326836328,-0.549127529,-0.02392466,-1.087184318  ,
            -0.084348411,-0.821128259,1.524497506,-1.897664767,0.438645438,1.68427984,0.024739199,0.27595178,1.172805645,-1.469448676,-0.881344066,1.689145469,1.06699176,0.833202445,-0.951228871,-1.212631093,-1.149150701,0.283731703,2.19131301,-1.47726543     ,
            -1.853531576,-1.071905048,-0.261975762,-1.778684179,0.437517718,0.2752594,-0.028091104,0.984227099,-0.365272683,1.206420316,1.255891434,1.437044493,0.33294152,-1.198550442,0.892039997,-0.573744692,-1.308041707,0.212779318,-1.400581014,-0.385249415  ,
            -1.09682071,-1.074091636,-1.730683508,-0.922641237,-0.837675995,0.353289379,0.140359128,0.993107437,-0.463410645,0.197342221,0.155841551,-2.251078302,-0.073483651,0.618773476,-0.12972158,0.105392192,0.646382963,-2.202763228,0.48009949,0.680836658  ,
            0.218627628,0.869552807,1.0134643,-1.997927084,-1.307502616,-1.200375563,0.237586183,0.668209123,0.194989572,-0.706875529,0.054932681,0.35648913,1.047756833,-0.832412637,-1.013485131,-0.605096054,-1.389203546,1.251073008,0.207550677,0.832649349   ,
            0.794245851,0.981051415,-0.927736098,-0.357100058,0.794142715,0.166128676,-0.671548726,-0.064998424,-0.066946503,1.21636726,1.398552443,-0.850241546,2.058862887,-0.970494811,0.252287016,0.421794623,-1.340682601,2.024705017,0.322084771,0.534598237  ,
            0.463124195,-1.758825369,1.243680286,-0.33640076,-0.197263789,0.776161764,-1.045000018,-0.620098634,-0.521530137,0.367170421,-1.775648377,-0.299551039,0.02669335,-0.453510796,0.523585326,-0.362808943,1.128872023,-0.038896715,-0.005880483,0.768024569  ,
            -0.612630024,-0.148095958,-0.589488698,0.250426005,0.649152816,-1.381435403,0.965766642,0.224104267,0.127099761,-1.267515563,0.329654062,-0.634248593,-0.240524287,-1.302707505,-1.461629635,-0.874115176,0.00169613,0.998583627,0.281389082,1.754887671  ,
            2.244399811,0.251941746,1.491481735,0.286161901,-0.831474272,1.12827902,-0.219756521,-0.466136195,2.113018474,0.621050071,-1.057902771,1.624477363,1.038475184,0.015974798,1.866405597,0.931593892,0.379683892,-0.757333695,-0.251339245,-1.704312441      ,
            0.072347608,-0.610384626,-0.805978095,-0.686168568,0.89595406,2.465439585,1.414535858,-0.33208688,0.541281096,-1.795454596,-0.643369161,1.241070132,-0.507225294,1.110659178,-2.149052031,0.600042061,-0.901331628,0.596145142,-1.693459463,0.469508224    ,
            0.865514396,0.76097981,-1.112599053,-0.813314488,-1.81348642,-1.557917218,-0.924186656,0.924814807,-0.655085273,-1.057839477,0.25844079,0.555280542,-1.483079704,-0.249373892,-1.635236659,0.571360688,-0.196794343,2.123217032,-0.584016185,-0.054303845  ,
            -0.415696467,0.254429502,0.956939568,0.793402559,1.566683454,-2.06664782,-0.59414082,1.44702552,-0.869528727,0.151544481,0.891694304,0.703417616,-0.106487912,0.495701633,1.224019127,0.685110192,0.306941509,1.311725359,0.234442731,-0.748874982         ,
            -1.114938106,-0.152833677,-1.363051589,-0.381945254,0.846500665,-0.072598665,1.421275451,0.595832107,-0.238897892,0.411264068,-0.836622411,0.458163339,0.245263937,0.162037493,0.325174011,1.00942054,0.167456678,-0.699941513,0.258786221,0.716764042      ,
            0.685252428,-0.557410875,0.680584963,-1.37120417,0.110154836,0.75911144,1.407607647,2.053270556,-1.575987321,0.070497786,0.553148245,0.68398399,0.145793032,1.211820984,-0.428913044,0.990870717,1.788078793,-1.019613284,0.603656418,-0.005512901         ,
            1.037673215,0.677017657,0.437823623,0.010307454,-1.161101528,-0.081664148,-1.029000755,-1.529250342,1.825751228,-1.933026604,1.458409319,0.25128958,-1.118085415,-0.158315581,0.011596089,0.033690533,-0.624082447,0.053114787,2.220965356,1.200114319     ,
            1.822211528,0.84929744,-0.143267547,0.204132046,-0.397535703,-0.158473291,0.206512231,0.022687575,0.204267479,0.818722014,-0.855082179,-0.178503895,-0.596941141,0.292971036,0.731318473,-0.450270031,-0.149960919,-0.237019167,-1.654130629,-1.034017139   ,
            -0.528988493,0.469307183,-0.341532505,-0.411025506,0.254294311,0.006498037,1.341111306,0.09528481,-1.163395792,1.261757109,-0.992122617,0.50772583,-0.679488152,2.467714398,-0.868022763,-0.110656278,0.83221505,-0.062735983,0.680410496,-0.847567754       ,
            -1.627966733,-0.239781704,2.057810634,0.663561179,1.207789436,-1.064607802,1.332716574,1.614526335,0.120609819,1.167342865,-0.011699417,-0.309899118,0.955054449,1.146233768,0.92815958,1.237858736,0.948091104,1.271109095,0.135829307,0.433422037           ,
            1.617302432,0.920985454,-0.374535035,0.225782139,-1.033541613,-1.643915073,-1.284894704,0.501273172,-1.443518374,-0.570329995,0.626910735,-0.394370246,-0.130800542,-0.933843114,0.697316763,-1.197860102,-1.973737576,0.221138371,-0.037987452,-0.887523979   ,
            0.264136742,-0.906881378,-0.190203197,-0.212843113,1.295146754,1.581549828,1.618375891,-0.323840211,0.582346046,-0.393897572,0.001499217,-0.269738542,0.649404178,1.119792055,-0.045150343,-0.564393926,-0.391878655,1.664023222,-0.693137232,0.121232621       ,
            -1.127146186,0.144440606,-0.938732411,-0.044034571,2.768123033,0.29261414,0.661643768,0.55421661,-0.181465467,-1.017434018,-0.816326738,-0.088130172,0.598515038,-0.924226739,0.191211141,1.04330861,-0.676711226,-0.042959875,-0.127525014,-0.40190489          ,
            -0.559175859,1.396409028,-0.813462364,0.458181823,-0.495347149,-1.187608578,0.227346442,0.642443455,0.042009782,0.250205872,0.115147536,0.008029274,-0.192500556,0.00990696,-0.628762958,0.846001725,-0.016020988,-0.133235446,0.680361844,1.096678323          ,
            -0.808845157,-0.18969876,-0.583618752,-0.441417379,0.468765524,1.075936737,-0.225576131,0.182625114,0.361841946,0.252124809,0.207068665,2.531795615,-1.980798935,0.289366855,-0.856613207,-0.495536196,0.515174787,0.793199831,0.426214597,0.436674648          ,
            1.161004286,-0.843835891,1.709525371,-1.054946722,-0.657296887,-1.297371601,-0.965993437,-2.027476375,0.853714622,-0.771478905,-0.444561809,-1.223243058,0.36293827,0.870003045,-0.38871274,-0.206817713,0.444829653,0.426272544,-1.605669475,-0.40700469       ,
            0.592105269,1.94343805,-0.390419818,-0.15558426,-1.716957242,-0.12177023,0.095017861,1.023080942,-0.809772018,0.919545458,-1.120489743,-1.071750607,0.703949599,-0.39726179,1.02850845,-0.155796163,1.140898315,-0.209901856,0.906210752,-0.638690167           ,
            0.242747664,-0.246921541,-0.690065363,0.129147863,1.470519104,0.740771539,-0.256732501,-3.491541817,-1.467050669,0.852157548,0.435357963,0.246058645,-0.752596945,0.537857777,-0.239720321,-0.275398075,0.44768101,-1.588159078,0.249514143,-0.4048812          ,
            0.240477485,0.441619156,-0.448220702,0.509428328,0.694137266,-0.840717626,2.310131405,0.109489635,-0.103896237,0.65712619,0.017088634,-0.050611477,-0.016917471,1.76973669,-0.451622767,-2.443249127,0.315440245,-1.116380666,1.894228212,2.393862456           ,
            -0.821500399,-0.803611484,0.71437635,-0.030123529,-0.510696987,-0.349470804,0.190059722,-1.551331475,-0.822913392,-0.75346434,-0.362985629,-0.730150625,-0.441664182,-1.905484995,-0.979267221,-0.427322842,0.945591532,0.616855042,-1.11237866,-0.049623014    ,
            0.993112126,0.287609433,-1.315731248,-0.45736495,0.113387383,0.029631957,-0.173403994,-0.355110913,0.424981416,-1.338501826,-0.631237476,0.326987126,1.7013348,-1.076748123,-1.133447286,0.309060387,0.428663107,0.543464252,-0.722041773,-0.202575908          ,
            0.346394725,0.467018094,0.627122095,0.596335626,-0.229807148,1.95237346,-0.014028823,1.398557481,-1.854684372,0.652225084,-0.500324985,0.752990913,-0.03056922,1.194940894,0.022120893,2.451575214,-1.324606928,-1.467895974,-1.752186793,-0.197534051          ,
            -0.261133527,0.00456161,-1.331294843,-0.113528446,-1.46173284,0.459023532,-0.612738314,-0.513474957,0.858575089,1.447216675,-0.867193173,-1.153721547,0.203917755,-0.293948457,1.040239494,-1.462628004,0.10982152,0.119908333,0.003612314,1.516316027          ,
            -0.184712905,0.326090359,-0.130848152,0.807024415,-2.88233614,-0.39931193,2.071799944,1.917179643,0.306393651,-1.290125974,-1.040093157,-0.40786705,-1.047810228,-0.03817781,1.231484088,-0.635541556,-1.654721863,0.529355496,0.99514429,-1.732208109           ,
            -0.101735,1.204586717,-1.826896171,-0.08980274,-0.047467608,-0.225384643,0.637024085,0.778410564,-1.111561753,-2.2081892,1.265431472,-1.287906431,-0.73537036,0.923934566,0.560179421,-0.385472849,1.11067217,-1.175244312,-0.478969354,1.112472513              ,
            -0.887043144,-1.404115832,0.535922465,-0.006292125,-0.46246595,-0.280282943,0.074893933,-0.24645511,-0.317240722,1.436108117,-0.241457858,0.083577687,-1.356562598,2.223061145,-0.30903867,-0.94227755,-2.107861743,-0.998215247,-0.519101361,-0.719281027       ,
            0.741377097,0.205563555,0.692864715,-0.091860671,-0.576645895,1.306724563,1.123267193,-0.903531654,0.837862654,-0.061672203,-1.729031417,0.163799301,0.728585578,-1.301895408,-0.367604084,-0.673773103,-0.549836934,1.19404228,-0.294659741,-0.273365578        ,
            1.392207871,-1.991195789,-0.687549755,-0.921238282,-0.84596836,-0.284375135,-0.033127938,-0.495902258,2.426465311,1.177806454,-0.488240884,0.682574714,0.607186854,-0.908990841,0.365633365,-1.924243918,0.094260745,-1.753697463,-0.160549911,0.677404419       ,
            2.473900289,0.028408934,0.317575756,-0.926951533,-1.817235514,-0.79171049,-0.097747705,0.374494786,-0.351089442,0.985513418,1.060384324,-1.086367615,-0.828285385,-0.07750017,0.9374387,-0.112417633,-0.0382198,0.446529353,1.023516053,-0.936450821              ,
            0.503919243,1.930515409,0.16284234,-0.961220673,-0.521730614,0.240618888,-0.556619894,-2.370532099,1.381961839,-1.218578396,-0.538153972,0.297492378,2.887644288,0.000510447,0.974243702,-0.518509457,1.882927352,0.978059947,0.015894737,0.425716851             ,
            -0.822480554,0.941136788,1.159115906,1.784829839,0.161435878,-0.094645984,-0.615499006,0.615062008,-0.860655462,-0.43187829,1.777337674,-0.143308256,0.919135409,0.106855442,-2.118923984,0.534982504,0.055460684,-1.791257288,-0.482657068,-0.074543103          ,
            0.200981871,-0.006924451,0.128388059,-0.200188986,-1.061810875,0.793234678,1.60455321,0.279464982,0.206890474,-0.834941294,-0.779518792,1.39195366,0.405789038,-0.312464534,-0.046464742,0.057407891,-0.613890141,-0.130189005,0.634674515,-1.398807287           ,
            -1.007052528,-0.338241647,1.039458133,0.940411654,0.450493739,0.959439528,0.768495434,0.818865088,-0.207497238,0.179680104,-0.752971923,0.306747373,1.916183892,1.219646681,-0.966780905,1.065817157,0.587016609,-1.175237337,-1.364438048,0.192306104            ,
            -0.61317156,0.528265784,-0.116771141,0.349156337,-0.272798073,1.087102819,0.086933473,2.047506542,0.340257035,1.166302425,-1.033133373,-0.537184202,-2.455687577,-0.909561393,-0.471249024,1.62073661,-1.206708908,0.089962083,0.598624801,0.580389716            ,
            -0.658963391,1.056899594,-0.64829691,1.859280301,-0.101454351,0.647168715,1.704359139,-0.323744351,-0.498112145,0.055985942,1.163838518,-0.228932243,-0.09106341,0.203976634,1.735227438,0.121853695,0.545330536,-0.422165894,-0.206498114,0.637859264            ,
            -0.833229328,0.014740617,-0.037981205,0.927071973,-1.429105948,0.63255017,0.023633855,-0.980542293,-1.421394666,-2.100041846,-0.580106063,-0.536220402,-0.024680046,0.989747447,-0.777530134,-1.23804088,0.250930384,-1.650933584,2.13936634,-0.565981624         ,
            0.378179297,1.614761267,-0.199324819,-1.226963844,-0.764409439,1.903276323,0.29004282,1.17963417,-0.270774154,1.235297089,0.417302388,1.439021272,0.199936046,0.375199576,-1.68379741,0.24412558,-0.392747467,0.617968654,-0.648813774,-0.016137626                ,
            -1.115342596,-0.815854962,0.881669872,-0.32723914,0.410137543,-1.160025537,-1.419899206,0.894582753,0.43966311,0.002671527,-1.648125021,-0.511099688,-1.038314663,-0.622126209,0.177027103,1.398258243,-0.622041928,0.59616028,0.423592242,0.622322565             ,
            0.667241352,-1.997759124,-0.056144071,0.891646401,-0.789932749,-0.347309263,0.475273557,-0.142930623,-0.506143772,-0.459536792,-0.572675455,-1.606835447,0.529366834,0.120554994,-0.124477539,-0.095473333,-1.190476706,-0.618437333,0.117865348,0.533436362        ,
            0.795332804,-0.748191408,-0.841238869,0.288185578,0.161637129,-1.695064657,-1.447319038,-0.593470529,-0.184348233,-2.103176592,0.659232042,-0.201243022,-2.217118798,-0.317396043,-0.415554856,0.387622745,-1.878466651,0.52787538,-1.080778477,-0.389340756         ,
            1.037491854,-0.199304021,-0.154843838,2.265195434,1.977903997,0.919386059,-0.988279993,0.248917198,0.40199901,0.373921685,-1.280401598,1.14350341,0.107416385,-0.599683853,0.879458264,-0.966314579,-0.42400841,-1.344318131,0.87552669,-1.271667788                ,
            -0.020431193,-0.372760078,1.18859467,-0.04789033,0.795266427,0.021531217,0.949379523,-1.129782344,0.539228241,0.245180508,0.05012405,0.663291081,0.438909414,1.353153911,0.566128105,1.509186271,0.777241934,-1.234765326,-2.226281655,0.272601062                  ,
            0.618953086,-0.84737116,-0.414907279,-1.551864069,1.037366733,-0.299340334,0.351223975,0.066094615,-0.733593218,0.338579198,0.548402938,0.164084366,-0.040993407,-0.197667654,0.375916992,0.40383074,-0.713926,-1.153439894,-1.946111305,0.317468465                ,
            1.803063511,1.337238043,-0.658616763,0.444083312,2.360329965,-1.721015843,-0.872281573,-0.637924594,-0.268371989,-1.078065162,1.778446713,1.785405509,0.364309177,-0.578001961,-0.276953828,-0.422141268,1.584639671,-0.109328044,-1.309594662,1.498368276

    };
    double At[6*3],Q[6*6],R[6*3],Bt[6*6],Ct[20*5],Dt[100*20];
    matt(A,6,3,At);
    matt(B,6,6,Bt);
    matt(C,20,5,Ct);
    matt(D,100,20,Dt);

    tracemat(3,At,6,3,12,6);

    qr(At,6,3,Q,R,0);

    tracemat(3,Q,6,6,12,6);
    tracemat(3,R,6,3,12,6);

    double Q1[6*6],R1[6*6];
    qr(Bt,6,6,Q1,R1,0);

    tracemat(3,Q1,6,6,12,6);
    tracemat(3,R1,6,6,12,6);

    double Q2[20*20],R2[20*5];
    qr(Ct,20,5,Q2,R2,0);

    tracemat(3,Q2,20,20,12,6);
    tracemat(3,R2,20,5,12,6);

    double Q3[100*100],R3[100*20];
    qr(D,100,20,Q3,R3,1);

    tracemat(3,Q3,100,100,12,6);
    tracemat(3,R3,100,20,12,6);

    return 0;
}