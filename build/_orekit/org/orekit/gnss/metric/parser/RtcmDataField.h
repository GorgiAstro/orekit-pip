#ifndef org_orekit_gnss_metric_parser_RtcmDataField_H
#define org_orekit_gnss_metric_parser_RtcmDataField_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          class RtcmDataField;
          class DataField;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          class RtcmDataField : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_a85154f3de9bc0e0,
              mid_values_e41c0221a6cedd63,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RtcmDataField(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RtcmDataField(const RtcmDataField& obj) : ::java::lang::Enum(obj) {}

            static RtcmDataField *DF002;
            static RtcmDataField *DF009;
            static RtcmDataField *DF038;
            static RtcmDataField *DF040;
            static RtcmDataField *DF068;
            static RtcmDataField *DF071;
            static RtcmDataField *DF076;
            static RtcmDataField *DF077;
            static RtcmDataField *DF078;
            static RtcmDataField *DF079;
            static RtcmDataField *DF081;
            static RtcmDataField *DF082;
            static RtcmDataField *DF083;
            static RtcmDataField *DF084;
            static RtcmDataField *DF085;
            static RtcmDataField *DF086;
            static RtcmDataField *DF087;
            static RtcmDataField *DF088;
            static RtcmDataField *DF089;
            static RtcmDataField *DF090;
            static RtcmDataField *DF091;
            static RtcmDataField *DF092;
            static RtcmDataField *DF093;
            static RtcmDataField *DF094;
            static RtcmDataField *DF095;
            static RtcmDataField *DF096;
            static RtcmDataField *DF097;
            static RtcmDataField *DF098;
            static RtcmDataField *DF099;
            static RtcmDataField *DF100;
            static RtcmDataField *DF101;
            static RtcmDataField *DF102;
            static RtcmDataField *DF103;
            static RtcmDataField *DF104;
            static RtcmDataField *DF105;
            static RtcmDataField *DF106;
            static RtcmDataField *DF107;
            static RtcmDataField *DF108;
            static RtcmDataField *DF109;
            static RtcmDataField *DF110;
            static RtcmDataField *DF111;
            static RtcmDataField *DF112;
            static RtcmDataField *DF113;
            static RtcmDataField *DF114;
            static RtcmDataField *DF115;
            static RtcmDataField *DF116;
            static RtcmDataField *DF117;
            static RtcmDataField *DF118;
            static RtcmDataField *DF119;
            static RtcmDataField *DF120;
            static RtcmDataField *DF121;
            static RtcmDataField *DF122;
            static RtcmDataField *DF123;
            static RtcmDataField *DF124;
            static RtcmDataField *DF125;
            static RtcmDataField *DF126;
            static RtcmDataField *DF127;
            static RtcmDataField *DF128;
            static RtcmDataField *DF129;
            static RtcmDataField *DF130;
            static RtcmDataField *DF131;
            static RtcmDataField *DF132;
            static RtcmDataField *DF133;
            static RtcmDataField *DF134;
            static RtcmDataField *DF135;
            static RtcmDataField *DF136;
            static RtcmDataField *DF137;
            static RtcmDataField *DF252;
            static RtcmDataField *DF289;
            static RtcmDataField *DF290;
            static RtcmDataField *DF291;
            static RtcmDataField *DF292;
            static RtcmDataField *DF293;
            static RtcmDataField *DF294;
            static RtcmDataField *DF295;
            static RtcmDataField *DF296;
            static RtcmDataField *DF297;
            static RtcmDataField *DF298;
            static RtcmDataField *DF299;
            static RtcmDataField *DF300;
            static RtcmDataField *DF301;
            static RtcmDataField *DF302;
            static RtcmDataField *DF303;
            static RtcmDataField *DF304;
            static RtcmDataField *DF305;
            static RtcmDataField *DF306;
            static RtcmDataField *DF307;
            static RtcmDataField *DF308;
            static RtcmDataField *DF309;
            static RtcmDataField *DF310;
            static RtcmDataField *DF311;
            static RtcmDataField *DF312;
            static RtcmDataField *DF313;
            static RtcmDataField *DF314;
            static RtcmDataField *DF315;
            static RtcmDataField *DF316;
            static RtcmDataField *DF317;
            static RtcmDataField *DF365;
            static RtcmDataField *DF366;
            static RtcmDataField *DF367;
            static RtcmDataField *DF368;
            static RtcmDataField *DF369;
            static RtcmDataField *DF370;
            static RtcmDataField *DF375;
            static RtcmDataField *DF376;
            static RtcmDataField *DF377;
            static RtcmDataField *DF378;
            static RtcmDataField *DF384;
            static RtcmDataField *DF385;
            static RtcmDataField *DF386;
            static RtcmDataField *DF387;
            static RtcmDataField *DF388;
            static RtcmDataField *DF391;
            static RtcmDataField *DF392;
            static RtcmDataField *DF413;
            static RtcmDataField *DF414;
            static RtcmDataField *DF415;
            static RtcmDataField *DF429;
            static RtcmDataField *DF430;
            static RtcmDataField *DF431;
            static RtcmDataField *DF432;
            static RtcmDataField *DF433;
            static RtcmDataField *DF434;
            static RtcmDataField *DF435;
            static RtcmDataField *DF436;
            static RtcmDataField *DF437;
            static RtcmDataField *DF438;
            static RtcmDataField *DF439;
            static RtcmDataField *DF440;
            static RtcmDataField *DF441;
            static RtcmDataField *DF442;
            static RtcmDataField *DF443;
            static RtcmDataField *DF444;
            static RtcmDataField *DF445;
            static RtcmDataField *DF446;
            static RtcmDataField *DF447;
            static RtcmDataField *DF448;
            static RtcmDataField *DF449;
            static RtcmDataField *DF450;
            static RtcmDataField *DF451;
            static RtcmDataField *DF452;
            static RtcmDataField *DF453;
            static RtcmDataField *DF454;
            static RtcmDataField *DF455;
            static RtcmDataField *DF456;
            static RtcmDataField *DF457;
            static RtcmDataField *DF458;
            static RtcmDataField *DF488;
            static RtcmDataField *DF489;
            static RtcmDataField *DF490;
            static RtcmDataField *DF491;
            static RtcmDataField *DF492;
            static RtcmDataField *DF493;
            static RtcmDataField *DF494;
            static RtcmDataField *DF495;
            static RtcmDataField *DF496;
            static RtcmDataField *DF497;
            static RtcmDataField *DF498;
            static RtcmDataField *DF499;
            static RtcmDataField *DF500;
            static RtcmDataField *DF501;
            static RtcmDataField *DF502;
            static RtcmDataField *DF503;
            static RtcmDataField *DF504;
            static RtcmDataField *DF505;
            static RtcmDataField *DF506;
            static RtcmDataField *DF507;
            static RtcmDataField *DF508;
            static RtcmDataField *DF509;
            static RtcmDataField *DF510;
            static RtcmDataField *DF511;
            static RtcmDataField *DF512;
            static RtcmDataField *DF513;
            static RtcmDataField *DF514;
            static RtcmDataField *DF515;

            static RtcmDataField valueOf(const ::java::lang::String &);
            static JArray< RtcmDataField > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          extern PyType_Def PY_TYPE_DEF(RtcmDataField);
          extern PyTypeObject *PY_TYPE(RtcmDataField);

          class t_RtcmDataField {
          public:
            PyObject_HEAD
            RtcmDataField object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RtcmDataField *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RtcmDataField&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RtcmDataField&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
