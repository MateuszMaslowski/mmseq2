//
// Created by user on 26/01/2022.
//

#ifndef MMSEQ2_MOCK_STRUCTURES_H
#define MMSEQ2_MOCK_STRUCTURES_H

#include <string>
#include <vector>
#include <utility>
#include <memory>
#include <type_traits>

const int kVal = 7;

inline std::string T[] = {
        "AGFVDFFMNNQRKKTGKPSINMLKRVRNRVSTGSQLAKRFSKGLLNGQGPMKLVMAFIAFLRFLAIPPTAGVLARWGTFKKSGAIKVLKGFKKEISNMLSIINKRKKTSLCLMMILPAALAFHLTSRDGEPRMIVGKNERGKSLLFKTASGINMCTLIAMDLGEMCDDTVTYKCPHITEVEPEDIDCWCNLTSTWVTYGTCNQAGEHRRDKRSVALAPHVGMGLDTRTQTWMSAEGAWRQVEKVETWALRHPGFTILALFLAHYIGTSLTQKVVIFILLMLVTPSMTMRCVGVGNRDFVEGLSGATWVDVVLEHGGCVTTMAKNKPTLDIELQKTEATQLATLRKLCIEGKITNITTDSRCPTQGEATLPEEQDQNYVCKHTYVDRGWGNGCGLFGKGSLVTCAKFQCLEPIEGKVVQYENLKYTVIITVHTGDQHQVGNETQGVTAEITPQASTTEAILPEYGTLGLECSPRTGLDFNEMILLTMKNKAWMVHRQWFFDLPLPWTSGATTETPTWNRKELLVTFKNAHAKKQEVVVLGSQEGAMHTALTGATEIQNSGGTSIFAGHLKCRLKMDKLELKGMSYAMCTNTFVLKKEVSETQHGTILIKVEYKGEDVPCKIPFSTEDGQGKAHNGRLITANPVVTKKEEPVNIEAEPPFGESNIVIGIGDNALKINWYKKGSSIGKMFEATARGARRMAILGDTAWDFGSVGGVLNSLGKMVHQIFGSAYTALFSGVSWVMKIGIGVLLTWIGLNSKNTSMSFSCIAIGIITLYLGAVVQADMGCVINWKGKELKCGSGIFVTNEVHTWTEQYKFQADSPKRLATAIAGAWENGVCGIRSTTRMENLLWKQIANELNYILWENNIKLTVVVGDIIGVLEQGKRTLTPQPMELKYSWKTWGKAKIVTAETQNSSFIIDGPNTPECPSVSRAWNVWEVEDYGFGVFTTNIWLKLREVYTQLCDHRLMSAAVKDERAVHADMGYWIESQKNGSWKLEKASLIEVKTCTWPKSHTLWSNGVLESDMIIPKSLAGPISQHNHRPGYHTQTAGPWHLGKLELDFNYCEGTTVVITENCGTRGPSLRTTTVSGKLIHEWCCRSCTLPPLRYMGEDGCWYGMEIRPISEKEENMVKSLVSAGSGKVDNFTMGVLCLAILFEEVMRGKFGKKHMIAGVFFTFVLLLSGQITWRDMAHTLIMIGSNASDRMGMGVTYLALIATFKIQPFLALGFFLRKLTSRENLLLGVGLAMATTLQLPEDIEQMANGIALGLMALKLITQFETYQLWTALISLTCSNTIFTLTVAWRTATLILAGVSLLPVCQSSSMRKTDWLPMAVAAMGVPPLPLFIFGLKDTLKRRSWPLNEGVMAVGLVSILASSLLRNDVPMAGPLVAGGLLIACYVITGTSADLTVEKAADITWEEEAEQTGVSHNLMITVDDDGTMRIKDDETENILTVLLKTALLIVSGIFPYSIPATLLVWHTWQKQTQRSGVLWDVPSPPETQKAELEEGVYRIKQQGIFGKTQVGVGVQKEGVFHTMWHVTRGAVLTYNGKRLEPNWASVKKDLISYGGGWRLSAQWQKGEEVQVIAVEPGKNPKNFQTMPGTFQTTTGEIGAIALDFKPGTSGSPIINREGKVVGLYGNGVVTKNGGYVSGIAQTNAEPDGPTPELEEEMFKKRNLTIMDLHPGSGKTRKYLPAIVREAIKRRLRTLILAPTRVVAAEMEEALKGLPIRYQTTATKSEHTGREIVDLMCHATFTMRLLSPVRVPNYNLIIMDEAHFTDPASIAARGYISTRVGMGEAAAIFMTATPPGTADAFPQSNAPIQDEERDIPERSWNSGNEWITDFAGKTVWFVPSIKAGNDIANCLRKNGKKVIQLSRKTFDTEYQKTKLNDWDFVV",
        "MLTLENVSKTYKGGKKAVNNVNLKIAKGEFICFIGPSGCGKTTTMKMINRLIEPSAGKIFIDGENIMDQDPVELRRKIGYVIQQIGLFPHMTIQQNISLVPKLLKWPEQQRKERARELLKLVDMGPEYVDRYPHELSGGQQQRIGVLRALAAEPPLILMDEPFGALDPITRDSLQEEFKKLQKTLHKTIVFVTHDMDEAIKLADRIVILKAGEIVQVGTPDDILRNPADEFVEEFIGKERLIQSSSPDVERVDQIMNTQPVTITADKTLSEAIQLMRQERVDSLLVVDDEHVLQGYVDVEIIDQCRKKANLIGEVLHEDIYTVLGGTLLRDTVRKILKRGVKYVPVVDEDRRLIGIVTRASLVDIVYDSLWGEEKQLAALS",
        "MSSPDGGYASDDQNQGKCSVPIMMTGLGQCQWAEPMNSLGEGKLKSDAGSANSRGKAEARIRRPMNAFMVWAKDERKRLAQQNPDLHNAELSKMLGKSWKALTLAEKRPFVEEAERLRVQHMQDHPNYKYRPRRRKQVKRMKRADTGFMHMAEPPESAVLGTDGRMCLESFSLGYHEQTYPHSQLPQGSHYREPQAMAPHYDGYSLPTPESSPLDLAEADPVFFTSPPQDECQMMPYSYNASYTHQQNSGASMLVRQMPQAEQMGQGSPVQGMMGCQSSPQMYYGQMYLPGSARHHQLPQAGQNSPPPEAQQMGRADHIQQVDMLAEVDRTEFEQYLSYVAKSDLGMHYHGQESVVPTADNGPISSVLSDASTAVYYCNYPSA",
        "MFGVSSGAGPYRESPMTGLESLNFIDEIQQLAATFPPENTGSFTALLEMPATQAVELFTSSSQAAGNIAPPTLHPFRRLTFPPDLAAVIAAEQNGNISGESSSFGIRVKSEPEETDSSQRFVSNQNHNKRKERGKKKVKSSMKKTKISDEEAEKLPYVHVRARRGQATDNHSLAERARREKINARMKLLQELVPGCDKIQGTALVLDEIINHVQSLQHQVEMLSMRLAAVNPRIDFNLDSLLASQNSFLMDGSFNGEFYHQLQQWPLDGYHQPEWGREEDHHEASFLMGSATLHSNQVKMEL",
        "MAPLVAQLLFLQVVLGTALLENIKTQLAIKNFRTLHVDYPKVTYAQGFQGYCNGLMSYVRGRQESWYCPRIHYVLHAPWTVIWKFCKYSESFCENYNEYCTLTKDSIPLTICSLYPRQPPTSCRYNSTLTNQRLYLLCSEKYDGEPIDIIGLY",
        "MKKTIGLILILASFGSHARTEIATKNFPVSTTISKSFFAPEPQIQPSFGKNVGKEGGLLFSVSLTVPENVSQVTVYPVYDEDYGLGRLVNTADDSQSIIYQIVDDKGRKMLKDHGAEVTPNQQITFRALNYTSGDKEIPPGIYNDQVMVGYYVN",
        "MSTKFSFTPSQDQAIHQTGNNLLVSASAGSGKTRVLVQRVIERLKAGVGIDQILIVTFTKAAAAEMRERIQTALRQELAASQGDSAQQQFYLRQLNQLPVADISTLDAFCLRLLQRYYYVIDLDPVFRLLADETENGLLRDEVWADLREDLYANDDSGLFARLTENFSGDRNDQGLADLVQQTYTFANATPNPTAWLAELPQPYQLDSDQLMTTSFYQQRLRPFFQSQLQQLQADLTSAQALANQAGLDKQAAHVTAVLENIAAVQQLVTGDSWNALRAAIQDFAWGRMPAVRKTNEDYPIYNELKTTYYDPARKQLDSLKKTYLIQDEQQAMTTIRRSGELVGELSRVVTAFRTAYRQEKQRRHVLDFADVEHAALAILTQDSDQSRQVAAQLRHQFAEIMVDEYQDTNGLQEAILTAIAEPAPQGNLFMVGDVKQSIYRFRQADPTLFMTKTDQYAADAAAGELIVLAENFRSMKNVDDFTNLIFKQLMDRELGEIDYTGAAQLKFGASYYPDTVTSTAELLVYLTEDAPESAGDADSEAMDATFQVDNKHQGEVLMVGQKIQQLIADQTPIYDREAKQVRPMTYGDITLLTPTRTNNLIITDELRRLGIPVIVNDAQNYFKTTEIQIMMALLQIIDNPYQDIPLAAVLRSPIVGLNENELALLRINQRTGDYYQAVLHFQRSFVPNQASDFQQAVYQKVSHFLEQLQEFRDIAQQDELVTLIWRIYQETGFLDYVGGMPAGEQRQANLHALYERAKSYEQSSFKGLFQFVRFVERLQERDDDLAGAPVQAADDAVSVMTIHGSKGLEFPVVFIMDASRQFNKQDQQGNYVMSGKTGIGIDYLDPDSRVKAPSLQKLVTAQAISRASLAEEMRKLYVALTRAESRVYIVGSHKTQEAAISAWEQAYQSPDLVLNATLREKNTLANYLDWIGMCLVRDPKFAAELRQGTTTFSGLAGDPATFAVHFVTAHDLGPTQGVNETAVDWLQAASETAAKVTTPPVDTEQLHQIMDFRYPHQAATATTAYQSVSEAKRLFEDPDNATIGEYQASATGQVGGHRFVTHDFARPDFLQTVREPLATEIGSATHLVLQQLDVTVTPTLDRVQGVIDQLVADQVLTAEVAQRIQPELILRFFSSSVGQQVLAAPDQLHREVPFSLLMPARSLFQDFQETDSQVLVHGIIDGYLTTPAGVILFDYKTDHVNAQNQAASIEKIVERYGGQVNLYAAALKQMTGQPIVGQYLYLLAIGELVAVPEQQVRRLSE",
        "MKITKYRTKKSLGQCFILDPAIAEKIVSYAGCLEQYNVIEVGPGLGIMTQSILNKGVRRLTAIEKDRRLSNIHNKLKEAHAEYDCIFEDILDVNIEQLLSQSPLKMISNLPYNISVILLLKLLPYIHRFEKLILMFQKEVADRIVAQPNTKSYSILSILVQLLCDVRKVEDFPPEIFSPSPKVYSSVIEITPLLSPRFSVDNSYFAQVLKKLFHCRRKTIRNSLKSCIKDADSLFIGCNIDPNARAESLTIEQLCSLTNALKARNINII",
        "LHFAMKNYDQNGSLWNNRNPSKRCLFDFTCLETGLLIFSSVLLSILIGVLTLWLFVYRDSSFPSNVKRDLFEEDNLLSVGIDDSASYHNGYVDPCDDFYEYACGNYPVNRHLPPNKAIRHTLSDMQNRLNKQIRKLLQAPVTADEKPWNRLAKQYYQKCLNEEELEVTGASSMRKLLRDLGGWPVLDGHTWKPWNNSWEKQLAHIMNKTAVNAIILELAVSHDPINSSRFIIEVDQPKWGIGPRWSYLAGIYDLVIENYTSLMIQTAVNLGADLMHAKHDMKKAIEFESRLVNFSIDEITRRDPERGNNRFQLWQLDKIFPHMDLITYIYTIFDGLEKLTPNDTVIIREPEYFRRIQEVMRRSSKRTIANYVLWRVIQGYSTFLPSAMREPFYAFKANQTDISNIPVAERWEDCVFLTTAMLDMPVGGLYVANHFDQLRAMKKMNDLTKHIKRELIKQLQTVDWMDEETRQRAIIKAQHINYKSGFPLYIFNESYMKENWALPETTDNESLLEFTIRIKCARITDELMRLKKFVDTSIWFQGPAQVDAYYAPNLNEMIFPAGIMQFPFMLPGVPSYITYAMVGAVIGHEVSHSFDDQGCRFDEYGNLNNWWDAHTAHKFHEKTECFIKQYNAVKVEEAGVYLNGHLSVGENIADNAGLKTALIGYKSWVEENSRQEAALPGFQNMTSMQMFFLAYANNWCSLIRPKHYLQIIMADVHAPNKYRAIIPLQNRPEFSEAFHCPEGSPMNPVKKCSIW",
        "ACDTDFDSSLTACSGVESTAAPQKLLILDARSYTAAVANRAKGGGCECEEYYPNCEVVFMGMANIHAIRNSFQYLRAVCSQMPDPSNWLSALESTKWLQHLSVMLKAAVLVANTVDREGRPVLVHCSDGWDRTPQIVALAKILLDPYY",
        "MLGMPFTGMSANEWRNPSKVDDLSCLVCGDPNAKRHYGAMSCNGCKGFFRRSIWEKRVYHCAFGGRCIIETKYRNRCRQCRLKKCEAVGMDREAVRTERKKKTPDLDNKTIKMEIKEEIDTDSDDDANLPNIHSDYSTMGHEASPEDIKPDPFTLLFAGRSNSERIAALRIGEEKVMNAFEVSFYVAHYTMDCAIGPAIENPANVCERTEVLFHNSNPPLITFDTLRFNWCRTFTLTIDWFATLPEYNMLGNIADKKLLVTMALMPVGWLWYAYMAYVTKTEGIKFIDGSWFPSDETLQQSVCSKCVGYYGKITKAFMADVVSRMKELQMDETEMCLLKAIITTKPSHLYSQFGRIEMTKGSMNYRSTLCEYIRGKCGGSYPDAAVRVAKLLQIIPIVDVLGKFEDESAILVSLEEASFGPGGGLAYDIHTKEATKTERKEKENAFQEHNNAQHHMFKQQ",
        "MHPEILEPMADEEEKQDCTQEPGVVPGVEESAGDHGNAGQGSRKEEINDPKETCAGPSDTSYKSEQKQSGDSRLDGCLAHQRNDKEDHGPRMTKRFLQKLCKQHKLYITPALNDTLYLHFKGFDRIENLEEYTGLRCLWLESNGIQKIENLEAQTELRCLFLQVNLLHKIENLEPLQKLDALNLSNNYIKTIENLSCLPALNTLQIAHNHLETVEDVRHLKECLKLCVLDLSHNRLSDPEILSVLESMPDLRVLNLMGNPVIRNIPNYRRTVTIRLKHLTFLDDRPVFPKDRACAEAWARGGYAAEKEERQQWENQERKKITDSIEALARIKRRAEERKRQAESQEKGEVPVPDKNENVDVDEKGKEEPHEDGEREQKMELFVKESFEAKDELFPEKANVLEELPADVNTEIEDQDPEGVLPAEAPEPATLGATWEESAPQIVATENALGTEPVGHEDLETITLKTEEKLFIADLPDLEDADTGDSLEDKDKKQMCFPKITTISGLSDDSDPELDDTSLPVLESTSTHTLSNIFAISKDTARKAEAPYTHIFKEAAERDLETQSGDTTCPRPLIQELDDDEPSDQPPTPPTCKGDAPPPPSSDGYDDLPSASPPGEQSETQPEEPTVPEDPAVPEVGADLEDIEFGLD",
        "MAQKSEGFRSKTRYKLKKHPREKGLFPITRALKEYKEGEIVHVIIDPSVQKGMPHPKFHGKTGTVVGQRGNAFIVKVKDGNKYKDIIVRPQHLRECKA",
        "MNIINLGILAHIDAGKTSVTENLLFASGATEKCGCVDNGDTITDSMDIEKRRGITVRASTTSIIWNGVKCNIIDTPGHMDFIAEVERTFKMLDGAVLILSAKEGIQAQTKLLFNTLQKLQIPTIIFINKIDRAGVNLERLYLDIKANLSQDVLFMQNVVDGSVYPVCSQTYIKEEYKEFVCNHDDNILERYLADSEISPADYWNTIIALVAKAKVYPVLHGSAMFNIGINELLDAITSFILPPASVSNRLSSYLYKIEHDPKGHKRSFLKIIDGSLRLRDVVRINDSEKFIKIKNLKTINQGREINVDEVGANDIAIVEDMDDFRIGNYLGAEPCLIQGLSHQHPALKSSVRPDRPEERSKVISALNTLWIEDPSLSFSINSYSDELEISLYGLTQKEIIQTLLEERFSVKVHFDEIKTIYKERPVKKVNKIIQIEVPPNPYWATIGLTLEPLPLGTGLQIESDISYGYLNHSFQNAVFEGIRMSCQSGLHGWEVTDLKVTFTQAEYYSPVSTPADFRQLTPYVFRLALQQSGVDILEPMLYFELQIPQAASSKAITDLQKMMSEIEDISCNNEWCHIKGKVPLNTSKDYASEVSSYTKGLGIFMVKPCGYQITKGGYSDNIRMNEKDKLLFMFQKSMSSK",
        "VSLILGILETVFQKADSDLDYIQYRLEYEIKTNHPDTAGKRNPVTLLKELSAIKSRYQTLYARFKPIGIEQKESKNRICATVNKTMTMIQELQKQTDVELSPLTKEEKTAAEQLKSFVQTYEEVDLQKGILMERRSIPERFKKM",
        "MYLLMLLPLLFQLSGSSPVTGPKALRGQERGSLTVQCRYTPGWESHGKWWCRGADWSSCKILVQTTASEPEVKRDRVSIRDDRENRTITVTTEQLRLDDAGIYWCGIARVGTDHGAQVRVTVDPAPVTSGDDSLNMTSHGPNGSSIFGNLSTLLPLIFAVLLLLLVVASVVVWRMVKQQKKGAATSPEQPLESDLCYANLNLQEPNSGSSQRKASTQPSSSAQGRPKDVEYVTMAPFPREDIAYAALSLGDNENQEATYSNMGDLLAHDPSRSHEEPTEYSAVKKA",
        "MAARTVAVAAALAVLLIFAASSATVAMAGRPTPTTSLDETYNKHINEAAQAAAQSEIGGGCKEGEGEEECLARRTLTAHTDYIYTQQHHN",
        "MDFEQLLDKSLNKVREEIKTELSKSLDEAIKLLNEGHTKIIQEYTQRINELITKTKEEIEGEKARLEVENKRTLLVEKEYWINKVYERVLEKIGEVVKTKEYKDAIQSILNKEIKEMEGEKITVYCSPNDKSTVEKVVGNNKNVTIKTDDKMLGGIRIYYEGSGLTRDFSLKLILDQVFDSMRGKISDMLFGGK",
        "MALPTPSDSTLPAEATGRGQRRRLVWTPRQREALRACLERNQYPGIATREELAQAIGIPEPRVQIWFQNERSRQLRQHRRESRPWPGKRGPQEGRRKRTAVTRSQTALLLRAFQQDRFPGIATREELARETETGLPESRIQIWFQNRRARHLGQGGRAPAHAGGPGDAAPGGCPPAPSPVAFTHTGAWGTGLPALHMPCAP",
        "MANCYLFAKSPHRTATSTLLYSLLLLFVYFNLFKAERPKTIFIHNGHAGLSRSHRVEGASSPFPPSARPTTAGVCNEDEFRCDDGKCIRNEWRCDGSGDCMNGEDEKDCPHPGCKNDQWQCDKYEWHSVSCIAEYQRCDNITDCSDGSDEKDCPSPTVSCDNNDGSVFQCADGRQCFNSSKMCDGIFDCRDLSDEKSSCRENHTACFQYQFRCADNTQCIQKSWVCDGTKDCVDGSDEPESCQFKPCQVTDFQCKNKRCIPKKFQCDFYDDCGDSSDEENCGHYKCSPHKWACPNSGHCIDEVKLCDGISDCPDSSDEKNCSSNLCHTLGCQAGCIKSPTGGKCTCPNGYKLDDRFQRTCSDINECSEFGYCDQLCENHRPGFTCSCKGGCFTLKMKTADPNGGNSTMRGYCTSPDPEQMRLFVARREGLYKINPYSTSEEAKKITSGEFLYGVDYDYSDKKLFWTDRLAHAVFSADLTDTGDIDKIKKLDLKSLIFPRNLAVDWITKNLYIIESGSRRIDVTNYEGDRRTILIADGLVLPLDIALDPIHGELFFTNQHNVEGASMDGTNRRVLVSTHTHQVSGIVVDIPAKRVYWVDPKVDRVESINYHGKDRKIVAQGMRSVPHPFGLALFDENLFWTDWTRLGVIKVEKFGSNSDIIWSKKENNVFPMGITAYHYSSQPNEQQSDCYDVKIHNPCKNSECEGMCVLSSSDSTDAVGYKCACPIGQRLVGGSKCIPAIDYLLFSSNKVVRGIYPKIPNKALAEAILPISPSSQRRIGMYFAVECDVHGNSFFYADIMDNTVFRIKPDGEGNAPILVTHNDGLISMSYDWISKQLYYIDNIRNSLEVVKVSEQGLLNADQLEHKKLLTNLRDPVSIVVHPWKGYLFYAEAERPAKIYRCSMDGTDCLVIRNTSLGRPSSMTIDFIENRLYFSDSLLKIIGSIKFDGSDFQNVPIEGGIPVSIAIMDEDLYYIHQRPYSIRVINKKTGGDGNVIRDFSKEERSIFGIKACSEQNQPIPDLSIDHPCHNHDCGHFCFPIPQNATNGSEGEITKRCGCKDAFKLADNGLTCVRDTNDIPEVTCPTNGTHFQCSNGRCIPMEWKCDGEIDCLDDGSDEIGEDGKKCSGDIKCPENTIKCEITKRCISSLYGCDGDNDCGGGDYSDEDPKYCKEGEAPVCGAKKFQCANKRCIPEAWKCDSDNDCGDGSDEDLTLCHNHTCTVNQFSCGNSRCIPVYWLCDGDEDCYDGTDEDKERCPPIQCRTDQFRCANSRQCISLKNLCDGQDDCQDGSDEDSCLIEKGKCNDNQFKCVTSGICIPKSWHCDGQKDCDDGSDEPNNICGVKTCPKDHFRCDNGKCILSTWLCDGQKDCEDGSDEDPKNGCNSDSLYQTRRCPFEHTPCINDPNVCIPFHQLCDGKEHCPGGTDEGGRCSRDLCAADRAGCSYKCHNSPNGPICSCPFGEIVVNKTSCDQENECLDPRSCSQICTDQKHGYDCSCEAGYQLMKDKKTCKVAENRDLMRIYVSNRNRIYWSDSKLDNWRTFAAQVENAVALAYDSVAERIYWSDIREKKIFSATLNGTNITTFISEGLDITEGIAIDWIGRNLYWVDSSLNTIEVANLDKEGARAILIHENVDQPRGIALDPRKALMFWTDWGQNPRIEKANMDGSDRKIIVNTKIYWPNTIALDLTTNRVYFADSKLDYIDFVNYDGSGRHQVIASTKYVQHPHALAVFEDMIYYSDRRLQKLQVYPKYSNGTSDEYPSHSFSKALGVVATHPLLQPTSENNPCKNNTCSHICLLGPNNKSTCFCPLGMVLDGSKKNCIKDNKDFLLIIQRNNIFGYDLEKTYNNTPALQGIIPMAGLSNAYDADIDTTSEEIYHLEKSSTARLLGASVISMGSIWKTLINTNNKTQIYGSTIPDDNNCMAFDWNGRNLYIGNKVSQNIEVLRVSGNVKYKAVLLTNDQSPTAVADPVSIAVDSDRGYIFWLDRGNGAVPPKVGRADMDGKNALVIVNNDLTELDHIALDTIGQRVYYTESKAGRITSVSYDGQDRHYVLNDGGKQPNAVAYINNKIFYSDSAFDKIFVGDLTNPNAFVEFKTFRSDIENLNNLKAIKVSQSGTTTHPCRINNGNCAHLCIPKQFNQYSCICSSGYINDGSNGCRIYDDSFLLIATKTRVSGIPLDTTNGKGVAIQPIGGNGITSIDVEHETKSIFIAESQGSNKGISRVSIGEGEITQIVKDLFGNFVIKSVAVDWINYNLYFISADADRSHIEVCQLDGKYRKIILTTKTETPSSIAVDPVARYIYWSDRGQKPTIQRAYLDGSNRQAIVHEGLKEPTDIIVDPNTHYVYWTDAGLDGIFRVRGDGGTPELVRSDIAEATGITILGQNMYWTDSRLEKVFMASNRPVQGSMIMTPTTISAAIPDLGDVVVFDQLSQPKSSSPCHITDNLRKAPCPQLCFAIPGSQTPNCACSRGVLKGKSCEEPESFLLFSDGDQLVDYNLVPNIKAPPPLRDHLPTIPNLQTFDIDVNLRRVFYVEENPLGANISWFPMNLPSSSRQVLTPNKEKKSVDLATRHISDLKLDWLSQKLYWTTGRTGKIFAIDVQGNHLASIATGDWTYALTLDPCSGLIFWSDSGYKASGGAYTPRIERANMAGGDREILVSENISLAAALTVDMKNQRLYWADVNRLVIESIGYDGKDRRVVASGYRAKSLDIWDQWLYLSDPISNAVFRMDKDTGNNYEIVVSDRRIPGTLRVFSSESDVKLRNQWCSLHTAELCRKNNGGCSQLCHPVPTEIGLSATKVQCSCADDYELVQQPGEDYPTQCVKRENDQTSCQPPYNFQCASDGKCIPLSDTCNGVSDCSDASDEEQSYCNTRFCPEKYYLCTNRRCINEDLRCNGISECGDGSDELDCPTTAICGEGMFQCGNGHCINATTKVCDGHLDCHDENASDENATTCPGLPIDCRGVRIKCPNTNICIQPADLCDGYNDCGDKADENKLFCMNQQPPKHYVRCPNGRLIPETWQCDGDADCENSWDETHTNCTDSSGKKICVGEYLFQCNNGKCISKAFICDGESDCADGSDESSIHACGNRTCSNEEFHCKSNALLPQPKYECIPKSWMCDGEVTCANGEDEAEELCGVARKDCNKGEFRCKNSHCIHAAWECDGDVDCLDGSDEHSNCTYTACQPDFFQCSNHKCIPKGWKCDGNFDCEGGEDEKDCTGDQTSEGIDFSSCPAGQFACTSGECIDEKKVCDRNYDCQDRSDESSSCFVNECEISDSHLCEQKCTDLTIGYKCECFDGFRINEKDKKSCIDINECEEGKSGCSQYCENKIGDYKCSCAKGYELSRNEMSCKRIDSEEVPYLILANKHYVRRLTIDGKNFELIAKGFDNVVSLDIDMVENKVYLLDSGKLRMYKVGINQINGPLKDYETIVRHNVYGTEGIAVDWVSRKLYLLNRQERSLKVCELNGRYCRTLIRDRIQQPKALVVHPKKGYLFFSEWSLSPYIGRVALDGSPDKEDPIVKIAENDLGWPNALAIDYYTDKLYWGDAHLNEIGFMNFDGTHRRKLASKLTSHVSSLVVFEDFIFWSDWNLRQIIKADKWTGANETVLESTLQLPNDLRITHSLAKPMYDNPCGSNNGGCSHLCLIKEGGDSYTCSCPDQFTLQADGKSCQANCTDRQFTCGGEDAKCISKLWYCDGERDCANGEDEPGPDICGVRVCPIGEFQCKNHNCTRPFTLCDGIDDCGDGSDEVECDKPCDPWMFKCKDTGKCLPKHFLCDGDRDCNDGSDEDDKVCKVETKNCTAEQFRCGNNKCIPKAFVCDNDDDCGDLSDEPNECANIECKKGWSRCASSYRCIPDWAFCNGQDDCRDGSDEVLARCPACDDVGEFKCPSSGKCIPLRWKCDSENDCGNNEDETDPSCGGTSRPCSESEFRCNDGRCIPESKVCDGTIQCIDGLDEQNCNKRQCREGYRQCAEDGTCIPEHKWCDRRRDCPNASDETSCHGNITRRACTEFEFECGDSVCIPKKFQCDGDFDCSDKSDETNEECKLAACLPPLRFRCTHSRLCLNVLQLCNGINDCGDNDFSDEHLNMCDSFVGYDECSSDEFKCSNRKCIKIENVCDHVDHCGDGSDEIGCAKSKGKTCTSSKDNGGCRHLCTDVKDGYFCHCREGYQPDPDNPFDCIDIDECKGNNTCTQSCLNTKGGYLCKCLDDYENSVFVGAMSGKDCRAKGGPAQVIIAADDEIVELHLSGGEGTNRHAVANAAGTTGENDIIGVEFDPRRELMFWIDITQKKIYRSALPKGNQSHAGQPLEIDFASLGVTPTAIAVDYVTGNLYITTVNDNASTSSIIARKKRMSEPIKNTGAIYVSKNDGRYFTKIIGSRLEMPTAIVTIPSIGRICFSDSGMHAKIECADMDGRKRNIIARELVFSPSSMTVDEGKDNRIYWADPKYHKIDSILPDGSDRKIIVKDRRAPYAVDVFENNLYWGSKETKTLYVQDKFGRGRLYVLASSLEDIHSVRIQQRFAKDMKRIEGSCKSSDCSHLCVELPNNGFHCICPEGSLQKDNLQSDGKTCSAPKVEALEMPQQCKCENGGICMINGLCDCGDMEGEYCQKGSSVTKQLIGSFRSGALIGILLMILALIGMGVIAFLAINAYQKKWLLFKKKEGNDPSVSFSGNVISFSNPVLENKQNEPTQIEYQTATLTAVSTGEGVPSSTTFSNPVYELEATDNIELPSTSFQSYTPVIDNNIEKDKKTISPMTVENPLADLDDINHVIEPSYNVIAPRSDLLKSPTIPQRTIMGVEKDKTHLVPDQISDV",
        "MAGLLLLGLALSTGAAVAKLEGNDPCLRSQVFFRDTCYEFMPLGHTFHGAQGWCEGRGGHLVFIRDEDTQKLLQKHITQDRDWWIGLTGTSAPNETVGGSGTWLDTTSVNYSNWQGGQATPAPGTCGYIRSGPSSQWAALEDCSQAFAFICEFGVGRSLACEGHNATMHCGSGEVIQVQDAFYGRQTPYFCTQDIWPPSDLERECGWASIKDEVAGQCQGLQACQVAADGTYFGNLCPTRGSYLWVQYQCLEGLRLVVPSESSTFDNVTISLVWLLSPYTGNLSCVLSMGDGHTFDPYYPPSVSSNVTHQFTSPGEFTVFAECTTSEWHVTAQTQVMLRDKMEVPRVTGCAGLSGSGASFLCQAVFGEPLWIQVDLDGGAGVTYAVLSGNVTLAEYTTQRGLRSYNLTLDRETQELLGPGRHHLNIRVVGNSTASAPPVNITVHFVELLSGLQASWASDHVELGCDLLINVSVACGTLEELTFEMVGLNANFSQKEESGGQSSGTYHVTIPVEGRCWAQWSDCVGRQLLHTDQRLLVLPPSCLPPLNSAVTLYLAILRGQELERETERCLYVFSPLDLQPQISCEKNCQPVKADQDVLLTVTVEDESPMAMFSWYLDDTSSDKDEPLPDACRLRGFWPRSLTLLHSNSSMLLLNSSFLQTWGPVVRIRVTALTSHAYGEDAYVISMLPLPEVPACAVIPEEGTVLTSFAVFCTTTTAPGPLEYCFCLQSGSCLHCGLEPALPVVYLPLGKEKDDFVLTVVISVTNQAGDSQQTQVAVKVGHGNTGVDNETFQAIVSERITTARQDEHGSDQLLLFAKAVSSELNQEDQSPGSGRLRTDIKWKVRELVLRSLSTLATGLENMQRVQGFAETLREVTHRSEELTPVAQWEAIQVLQHATEALLTASAKVHPEDQRRQEATRAMFQAVGSVLEVSLSRGSKEPLEANSSQAHIVTQILQIVDHLQTALLLGTLPGSLPGILVTPSISVYTDRIQPWSWQGSSVHTTSADSVTFTLPATTSLFPLEDSQEPMDIRMMSFSQNPFLSRSRFEVSGTVGGLRLTSSSGHPIPVKNLSQNIEILLPRISEHSKPTMLSLATPEALWVNVTAGEAALGIQLHWGPGVALTLSLGYGYHPNETIYDAQTHLPPVAATGELPTWILGPEDLSFGKGIYYLRVVPKDDLESTSSQNLTVGISTFLSHCVFWDESQETWDSTGCQVGPRTTTSQTHCLCNHLTFFGSTFLVMPNAMDVQQTAELFATFEDNPVVVTTVGCLCMVYMLVLIWARRKDIQDQGKVKVIVLEDNEPFAQYHYLVTVYTGHRRGAATSSKVTLTLYGSDRESEPHHLSDPDAAVFERGGVDVFLLSTLFPLGELQSLRLWHDNSGDRPSWYVSRVLVYDPVADRKWYFLCNSWLSIDVGDCVLDKVFPVATEQDRKQFSHLFFTKTSTGFQDGHIWYSVFCNSRRSSFTRVQRVSCCFSLLLCTMLTSIMFWGIPKDPAEQKMDLGKIEFTWQEVMIGLESSILVFPINLLIVQIFRNTRPRLPLEKDGRQEQGPPNLTPSLQPMDEGIRTLEMGVQSLLSSLFKALKVPPPASGWDSMNLMDINYLLALMEDLVCLENTTGQGFLEEAKEREDPFTSTPGSGQLKENTWPPRPKLAASGLWKDGIYRQCLYLQLEHVERELQLVGPQGFLHHHSHAQALKQLHVLKGHLWGQPGTPARTYASTPRASKSPRGLPWWCVLVGWLLVAATSGVAAFFTMLYGLHYGRASSLRWLISMAVSFVESVFITQPLKVLGFAAFFALVLKREDDEETLPSLPRHLSGPGSHAMFRTRRCSSKDAYQPPLTDAIEKMKTTRLQEQKVFALIREILAYLAFLWMLLLVAYGHRDPNAYHFNRHLEHSFTQGFSAVLGFKEFFEWANTTLVKNLYGHHPGFVTDGNSKLVGSAHIRQVRVREGSCPVAQQLQASFDGCHAPYSLDVEDLANYGEGWNVSAGNNSNGFLRVWQYQSQSQRQGYPMWGKLTVYGGGGYVASLGTDRQSTTRILQYLFDNSWLDTLTRAVFVEFTVYNANVNLFCIVTLTLENSGLGTFFSHAALQSLCLYPFTDGWHPFVVAAEFIYFLFLFYYMVVQGKLMRKQKRAYFCSKWNLLELAIILASWSALVVFVKRAILADRDLQSYRKHRGEGISFSETAATDAALGYVIAFLVLLSTVKLWHLLRLNPKMNMITSALRRAWGDISGFVTVILIMLLAYSIASNLIFGWKLRSYKTLFDAAETMVSLQLGIFNYEEVLDYSPVLGSFLIGSCIVFMTFVVLNLFISVILVAFSEEQNYDQLSEEGEMADLLLMKILSFLGVRCKREEPKSSNEQPELSSQGLSPQPAQALPRI",
        "MISWINGELVELWQTNQKFFVLINCQGLGYEIQILESFFLKLNKNQTSNKKITLWLKHIKKEDSDLLFGFTSKEQKNFFIEILSIRGVGSQIGMGILNKFSISEIINAIKTQNKKLICSVPGIGQKMSDRLILELKNKFKSEIQFEEEKAIDEFEIKDPEINKMIEDLQLTLQSLNYKNKEISTILPIIINEVDFIAKKENNLSFENLLKLAMNYLDKENSNIAS",
        "MKILIINFGSISRNFLPLYQKEIDKIKEFNYQIEFVNLTESHIENMNLKKTLETKAILQKIPKNYDCYLFSERGKMVTSEEFSQLLNSANLCFIIGGSQGVNEKLISETLPKNRFLSFGKITFPHKIFKLIVLEQIYRGFSIKHKRKYHHSS",
        "XVCDTRIVGNDNDRHVIREWQLREAKYENLRHVDSEFLLDIDRAWMYLPIIEEQVDRISAE",
        "MKYLILIPDGLADWSIEKLGGKTPLEYAQTENMDFIAREGICGIAKTIPEGFEPGSDIANLSILGVDPRKYYTGRGPIEALAKGIKGDVIFRCNLVYIENGVMVDYSGNRITDKEAKEVIRELNENKPFDFVEFHHGFAFRNLLVVNGIEGNAKTFPPHDIMGEKIEKYLPSNGELAELLRKLIYWSMEFLPDVSEKVNAVWPWSGGKLPKMPSFEEMHKLRGCIISEVDLLYGIANALKMDSLKVEGVTAFVDTNYKGLAKAAIKALSKYDLVVLHTEGIDEAGHEGDVELKVEAIELYDEKIVGYIIDRIDLEDTKIMLLPDHPTPIKVRTHVAEPVPVAIYCERKDDVKRYSEKDCRRGKLGLVNATELIKIMKRV",
        "MYIGRFLVFGKTEEGYPFVTYRVSSRSFPNRLAKVMDDDTVSILPKELEEMFKNPYITYNCVKLVGDVAVATNGSHTDIIADKIKLGLPIRDALSYSLLTMDYEKDDYNTPRIAVVITKDEAYMGYVTDSDVRIKKVELEAGKAYYLGVYDACKITEHQVISVTGKTAEDLTKFVMDYEEFEKPVTAATVLVKDGFKLATL",
        "MIEFKNVNKVFRKKRETIQALKNVSFKIDQHDIFGVIGYSGAGKSTLVRLVNQLETVSDGQVIVDGHEIDTYKEKDLRDIKKDIGMIFQHFNLLNSKSVYKNVAMPLILSKTNKKEIKEKVDEMLEFVGLADKKDQFPDELSGGQKQRVAIARALVTHPKILLCDEATSALDPATTSSILNLLSNVNRTFGVTIMMITHEMSVIQKICHRVAVMENGEVIEMGTVKDVFSHPQTNTAKNFVSTVINTEPSKELRASFNSRKDSNFTDYKLFLDSEQIQLPILNELINEHHLNVNVLFSSMSEIQDETVCYLWLRFEHDESFNDFKLTDYLSKRHIRYEEVI",
        "SQDGIKKLLEAERTAQKIVNDARQDRVQKLKKAVEEAEKEIKEFREKKDKEYKEYESKYFGASTETATQLLQSANEEIETIRTETAANKEKVVDLLIKYACEVNNKNIKV",
        "MKRTPLYEAHLRHGGRMVAFAGYALPLQYTSIVEEHLAVRRGAGVFDVSHMGEFLVRGEEALAFLQWATANDASKLRVGRAQYSMLLNAQGGVVDDIYLYRLEEAAYLLVVNAANIAKDWAHLQGLAQGFRVELEDLSEGTALLALQGPKAAEILQGLTEADLSKKRKNDVFAAQVAGRPARLARTGYTGEDGFELFLAPEDAEAVFEALLAAGAVPAGLGARDTLRLEAGFPLYGHELTEATNPLCTPWAWVVKREKAFFGKEAALAQACQEEVVGLVLEVGLPREGYPVLSGGRPVGRVTSGGYSPLLGKGIALAWVERGAQGPFFVEVRGKPVGASLSPLPFVPLK",
        "MLWSGANDTSDESLESTEGGYAGLYRWTVCIHTENMVCIHTENDALFGSRVSPSRKYKEFAQDDTNYKREGRRRVRSPESTIMRSNSWSGLDSGFYRRNDLLPPSIEEDMEVPRPIESSNSLLNSSRVYRRPEEQPTDTFAARRRRLGDDGEDHSIVLQSPQQDDPLISKLFQKKTRTRKPEDHTKRVQIPGKFPSPSKNAQQKNYTADYLEVLDQLSRNERLLDDLNQDFHKKQSRIQQREQTYQEKYLQTRAELIDELKHSKRLYDNYYKLYTKYQQLREISQDAVRMQHRISGLESQLVDSAIDKDRQIHDLTRKLFDMDLRVQESETARKREAASYQARIDELERQNMLQPDVGVSSLSFSPSNYRDTSSDYNPAIDSHFLKNLV",
};

inline std::string Q[] = {
        "VCIHTENQVCIHTENNQVSFYPFVLHEISVLIELTLGHLRYRLTDVPPQPNSQPDSATNYVWML",
        "MWLFFGITGLLTAALSGHPSPAPPDQLNTSSAESELWEPGERLPVRLTNGSSSCSGTVEVRLEASWEPACGALWDSRAAEAVCRALGCGGAEAASQLAPPTPELPPPPAAGNTSVAANATLAGAPALLCSGAEWRLCEVVEHACRSDGRRARVTCAENRALRLVDGGGACAGRVEMLEHGEWGSVCDDTWDLEDAHVVCRQLGCGWAVQALPGLHFTPGRGPIHRDQVNCSGAEAYLWDCPGLPGQHYCGHKEDAGVVCSEHQSWRLTGGADRCEGQVEVHFRGVWNTVCDSEWYPSEAKVLCQSLGCGTAVERPKGLPHSLSGRMYYSCNGEELTLSNCSWRFNNSNLCSQSLAARVLCSASRSLHNLSTPEVPASVQTVTIESSVTVKIENKESRELMLLIPSIVLGILLLGSLIFIAFILLRIKGKYVFMLPIQVQAPPPEDSDSGSDSDYEHYDFSAQPPVALTTFYNSQRHRVTDEEVQQSRFQMPPLEEGLEELHASHIPTANPGHCITDPPSLGPQYHPRSNSESSTSSGEDYCNSPKSKLPPWNPQVFSSERSSFLEQPPNLELASTQPAFSGPPADDSSSTSSGEWYQNFQPPPQPPSEEQFGCPGSPSPQPDSTDNDDYDDISAA",
        "MRFSDNLAKILDKYENLGNKLSSGIMGDEFVKASKEYAELEDVVAKIKEYNKAKSELEEANNFKLEVGLDNATLEMIEDEIHTLENSLPKLERAVKIALLPKDDADSKSAIIEVRAGSGGEEAALFAAVLFNMYQRYAELKGWRFEILAISDTGIGGYKEASASIKGKDVFSKLKFESGVHRVQRVPETESQGRIHTSAATVAVLPEAEEVDIQIEDKDLRIDTYRASGAGGQHVNTTDSAVRITHIPTGITVALQDEKSQHKNKAKALKILRARIYEEERRKKEQERADSRRGQVGSGDRSERIRTYNFPQGRVSDHRINLTLYKIDEVVKNGQLDEFVEALIADDEAKKLLGIYSKNTA",
        "MRESRRTMARRSSDSPPLPPRPARRAEPHPGPDFAREAALLQKGVHCVAGVDEAGRGPLAGPVVAGAVILRVGHIPEGLDDSKKLGARERERLFEAILDMADVGLGSASAAEIDRLNIRQATFLAMRRALFALPSRPDHALIDGRDVPLGLPCAGSAVIGGDALCVSIAAASIVAKVMRDRLMTALCASDPRYGFSRHMGYPTAAHRAALAEHGVGPHHRRSFGPVRALMLAGESDG",
        "MEYKNTLLMPKTEFPMRGNLPKREPAMQEKWAEMNIYEKVQEHTKGRPLFVLHDGPPYANGDIHMGHALNKVLKDFIVRYKSMTGFSAPYVPGWDTHGLPIEQALTNKGVKRKEMTVAEFRKLCAEYAYEQVERQREQFKRLGVRADWDNPYITLEPAYEAQQIKVFGDMAKKGYIYKGQKPVYWSPTSESALAEAEIEYQDKKSASIYVAFPVKDGKNVLEGDEKYIIWTTTPWTLPANLGISVHPELEYSIVKVNDEKYIIASELFETVAKTLEWENAEVVKTVKGSELEYTVAKHPFYDRDSLVMLGDHVTTDAGTGCVHTAPGHGEDDFVVGKKYGLEVLCPVDDKGVLTNEAPGFEGLFYDKANKPITEKLEEVGALLKLTFITHSYPHDWRTKKPIIFRATAQWFASIEAFRKELIEAVAETKWVPAWGETRLHNMVRDRGDWCISRQRAWGVPIPVFYAENGDPIITDETINHVADLFREHGSNVWFEREAKDLLPEGFTHPGSPNGEFRKETDIMDVWFDSGSSHQAVLEEREDLQRPADLYLEGSDQYRGWFNSSLSTAVAVTGKAPYKGVLSHGFVLDGEGRKMSKSIGNIVVPKKIMDQLGGDILRLWVSSVDYQSDVRISDDILKQVAEVYRKIRNTFRFLLGNLDDFKPSENAVAVAELREVDRYMLVKLNDLITKVKEAYETYDFAAVYHAIHNFCTIDLSSFYLDFAKDILYIEGANHEDRRAIQTVLYDVLVALTKLVTPILPHTADEVWPYIPGVTEESVQLTDMPEAVQLDDAEALKTKWDAFMTLRDDVLKALEVARNEKVIGKSLNASVTLYPTAEMKAMLESISEDLKQLFIVSEYKLGGMMDEAPADAPKYEHTAVVVVQATGETCERCWVVSETIGKDAEHETLCERCATVVKENYVK",
        "ALWKDVLKKIGTVALHAGKAALGAVADTISQ",
        "MSLAVLLNKEDKDISDFSKTTAGKSAKKNSRERVADVAPTRVLDKKQAYLSQLNSEFNRIKRRDSIEQLYQDWKFINLQEFELISEWNQQSKDWQFDNTNDSQDLHFKKLYRDMSMINKEWAEYQSFKNANLSDIINEKDADEDEEDDEDELEDGEEDMEEDEASTGRHTNGKSMRGNGIQKSRKKDAAAAAAIGKAIKDDQTHADTVVTVNGDENEDGNNGEDEDNDNDNENNNDNDNDNENENDNDSDNDDEEENGEEDEEEEEIEDLDEEDFAAFEEQDDNDDEDFNPDVEKRRKRSSSSSSSTKLSMNSLSLITSKKINKNITINSDRPKIVRELIKMCNKNKHQKIKKRRFTNCIVTDYNPIDSKLNIKITLKQYHVKRLKKLINDAKREREREEALKNNVGLDGNDLDNDEDGSESHKRRKLNNNTANGADDANKRKFNTRHGLPTYGMKMNAKEARAIQRHYDNTYTTIWKDMARKDSTKMSRLVQQIQSIRSTNFRKTSSLCAREAKKWQSKNFKQIKDFQTRARRGIREMSNFWKKNEREERDLKKKIEKEAMEQAKKEEEEKESKRQAKKLNFLLTQTELYSHFIGRKIKTNELEGNNVSSNDSESQKNIDISALAPNKNDFHAIDFDNENDEQLRLRAAENASNALAETRAKAKQFDDHANAHEEEEEEDELNFQNPTSLGEITIEQPKILACTLKEYQLKGLNWLANLYDQGINGILADEMGLGKTVQSISVLAHLAENHNIWGPFLVVTPASTLHNWVNEISKFLPQFKILPYWGNANDRKVLRKFWDRKNLRYNKNAPFHVMVTSYQMVVTDANYLQKMKWQYMILDEAQAIKSSQSSRWKNLLSFHCRNRLLLTGTPIQNSMQELWALLHFIMPSLFDSHDEFNEWFSKDIESHAEANTKLNQQQLRRLHMILKPFMLRRVKKNVQSELGDKIEIDVLCDLTQRQAKLYQVLKSQISTNYDAIENAATNDSTSNSASNSGSDQNLINAVMQFRKVCNHPDLFERADVDSPFSFTTFGKTTSMLTASVANNNSSVISNSNMNLSSMSSNNISNGKFTDLIYSSRNPIKYSLPRLIYEDLILPNYNNDVDIANKLKNVKFNIFNPSTNYELCLFLSKLTGEPSLNEFFRVSTTPLLKRVIERTNGPKNTDSLSFKTITQELLEVTRNAPSEGVMASLLNVEKHAYEREYLNCIQRGYHPNVSAPPVTIEVLGSSHVTNSINNELFDPLISQALSDIPAITQYNMHVKKGIPVEDFPKTGLFPEPLNKNFSSNISMPSMDRFITESAKLRKLDELLVKLKSEGHRVLIYFQMTKMMDLMEEYLTYRQYNHIRLDGSSKLEDRRDLVHDWQTNPEIFVFLLSTRAGGLGINLTAADTVIFYDSDWNPTIDSQAMDRAHRLGQTRQVTVYRLLVRGTIEERMRDRAKQKEQVQQVVMEGKTQEKNIKTIEVGENDSEVTREGSKSISQDGIKEAASALA",
        "MFLHEFEYELKGIGGLGEKGVERLNNLQIFNVKDLIEFFPVKYEDRQNIQTFPDFSKVKSCDMMTVFTVLGHKKFGDSSKKNLKLTVKSINEEPFEILLFNRAFLENVFKIDKKFYIYSKFTYNDYSGLWSCSNFDSEVYSDKPERFKKILPVYSLTEGLTSKKISLYVKEALEYFFKFGQTDIPRFLIEKYSLLSLSDALKEIHFPSSLEMLEKAKKTLIYREIFLLQFFSRYRSSKILFREKKDLSKDLLEKVVSSLPFELTEDQKISIDEIFFDLNSSKPMNRLLQGDVGSGKTLVALLSGLPLIEAGYQVAFMAPTDLLARQHYDNLSNILAPFNISMTLLTGSLRKKDKEQALESIRNGTSGLIVGTHAIFYESTEFKRLAYVIIDEQHKFGVVQREELKNKGEGVDMLLMSATPIPRSFALTLFGDLEVSFIKTLPKGRLPITTYLARHGNEDKVYEFLRKELLKGHQVYFVYPLISSSEKFELKDVNNMCLKLKEVFGEYVVDMLHSKLPSDLKEEIMKNFYSKKVDILVATSVIEVGIDCPNATCMVVEHAERFGLSTLHQIRGRVGRSNLQSFFFLLYKEPLTSAGKFRLKTIKENLDGFKIAEEDLRLRGPGNLFGLEQAGYLKLKIANFVDDREIIVLVREELDLFFYDNSAYDKLDIDLLDNLFCSYLNAGRSI",
        "MAARVKQIKRRGRTFLEQLYLIEVIKGMGVTITHFLRNLRDNRNLYVRDYPEVKPEITSRWRGRHRLTLHPDGTVKCVACFMCQTNCPSECIMIEATERLDGVAEKMPARFTIDLLECIYCGYCVEACPMDAIRMVFFTRSAFSPSSGRWVC",
        "MPTNCAAAGCATTYNKHINISFHRFPLDPKRRKEWVRLVRRKNFVPGKHTFLCSKHFEASCFDLTGQTRRLKMDAVPTIFDFCTHIKSMKLKSRNLLKKNNSCSPAGPSNLKSNISSQQVLLEHSYAFRNPMEAKKRIIKLEKEIASLRRKMKTCLQKERRATRRWIKATRLVKNLEANSVLPKGTSEHMLPTALSSLPLEDFKILEQDQQDKTLLSLNLKQTKSTFI",
        "MTINRKPIFRRVLLKLSGEALMGDEGFGIDPKVLDRMAQEIKELVELDVEVGLVIGGGNFLRGGSLAEAGMNRVVGDHMGMLATVMNGLAMRDALHRAFVNCRLMSAIPLNGVCDAYNWAEAISLLKTGRVVIFAAGTGNPFFTTDSAACLRGIEIEADTVIKATKVDGVFSDDPVKNPEATLYRHLSYNEIIDKELKVMDLAAFTLARDHNMPLSVFNMNKSGALKRVIMGEEEGTLISSQASDEVIK",
        "MSSRLFVFILICYATADKIEESDSDGYKLFTWKWEEVDQVYLITVWLLIAALAKILFNLMKPISKWLPDSSLLIIIGLALGWVLHQTTLIGTSLDSHTFFLYLLPPIIFDAGYFMPNRALFENLDSILVFSVFGTLWNTFAIGGSLLLMSHYDLFTMSFTTFEIFIFSSLISAVDPVAVIAIFEEIHVNEFLFINVFGEALFNDGVTVVLYQMFKSFALIGSENLSTLDYVKGGLSFFIVALGGAVIGVVFAVAVSLTTKYTYDVRILAPVFIFVLPYMAYLTAEMLSLSSIIGIAVCGMLMKQYIKGNITPAAANSVKYFIKMLAQSSETVIFMFLGLSTITSQHHFDLNFIIATLFFCLLYRAIGIIVQCFILNRFRAKKFEVVDQFVLSYGGLRGAIAYGLVVSIPASITAKPMFVTATIAVIYFTVFLQGITVRPLVNWLKVKKREERDATMVESVYNKYLDYMMSGVEDIAGKKGPYTLIENFERFNAKRIKPILMRHQKKESFDASKIIRAYEKITLEDAIRLASIKTTIQSGRLESTVAVHSSSNQKTVTPRHLQLEKFMNSGENIDSLYSLFSDLLDRKLLEMNTKSPASEVKGGGEDIQDDYMTEVKSRSNLAAMFRSAEQLDSDPAYNRQRRQSAGDLDAKKKNDFLRV",
        "MKKYSTAFIMLMMVAGAVSAAFAGEGATADAMARAIFYGGVAIGAGVAIGAAAGGGAAGLGNAIRGVLEGMARNPNMGGKLLTTMFIGMALIETFVLYGLLIAIIFLFTGIFDGKAGF",
        "MNILELSEQEIIRRNSLNELRAMGIEPYPAAEYVTNAFSTDIKAEFKDDETPRQVSVAGRMMSRRIMGKASFIELQDSKGRIQVYITRDDICPGEDKEMYNTVFKRLLDLGDFIGIEGFVFRTQMGEISIHAQKLTVLAKSIKPLPIVKYKDGVTYDSFEDPELRYRQRYVDLAVNEGVKDIFIKRSKVYSSMREYFNSKGYMEVETPILQAIAGGAAARPFMTHHNALDIPLYMRIASELYLKRLIVGGFEGVYEIGKNFRNEGMDRTHNPEFTCMEIYVAYKDYNWMMEFTEKMIEKICLDVNGTTEVKVGDNIINFKAPYKRVTMLGAIKEHTGYDLTGMNEEQIREVCKKLNMEIDDTMGKGKLIDEIFGEFCEGTYIQPTFITDYPIEMSPLTKKHRDNPELTERFELMVNGKELCNAYSELNDPIDQLERFEDQMKLSEKGDDEAMIIDKDFVRALEYGMPPTSGMGIGMDRLTMLMTGQSTIQEVLFFPQMRPEKVVPKDSASKFMELGIAEEWVPVIQKAGYNQVADMKEVNPQKFHQDICGINKKYKLELTNPSVNDVAEWIQKIK",
        "MTEFEKMNTPYCWELEIRNVQLSDSGSYMCHVNANQQPSVNYTIEFQVKAPRTIQNLTIVTSDNSANVSWDVQQGPQLKIGLRLVRRTGLNGQEVFSQTNAISPVTINNLRAATPYKLFVTVNDSQTDPFEITELFNTAESKPHPPKFEDVRVLNSGSSLICEVEWRAPALTNGRISRYYVRVQGAVRRMRPGGPLVADDFPPPTDEEKCANWDEREDSSHGINPIEFTTEFLSCKYGPLKPNRNYTITVWAENSAGRSSPLVFPKHCITNYAQPDV",
        "MSEPVVDTAELSAEEKKRLLRERRQAKMSKGKATARLNDILSQGSSVKTSGVKSVLDQEKEATPSHDEDPEIQDITEITTPPPRTPPIGEDAPQDIDKIFQSMLQQQGQGADTAGDPFAQIMKMFNQVEGGDSPPSESATSTQDPAELKYRQELLEYNTYNQKLWKFRFLLVRVSVTLFNFFYHYINLSNFHASNYAYVRDLSSEKYPVRDFFTWFATTEVVLVAAYYSIFHSLGLFHAANQNSFVLKAMSMGSMVLPQLEHYKPLVARFLGYYELLGIVLGDLSLVIVLFGLLSFAN",
        "MSEYTAPRQDGGRIQFRGEVMTQSAVNERVLNADLGQYEGKEVRLRGFVYTRRDLGGVQFLVLRDRSGIAQVVLSGAHLPLPESSVEVVGKVVRQAKAPGGFEVQAADLHILSAATEPPPVELPKVEWNANPETLLDYRYVTIRGLKDRAALKVQAVLVNAFREALLAQDFTEIFTPKIVSAGAEGGANLFEIDYFGRRAYLAQSPQLYKQIMVGVFERVFEVAPVYRAEEHATSRHLNEYLSLDVELGFVQSEDDVMDVEEQVLQHIVARLGEQCSGELAAFGAALPAFSGRIPRIPLMEARRIVTERYGHQIGGKDLDPEAERLFSQFVKDEFGSDFVFVTKYPRTARPFYAYFEEDGLTRSFDLLFRGIEITSGGQRIHDLDMLRRSLRERGMSEEGFEGYLEVFKHGMPPHGGFAIGAERLTARILGIANVRFARAFPRDRHRLTP",
        "MTVANWQVRDSSLILSAGEVEIRLEQARRDFGSLLPGILYFQPSAISPGEFDDEYILSGQEMVYVYLREQIARQCALGRLLPSNSSNFGTVATTIPPWLMDSRRLNQVLRQRCDRSGLLNYYQGRHTNQFFLAIMLSNCFLRFANDVINNESYGFYARGGNYIEEGGAGDDDVDDERDAGEAEPKECQIGNLINYPIIALGSCDLSA",
        "MSQAEQNFMITYARRKSARASCYIKPGNGKVFVNDIPIEIIPIEVVRYKIMEPLVLAGDKITSSIEARIYTQGGGIMGQADAARMALARALVKFTNSKELVEIYKSYDRTMLAGDPRQTESEKWMRYSARRWRQKAYR",
        "MSERSARQWPDFLSVVLLALLLWISLFCGWRALMFCCASVFSVALCVAGDYLDALIMSCRVPEHFARFVWPLTWLGGLSGLGLAVMATSQLKTGPEYVIWALAGLLTFWLSFRFRARLFG",
        "MAAGTTSDLRNGIVIRYNNDLYQVVEFQHVAPGNWRAFVRMKLKSLTTGKVIEDRVRAGAEIDIVRIERRPMQYLYREGDSFVFMDNDTFDQIPVSAELVGDAVKFMKENETVDLVYDAEKDQIIGVELPIFVNLKVVETTVAVRGDTATNVTKPATLETGAVIEVPAFINEGDVLKIDTRTGEYITRV",
        "MEFTRAVTGVARVASGCAAALPVDRVATVVIGATVVQAVPVVLSARGFTGAGMAKNSLAAKMMSAVAIDDGAVASGSLVATLQSLGATGLSRLTLILGSTGSAVAAGFVDFF"
};

class Result {
private:
    int diagId;
    int posQ, lastPosQ;
    int tSequenceId;

public:
    Result(int tSequenceId, int diagId, int posQ, int lastPosQ) : tSequenceId{tSequenceId}, diagId{diagId},
                                                                  posQ{posQ}, lastPosQ{lastPosQ} {}

    inline int getDiagId() const {
        return diagId;
    }

    inline int getPosQ() const {
        return posQ;
    }

    inline int getLastPosQ() const {
        return lastPosQ;
    }

    inline int getTSequenceId() const {
        return tSequenceId;
    }
};



#endif //MMSEQ2_MOCK_STRUCTURES_H
